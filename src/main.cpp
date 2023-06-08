/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:46 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main()
{
	ScalarConverter::convert("0");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("inf");
	ScalarConverter::convert("inff");
	ScalarConverter::convert("infff");
	ScalarConverter::convert("42");
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("42.0f");
	ScalarConverter::convert("42.42");
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
