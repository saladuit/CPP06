/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ScalarConverter.cpp                             |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/08 10:40:42 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/08 10:40:42 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

/* **************************Private_member_functions************************ */

void ScalarConverter::printChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::printInt(int i)
{
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f)
{
	std::cout << "float: " << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void ScalarConverter::printDouble(double d)
{
	std::cout << "double: " << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::printImpossible()
{
	std::cout << "impossible" << std::endl;
}

/* **************************Public_member_functions************************* */

void ScalarConverter::convert(const std::string &input)
{
	if (input.length() == 1)
	{
		char c = input[0];
		printChar(c);
		printInt(c);
		printFloat(c);
		printDouble(c);
	}
	else
	{
		try
		{
			int i = std::stoi(input);
			printChar(static_cast<char>(i));
			printInt(i);
			printFloat(static_cast<float>(i));
			printDouble(static_cast<double>(i));
		}
		catch (const std::exception &e)
		{
			try
			{
				float f = std::stof(input);
				printChar(static_cast<char>(f));
				printInt(static_cast<int>(f));
				printFloat(f);
				printDouble(static_cast<double>(f));
			}
			catch (const std::exception &e)
			{
				try
				{
					double d = std::stod(input);
					printChar(static_cast<char>(d));
					printInt(static_cast<int>(d));
					printFloat(static_cast<float>(d));
					printDouble(d);
				}
				catch (const std::exception &e)
				{
					printImpossible();
				}
			}
		}
	}
}

/* **************************Orthodox_Canonical_Form************************* */

ScalarConverter::ScalarConverter()
{
	std::cout << MAG << "ScalarConverter" GRN "'s default constructor called"
			  << std::endl
			  << *this << NC;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	(void)rhs;
	std::cout << MAG << "ScalarConverter" GRN "'s copy constructor called"
			  << std::endl
			  << *this << NC;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
	{
		std::cout << MAG
				  << "ScalarConverter" GRN "'s assignment operator called"
				  << std::endl
				  << *this << NC;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << BRED << " called " MAG "ScalarConverter" BRED " destructor at "
			  << this << NC << std::endl;
}

std::ostream &operator<<(std::ostream &out,
						 const ScalarConverter &scalarconverter)
{
	out << "ScalarConverter at " << &scalarconverter << std::endl;
	return (out);
}

/* ************************************************************************** */
