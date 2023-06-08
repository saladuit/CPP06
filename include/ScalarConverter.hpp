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
#include <Defines.hpp>
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
	static void printChar(char c);
	static void printInt(int i);
	static void printFloat(float f);
	static void printDouble(double d);
	static void printImpossible();
};

std::ostream &operator<<(std::ostream &out,
						 const ScalarConverter &scalarconverter);

#endif

/* ************************************************************************** */
