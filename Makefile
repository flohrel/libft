###############
## Variables ##
###############

SNAME		=	libft.a
DNAME		=	libft.so

SRCDIR		=	src
INCDIR		=	incld
SDIR		=	build-static
DDIR		=	build-shared
BDIR		=	bonus

SRC			:=	$(wildcard $(SRCDIR)/*.c)
BSRC		:=	$(wildcard $(BDIR)/*.c)
SOBJ		:=	$(SRC:$(SRCDIR)/%.c=$(SDIR)/%.o)
DOBJ		:=	$(SRC:$(SRCDIR)/%.c=$(DDIR)/%.o)

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
INCFLAGS	=	-I./$(INCDIR)
LDFLAGS		=	-shared
RM			=	/bin/rm -rf
AR			=	ar
ARFLAGS		=	rcs


###########
## Rules ##
###########

.PHONY:			all bonus clean fclean re so

all:			$(SNAME)

$(SDIR)/%.o:	$(SRCDIR)/%.c | $(SDIR)
				$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(DDIR)/%.o:	$(SRCDIR)/%.c | $(DDIR)
				$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(SNAME):		$(SOBJ)
				$(AR) $(ARFLAGS) $@ $^

$(DNAME):		$(DOBJ)
				$(CC) $(LDFLAGS) $^ -o $@

$(SDIR) $(DDIR):
				mkdir $@

bonus:			SRC += $(BSRC)
bonus:			$(SNAME)

so:				CFLAGS += -fPIC
so:				$(DNAME)

clean:
				$(RM) $(SOBJ) $(DOBJ)

fclean:			clean
				$(RM) $(SDIR) $(DDIR) $(SNAME) $(DNAME)

re:				fclean all
