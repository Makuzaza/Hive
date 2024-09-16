/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:22:23 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/11 15:13:09 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h> // For the write function

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char *str = "Hello";
// 	char *str1 = "Hello!";
// 	char *str2 = "Hello, World!";
// 	char *str3 = "Hello123";
// 	char *str4 = "12345";
// 	char *str5 = "";

// 	// Test the function with different strings
// 	write(1, "String: Hello\n", 14);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	write(1, "String: Hello!\n", 15);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str1) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	write(1, "String: Hello, World!\n", 22);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str2) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	write(1, "String: Hello123\n", 17);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str3) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	write(1, "String: 12345\n", 14);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str4) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	write(1, "String: \"\"\n", 11);
// 	write(1, "Result: ", 8);
// 	write(1, ft_str_is_alpha(str5) ? "1" : "0", 1);
// 	write(1, "\n", 1);

// 	return 0;
// }