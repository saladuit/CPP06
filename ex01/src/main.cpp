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

#include <Data.hpp>
#include <Serializer.hpp>

int main()
{
	Data data = {42, 3};
	Data *ptr = &data;

	uintptr_t serialized = Serializer::serialize(ptr);
	Data *deserialized = Serializer::deserialize(serialized);

	if (ptr == deserialized)
		std::cout << "Serialization and deserialization successful!"
				  << std::endl;
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
