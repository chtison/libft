### Name
NAME		:= libft.a
### Libraries to compile in libft.a
LIB_DIR		:= liblist libstd
### 
ifeq ($(shell uname -s), Darwin)
AR			:= ar -rcu
RANLIB		:= ranlib -
else
AR			:= ar -rc
RANLIB		:= ranlib
endif
###
LIBS		:= $(foreach DIR, $(LIB_DIR), $(DIR)/$(DIR).a)
LIB_DIR_OBJ	 = $(foreach DIR, $(LIB_DIR), $(wildcard $(DIR)/obj/*.o))

DISPLAYNAME = echo "\033[32mLibrary created: \033[31m[\033[1m $(NAME) \033[22m]\033[0m"

.PHONY: all clean fclean test re

all: $(NAME)

$(NAME): $(LIBS)
	@$(AR) $(NAME) $(LIB_DIR_OBJ)
	@$(RANLIB) $(NAME)
	@$(DISPLAYNAME)

$(LIBS):
	@$(MAKE) -C $(dir $@)

clean:
	@for DIR in $(LIB_DIR) ; do $(MAKE) -C $$DIR clean ; done

fclean:
	@for DIR in $(LIB_DIR) ; do $(MAKE) -C $$DIR fclean ; done
	@-rm -f -- $(NAME)

test:
	@for DIR in $(LIB_DIR) ; do $(MAKE) -C $$DIR test ; done

re: fclean all
