###############
## Variables ##
###############

NAME		=	tester

SRCDIR		=	src
RSRCDIR		=	rsrc
INCDIR		=	incld
OBJDIR		=	obj
LIBDIR		=	..

SRC			:=	$(wildcard $(SRCDIR)/*.c)
RSRC		:=	$(wildcard $(RSRCDIR)/*)
OBJ			:=	$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g3
INC			=	-I./$(INCDIR) -I$(LIBDIR)/$(INCDIR)
LIB			=	-L$(LIBDIR) -lft -lbsd
RM			=	/bin/rm -rf


###########
## Rules ##
###########

.PHONY:			all clean fclean lib re so

all:			lib $(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c | $(OBJDIR)
				$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR):
				mkdir $@

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $^ $(LIB)

lib:
				$(MAKE) -C $(LIBDIR)

clean:
				$(RM) $(OBJ)

debug:			CFLAGS += -fsanitize=address
debug:			all

fclean:			clean
				$(RM) $(OBJDIR) $(NAME) $(RSRC)

re:				fclean all
