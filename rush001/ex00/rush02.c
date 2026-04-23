/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 14:35:49 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/05 11:43:34 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush02(int x, int y)
{
	int l;
	int c;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (l == 0 && (c == 0 || c == x -1))
				ft_putchar('A');
			else if (l == y - 1 && (c == 0 || c == x -1))
				ft_putchar('')
		}
	}
}




/*
void	rush02(int x, int y)
{
	int	l;
	int	c;

	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if (c == 0 && (l == 0 || l == x - 1))
				ft_putchar('A');
			else if (c == y - 1 && (l == 0 || l == x - 1))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}



void	rush02(int x, int y)
{
	int l;
	int c = 0;

	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if (c == 0 && (l == 0 || l == x - 1))
				ft_putchar('A');
			else if (c == y - 1 && (l == 0 || l == x - 1))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}



void	rush02(int x, int y)
{
	int l;
	int c;

	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if (c == 0 && (l == 0 || l == x - 1))
				ft_putchar('A');
			else if (c == y - 1 && (l == 0 || l == x - 1))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}


void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int l;
	int c;

	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if (c == 0 && (l == 0 || l == x - 1))
				ft_putchar('A');
			else if (c == y - 1 && (l == 0 || l == x - 1))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}




void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int l;
	int c;

	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if ((c == 0 || c == y - 1) && (l == 0 || l == x - 1))
			{
				if (c == 0)
					ft_putchar('A');
				else
					ft_putchar('C');
			}
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}


void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int l;
	int c;

	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)id -Gn "$FT_USER" | tr ' ' ',' | tr -d '\n'
		{
			if ((c == 0 && (l == 0 || l == x - 1)))
				ft_putchar('A');
			else if ((c == y - 1 && (l == 0 || l == x - 1)))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}


void	ft_putchar(char c);

void	rush02(int largura, int altura)
{
	int	linha;
	int	coluna;

	coluna = 0;
	while (coluna < altura)
	{
		linha = 0;
		while (linha < largura)
		{
			if (coluna == 0 && (linha == 0 || linha == largura - 1))
				ft_putchar('A');
			else if (coluna == altura - 1 && (linha == 0 || linha == largura - 1))
				ft_putchar('C');
			else if (coluna == 0 || coluna == altura - 1 || linha == 0 || linha == largura - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			linha++;
		}
		ft_putchar('\n');
		coluna++;
	}
}

void	rush02(int largura, int altura)
{
	int	linha;
	int	coluna;

	coluna = 0;
	while (coluna < altura)
	{
		linha = 0;
		while (linha < largura)
		{
			if (coluna == 0 && (linha == 0 || linha == largura - 1))
				ft_putchar('A');
			else if (coluna == altura - 1 && (linha == 0 || linha == largura - 1))
				ft_putchar('C');
			else if (coluna == 0 || coluna == altura - 1 || linha == 0 || linha == largura - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			linha++;
		}
		ft_putchar('\n');
		coluna++;
	}
}



void	ft_putchar(char c);

void	print_char(int largura, int altura, int linha, int coluna)
{
	if (coluna == 0 && (linha == 0 || linha == largura - 1))
		ft_putchar('A');
	else if (coluna == altura - 1 && (linha == 0 || linha == largura - 1))
		ft_putchar('C');
	else if (coluna == 0 || coluna == altura - 1 || linha == 0 || linha == largura - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
void	rush02(int largura, int altura)
{
	int	linha;
	int	coluna;

	coluna = 0;
	while (coluna < altura)
	{
		linha = 0;
		while (linha < largura)
		{
			print_char(largura, altura, linha, coluna);
			linha++;
		}
		ft_putchar('\n');
		coluna++;
	}
}








void	ft_putchar(char c);

void	rush02(int largura, int altura)
{
	int linha;
	int coluna;

	coluna = 0;
	while (coluna < altura)
	{
		linha = 0;
		while (linha < largura)
		{
			if (coluna == 0 && (linha == 0 || linha == largura - 1))
				ft_putchar('A');
			else if (coluna == altura - 1 && (linha == 0 || linha == largura - 1))
				ft_putchar('C');
			else if (coluna == 0 || coluna == altura - 1 || linha == 0 || linha == largura - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			linha++;
		}
		ft_putchar('\n');
		coluna++;
	}
}
	*/