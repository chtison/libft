.PHONY: all clean fclean re test

NAME    := libft.a
LIB_DIR := libstd

ifeq ($(shell uname -s), Darwin)
AR     := ar -rcu
RANLIB := ranlib -
else
AR     := ar -rc
RANLIB := ranlib
endif

PWD         := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
LIBS        := $(foreach DIR, $(LIB_DIR), $(DIR)/$(DIR).a)
LIB_DIR_OBJ  = $(foreach DIR, $(LIB_DIR), $(addprefix $(DIR)/, $(shell cd $(PWD)/$(DIR) && $(MAKE) print-objs)))

DISPLAYNAME := echo "\033[32mLibrary created: \033[31m[\033[1m $(NAME) \033[22m]\033[0m"
MAKE        += --no-print-directory

all: $(NAME)

$(NAME): $(LIBS)
	@$(AR) $(NAME) $(LIB_DIR_OBJ)
	@$(RANLIB) $(NAME)
	@$(DISPLAYNAME)

$(LIBS):
	@$(MAKE) -C $(dir $@)

clean:
	@for DIR in $(LIB_DIR) ; do cd $(PWD)/$$DIR && $(MAKE) fclean ; done

fclean: clean
	rm -f -- $(NAME)

re: fclean all

test:
	@for DIR in $(LIB_DIR) ; do cd $(PWD)/$$DIR && $(MAKE) test ; done
