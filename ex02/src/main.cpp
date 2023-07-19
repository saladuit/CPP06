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

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

#include <cstdlib>

int main()
{
	Base *base = new Base();
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();

	base->identify(a);
	base->identify(b);
	base->identify(c);
	std::cout << std::endl;
	base->identify(*a);
	base->identify(*b);
	base->identify(*c);
	std::cout << std::endl;
	delete base;
	delete a;
	delete b;
	delete c;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
