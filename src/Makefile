NAME	= MasterMind

CC	= gcc

RM	= rm -f

SRCS	= ./functions.c \
	  ./main.c 

DSRCS	= ./functions.debug.c \
	./main.c

OBJS	= $(SRCS:.c=.o)

DOBJS	= $(DSRCS:.c=.o)

CFLAGS = -I 
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

debug:	 $(DOBJS)
	 $(CC) $(DOBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(DOBJS)

re: fclean all

.PHONY: all clean fclean re debug
