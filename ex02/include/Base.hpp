/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Base.hpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/19 12:54:42 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/19 12:54:42 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <Color.hpp>
#include <Defines.hpp>
#include <iostream>

class Base
{
  public:
	virtual ~Base();
	Base *generate(void);
	void identify(Base *p);
	void identify(Base &p);
};

#endif

/* ************************************************************************** */
