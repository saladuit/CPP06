/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ScalarConverter.hpp                             |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/08 10:02:12 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/08 10:02:12 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <Color.hpp>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

class ScalarConverter
{
  public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	~ScalarConverter();
	static void convert(const std::string &input);

  private:
	enum type_t
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		IMPOSSIBLE
	};
	static type_t detectType(const std::string &input);
	static void printFromCharType(char c);
	static void extracted(int &i);
	static void printFromIntType(int i);
	static void printFromFloatType(float f);
	static void printFromDoubleType(double d);
	static void printImpossible();

	template <typename T> static void printChar(T c)
	{
		if (std::isnan(c) || CHAR_MIN > c || c > CHAR_MAX)
			std::cout << Color::red << "impossible" << Color::reset
					  << std::endl;
		else if (std::isprint(static_cast<char>(c)))
			std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}

	template <typename T> static void printInt(T i)
	{
		if (std::isnan(i) || INT_MIN > i || i > INT_MAX)
			std::cout << Color::red << "impossible" << Color::reset
					  << std::endl;
		else
			std::cout << static_cast<int>(i) << std::endl;
	}

	template <typename T> static void printFloat(T f)
	{
		std::cout << static_cast<float>(f);
		if (f - static_cast<int>(f) == 0)
			std::cout << ".0";
		std::cout << "f";
		std::cout << std::endl;
	}

	template <typename T> static void printDouble(T d)
	{
		std::cout << static_cast<double>(d);
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
};

#endif

/* ************************************************************************** */
