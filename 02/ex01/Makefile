########################################################################################################################
#                                                       VARIABLE                                                       #
########################################################################################################################

SRCS	:=	main.cpp	\
			Fixed.cpp

SRCS_D	:=	srcs/

OBJS_D	:=	objs/

OBJS	:=	$(SRCS:%.cpp=$(OBJS_D)%.o)

HEAD	:=	Fixed.hpp

HEAD_D	:=	includes/

CFLAGS	:=	c++ -Wall -Wextra -Werror -std=c++98

BIN		:=	fixed

########################################################################################################################
#                                                        RULES                                                         #
########################################################################################################################

all:	$(BIN)

$(BIN):	$(OBJS_D) $(OBJS)
	$(CFLAGS) -o $(BIN) $(OBJS)

$(OBJS_D)%.o:	$(SRCS_D)%.cpp Makefile $(HEAD_D)*.hpp
			$(CFLAGS) -I$(HEAD_D) -c $< -o $@

$(OBJS_D)	:
			@mkdir -p $(OBJS_D)

########################################################################################################################
#                                                        COMMANDS                                                      #
########################################################################################################################

clean:
	$(RM) -r $(OBJS) $(OBJS_D)

fclean:	clean
	$(RM) $(BIN)

re:	fclean all

.PHONY:	all bonus clean fclean re