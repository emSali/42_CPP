NAME 			= fragtrap
SRCS 			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS 			= $(SRCS:.cpp=.o)
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98
CC				= c++

.cpp.o:
	$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)

re: fclean all
