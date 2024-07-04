SRC_DIR     = srcs/
SRCS        = $(wildcard $(SRC_DIR)*.c)

OBJ_DIR     = objs/
OBJ_FILES   = $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.c=.o)))
LIBFT_OBJS  = $(shell find $(LIBFT_DIR)objs -type f -name '*.o')

TEST_DIR    = srcs/test/
TEST_SRCS   = $(wildcard $(TEST_DIR)*.c)
TEST_OBJS   = $(addprefix $(OBJ_DIR), $(notdir $(TEST_SRCS:.c=.o)))

LIBFT_DIR   = libft/
LIBFT       = $(LIBFT_DIR)libft.a

HEAD        = include/
LIBFT_HEAD  = $(LIBFT_DIR)includes/

NAME        = libftprintf.a
GCC         = gcc
# CFLAGS      = -Wall -Werror -Wextra
CFLAGS      = 
LIB         = ranlib
RM          = rm -f
AR          = ar rcs

GREEN       = \033[0;92m
YELLOW      = \033[0;33m
BLUE        = \033[0;94m
RESET       = \033[0m

all: $(OBJ_DIR) $(NAME)

bonus: all

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(GCC) $(CFLAGS) -I$(HEAD) -I$(LIBFT_HEAD) -c $< -o $@
	@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "PRINTF"

$(OBJ_DIR)%.o: $(TEST_DIR)%.c | $(OBJ_DIR)
	@$(GCC) $(CFLAGS) -I$(HEAD) -I$(LIBFT_HEAD) -c $< -o $@
	@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "TEST"

$(NAME): $(LIBFT) $(OBJ_FILES) $(LIBFT_OBJS)
	@$(AR) $(NAME) $(OBJ_FILES) $(LIBFT_OBJS)
	@$(LIB) $(NAME)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built libftprintf.a successfully! $(RESET)\n" "PRINTF"

$(LIBFT):
	@make -s -C $(LIBFT_DIR)

test: $(NAME) $(TEST_OBJS)
	@gcc -o exec_test $(TEST_OBJS) $(NAME) $(LIBFT) -I$(HEAD) -I$(LIBFT_HEAD)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built exec_test successfully!$(RESET)\n" "TEST"

clean:
	@$(RM) $(OBJ_FILES) $(TEST_OBJS)
	@$(RM) -r $(OBJ_DIR)
	@make -s -C $(LIBFT_DIR) clean
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned object files!$(RESET)\n" "LIBFT"
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned object files!$(RESET)\n" "PRINTF"

fclean: clean
	@$(RM) $(NAME) exec_test
	@make -s -C $(LIBFT_DIR) fclean
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned library!$(RESET)\n" "LIBFT"
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned library!$(RESET)\n" "PRINTF"
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned test executable!$(RESET)\n" "TEST"

re: fclean all

.PHONY: all clean fclean re test $(LIBFT)
