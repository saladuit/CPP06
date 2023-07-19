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

#include <Color.hpp>
#include <ScalarConverter.hpp>

/* **************************Private_member_functions************************ */

void ScalarConverter::printFromCharType(char c)
{
	std::cout << Color::green << "char: " << Color::reset;
	ScalarConverter::printChar(c);
	std::cout << Color::yellow << "int: " << Color::reset;
	ScalarConverter::printInt(c);
	std::cout << Color::yellow << "float: " << Color::reset;
	ScalarConverter::printFloat(c);
	std::cout << Color::yellow << "double: " << Color::reset;
	ScalarConverter::printDouble(c);
}

void ScalarConverter::printFromIntType(int i)
{
	std::cout << Color::yellow << "char: " << Color::reset;
	ScalarConverter::printChar(i);
	std::cout << Color::green << "int: " << Color::reset;
	ScalarConverter::printInt(i);
	std::cout << Color::yellow << "float: " << Color::reset;
	ScalarConverter::printFloat(i);
	std::cout << Color::yellow << "double: " << Color::reset;
	ScalarConverter::printDouble(i);
}

void ScalarConverter::printFromFloatType(float f)
{
	std::cout << Color::yellow << "char: " << Color::reset;
	ScalarConverter::printChar(f);
	std::cout << Color::yellow << "int: " << Color::reset;
	ScalarConverter::printInt(f);
	std::cout << Color::green << "float: " << Color::reset;
	ScalarConverter::printFloat(f);
	std::cout << Color::yellow << "double: " << Color::reset;
	ScalarConverter::printDouble(f);
}

void ScalarConverter::printFromDoubleType(double d)
{
	std::cout << Color::yellow << "char: " << Color::reset;
	ScalarConverter::printChar(d);
	std::cout << Color::yellow << "int: " << Color::reset;
	ScalarConverter::printInt(d);
	std::cout << Color::yellow << "float: " << Color::reset;
	ScalarConverter::printFloat(d);
	std::cout << Color::green << "double: " << Color::reset;
	ScalarConverter::printDouble(d);
}

void ScalarConverter::printImpossible()
{
	std::cout << Color::red << "char: impossible" << Color::reset << std::endl
			  << Color::red << "int: impossible" << Color::reset << std::endl
			  << Color::red << "float: impossible" << Color::reset << std::endl
			  << Color::red << "double: impossible" << Color::reset
			  << std::endl;
}

/* **************************Public_member_functions************************* */

void ScalarConverter::convert(const std::string &input)
{
	type_t type = detectType(input);
	try
	{
		switch (type)
		{
		case CHAR:
			printFromCharType(input[0]);
			break;
		case INT:
			printFromIntType(std::stoi(input));
			break;
		case FLOAT:
			printFromFloatType(std::stof(input));
			break;
		case DOUBLE:
			printFromDoubleType(std::stod(input));
			break;
		case IMPOSSIBLE:
			printImpossible();
			break;
		}
	}
	catch (std::exception &e)
	{
		printImpossible();
	}
}

static bool all_digits(const std::string &input)
{
	for (size_t i = 0; i < input.length(); i++)
		if (!std::isdigit(input[i]))
			return (false);
	return (true);
}

ScalarConverter::type_t ScalarConverter::detectType(const std::string &str)
{
	std::string input = str;
	if (input.length() == 1 && !std::isdigit(input[0]))
		return (CHAR);
	if (input == "nan" || input == "inf" || input == "+inf" || input == "-inf")
		return (DOUBLE);
	if (input == "nanf" || input == "inff" || input == "+inff" ||
		input == "-inff")
		return (FLOAT);
	if (input[0] == '+' || input[0] == '-')
		input = input.substr(1);
	if (input.length() >= 1 && all_digits(input))
		return (INT);
	if (input.find('.') == input.npos)
		return (IMPOSSIBLE);
	if (input.find('.') != input.rfind('.'))
		return (IMPOSSIBLE);
	if (input.length() >= 2 && all_digits(input.substr(0, input.find('.'))) &&
		all_digits(input.substr(input.find('.') + 1)))
		return (DOUBLE);
	if (input.length() >= 3 && all_digits(input.substr(0, input.find('.'))) &&
		all_digits(
			input.substr(0, input.length() - 1).substr(input.find('.') + 1)) &&
		input[input.length() - 1] == 'f')
		return (FLOAT);
	return (IMPOSSIBLE);
}

/* **************************Orthodox_Canonical_Form************************* */

ScalarConverter::ScalarConverter()
{
	std::cout << Color::magenta << "ScalarConverter" << Color::green
			  << "'s default constructor called" << std::endl
			  << Color::reset;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	(void)rhs;
	std::cout << Color::magenta << "ScalarConverter" << Color::green
			  << "'s copy constructor called" << std::endl
			  << Color::reset;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
	{
		std::cout << Color::magenta << "ScalarConverter" << Color::green
				  << "'s assignment operator called" << std::endl
				  << Color::reset;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << Color::bold_red << " called " << Color::magenta
			  << "ScalarConverter" << Color::bold_red << " destructor at "
			  << this << Color::reset << std::endl;
}

/* ************************************************************************** */
