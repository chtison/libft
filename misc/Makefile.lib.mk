.PHONY: all prepare clean fclean re libs test print-objs
# NAME  := name1.a
# SRCS  := file1.c file2.c
# LIBS  := ../libname2/libname2.a # This parameter is optional
GCC     := gcc -Wall -Wextra -Werror -Wconversion -pedantic -O3 -fsigned-char -I../..
ifeq ($(shell uname -s), Darwin)
AR      := ar -rcu
else
AR      := ar -rc
endif
OBJ     := $(SRCS:%.c=obj/%.o)
DEP     := $(SRCS:%.c=obj/dep/%.d)
TESTOBJ := $(SRCS:%.c=tests/obj/%)
TESTDEP := $(SRCS:%.c=tests/obj/dep/%.d)
SRCS    := $(addprefix sources/, $(SRCS))
PWD     := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

DISPLAYNAME = echo "\033[35m-> \033[4mLibrary created\033[24m \033[31m[ \033[1m$(NAME)\033[22m ]\033[0m"
DISPLAYOBJECT = echo "\033[34mObject file created : \033[1;34m$(PWD)/$@\033[0m"

all: prepare $(NAME)

prepare:
	@mkdir -p obj/dep/ tests/obj/dep

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
#	@$(DISPLAYNAME)

obj/%.o: sources/%.c
	@$(GCC) -c $< -o $@
	@$(DISPLAYOBJECT)
	@$(GCC) $< -MM | sed -E 's/^(.+\.o:)/obj\/\1/' > $(@:obj/%.o=obj/dep/%.d)
-include $(DEP)

clean:
	rm -rf -- obj/ tests/obj/

fclean: clean
	rm  -f -- $(NAME)

re: fclean all

tests/obj/%: tests/%.c obj/%.o
	@$(GCC) $< $(NAME) $(LIBS) -o $@ $(TEST_CUSTOM)
	@$(GCC) $< -MM | sed -E 's/^(.+\.o:)/tests\/obj\/\1/' > $(@:tests/obj/%=tests/obj/dep/%.d)
-include $(TESTDEP)

tests/obj/%: ;

libs:
	@-for lib in $(foreach LIB, $(LIBS), $(dir $(LIB))) ; do cd $(PWD)/$$lib && $(MAKE) ; done

test: all libs $(TESTOBJ)
	@-for file in $(TESTOBJ); do if [ -x $$file ]; then ./$$file ; fi ; done

print-objs:
	$(info $(OBJ))
	@true
