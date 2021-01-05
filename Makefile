###############
## Variables ##
###############

NAME		=	libft.a

SRC			=	atoi.c \
				bzero.c \
				calloc.c \
				isalnum.c \
				isalpha.c \
				isascii.c \
				isdigit.c \
				isprint.c \
				itoa.c \
				memccpy.c \
				memchr.c \
				memcmp.c \
				memcpy.c \
				memmove.c \
				memset.c \
				putcharfd.c \
				putendlfd.c \
				putnbrfd.c \
				putstrfd.c \
				split.c \
				strchr.c \
				strdup.c \
				strjoin.c \
				strlcat.c \
				strlcpy.c \
				strlen.c \
				strmapi.c \
				strncmp.c \
				strnstr.c \
				strrchr.c \
				strtrim.c \
				substr.c \
				tolower.c \
				toupper.c
BSRC		=	lstadd_back_bonus.c \
				lstadd_front_bonus.c \
				lstclear_bonus.c \
				lstdelone_bonus.c \
				lstiter_bonus.c \
				lstlast_bonus.c \
				lstmap_bonus.c \
				lstnew_bonus.c \
				lstsize_bonus.c
INCLD		=	libft.h
OBJ			:=	$(SRC:%.c=%.o)
BOBJ		:=	$(BSRC:%.c=%.o)

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
INCFLAGS	=	-include $(INCLD)
RM			=	/bin/rm -rf
AR			=	ar
ARFLAGS		=	rcs


###########
## Rules ##
###########

.PHONY:			all bonus clean fclean re

all:			$(NAME)

%.o:			%.c
				$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				$(AR) $(ARFLAGS) $@ $^

bonus:			
				@make all OBJ="$(OBJ) $(BOBJ)"

clean:
				$(RM) $(BOBJ) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
