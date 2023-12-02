NAME = libftprintf.a

SRCS = \
		ft_printf.c \
		ft_putnbr.c \
		ft_putstr.c \


OBJS = $(SRCS:.c=.o)

INCS = ft_printf.h

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS) $(INCS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(INCS)
	$(CC) $(CFLAGS) -o $@ -c $< 

clean : 
	$(RM) $(OBJS)

fclean :
	$(MAKE) clean
	$(RM) $(NAME)
	$(RM) a.out

re : 
	$(MAKE) fclean 
	$(MAKE) all

.PHONY : all clean fclean re