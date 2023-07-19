/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Base.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/19 14:57:12 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/19 14:57:12 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

#include <Base.hpp>

#include <Color.hpp>

/* **************************Private_member_functions************************ */

/* **************************Public_member_functions************************* */

Base *Base::generate(void)
{
	int random = rand() % 3;
	if (random == 0)
	{
		std::cout << Color::green << "A" << Color::reset << std::endl;
		return (new A);
	}
	else if (random == 1)
	{
		std::cout << Color::green << "B" << Color::reset << std::endl;
		return (new B);
	}
	else
	{
		std::cout << Color::green << "C" << Color::reset << std::endl;
		return (new C);
	}
}
/* **************************Orthodox_Canonical_Form************************* */

/* ************************************************************************** */
