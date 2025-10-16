# ─────────────────────────────────────────────────────────────
#  ░  ░░░░░░░░        ░░       ░░░        ░░        ░
#  ▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒  ▒▒▒▒  ▒▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒
#  ▓  ▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓       ▓▓▓      ▓▓▓▓▓▓▓  ▓▓▓▓
#  █  ███████████  █████  ████  ██  ███████████  ████
#  █        ██        ██       ███  ███████████  ████
# ─────────────────────────────────────────────────────────────
# Static library with banner + deps + obj/ dir
# Usage:
#   make            # build lib
#   make V=1        # verbose
#   make clean/fclean/re
# ─────────────────────────────────────────────────────────────

# --- Config ---
NAME     := libft.a
CC       := gcc
AR       := ar
ARFLAGS  := rcs
CFLAGS   := -Wall -Wextra -Werror
OBJDIR   := obj


SRC =	ft_isalpha.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c

OBJ = $(SRC:.c=.o)

# --- Rules ---
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^
	@echo "\033[1;35m"
	@echo "██████████████████████████████████████████████████"
	@echo "░  ░░░░░░░░        ░░       ░░░        ░░        ░"
	@echo "▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒  ▒▒▒▒  ▒▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒"
	@echo "▓  ▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓       ▓▓▓      ▓▓▓▓▓▓▓  ▓▓▓▓"
	@echo "█  ███████████  █████  ████  ██  ███████████  ████"
	@echo "█        ██        ██       ███  ███████████  ████"
	@echo "██████████████████████████████████████████████████"
	@echo "\033[0m"
	@echo "\033[1;35m📦 Archive built successfully: \033[0m$(NAME)"

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@echo "🧱 Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	@echo "🧹 Removing object files..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "🗑 Removing archive..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
