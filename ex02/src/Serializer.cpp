/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Serializer.cpp                                  |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/07/14 13:34:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/07/14 13:34:27 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

/* **************************Private_member_functions************************ */

/* **************************Public_member_functions************************* */

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

/* **************************Orthodox_Canonical_Form************************* */

Serializer::Serializer()
{
	std::cout << MAG << "Serializer" GRN "'s default constructor called"
			  << std::endl
			  << NC;
}

Serializer::~Serializer()
{
	std::cout << BRED << " called " MAG "Serializer" BRED " destructor at "
			  << this << NC << std::endl;
}

/* ************************************************************************** */
