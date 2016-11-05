/*
 * FICHIER DE TEST
*/

#include "ft_libft.h"

static void ft_putchar_test(void)
{
	ft_putchar('a');
	ft_putchar('\n');
}

static void	ft_putstr_test(void)
{
	ft_putstr("hihi\n");
}

static void	ft_putendl_test(void)
{
	ft_putendl("haha");
}

static void	ft_putnbr_test(void)
{
	ft_putnbr(89123);
	ft_putchar('\n');
	ft_putnbr(-89123);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}

static void	ft_putchar_fd_test(int fd)
{
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
}

static void	ft_putstr_fd_test(int fd)
{
	ft_putstr_fd("haha\n", fd);
}

static void	ft_putendl_fd_test(int fd)
{
	ft_putendl_fd("hihi", fd);
}

static void ft_putnbr_fd_test(int fd)
{
	ft_putnbr_fd(89123, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-89123, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);
}

static int	ft_open_close(char *s, int fd, int var)
{
	if (var == 1)
	{
		close(fd);
		return (-1);
	}
	if (fd == 0)
		fd = open(s, O_RDWR);
	else if (fd != 0)
	{
		close(fd);
		fd = open(s, O_RDWR);
	}
	return (fd);
}

static void	ft_itoa_test(void)
{
	char *array;

	array = ft_itoa(15);
	ft_putendl(array);
	array = ft_itoa(0);
	ft_putendl(array);
	array = ft_itoa(-1000);
	ft_putendl(array);
	array = ft_itoa(-2147483648);
	ft_putendl(array);
}

int main(int argc, char *argv[])
{
	int fd;

	fd = 0;
	(void)argc;
	(void)argv;
	//ft_putchar_test();
	//ft_putstr_test();
	//ft_putendl_test();
	//ft_putnbr_test();
	//fd = ft_open_close("test", fd, 0);
	//ft_putchar_fd_test(fd);
	//ft_putstr_fd_test(fd);
	//ft_putendl_fd_test(fd);
	//ft_putnbr_fd_test(fd);
	//fd = ft_open_close("test", fd, 1);
	ft_itoa_test();
	
	return (0);
}
