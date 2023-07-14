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

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [input]" << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(argv[1]);
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
