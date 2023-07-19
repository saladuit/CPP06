/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Serializer.hpp                                  |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/14 13:13:39 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/14 13:13:39 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <Color.hpp>
#include <Data.hpp>
#include <Defines.hpp>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

class Serializer
{
  public:
	Serializer();
	~Serializer();
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);

  private:
	Serializer(const Serializer &rhs);
	Serializer &operator=(const Serializer &rhs);
};

#endif

/* ************************************************************************** */
