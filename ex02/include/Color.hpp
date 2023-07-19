/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Color.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/25 11:27:00 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/25 11:27:00 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H_
#define COLOR_H_

#include <string>

class Color
{
  public:
	static const std::string red;
	static const std::string green;
	static const std::string yellow;
	static const std::string blue;
	static const std::string magenta;
	static const std::string cyan;
	static const std::string white;
	static const std::string black;

	static const std::string bold_red;
	static const std::string bold_green;
	static const std::string bold_yellow;
	static const std::string bold_blue;
	static const std::string bold_magenta;
	static const std::string bold_cyan;
	static const std::string bold_white;
	static const std::string bold_black;

	static const std::string reset;
};

/* **********************************Normal********************************** */

const std::string Color::red = "\x1B[0;31m";
const std::string Color::green = "\x1B[0;32m";
const std::string Color::yellow = "\x1B[0;33m";
const std::string Color::blue = "\x1B[0;34m";
const std::string Color::magenta = "\x1B[0;35m";
const std::string Color::cyan = "\x1B[0;36m";
const std::string Color::white = "\x1B[0;37m";
const std::string Color::black = "\x1B[0;30m";
const std::string Color::reset = "\x1B[0m";

/* ***********************************Bold*********************************** */

const std::string Color::bold_red = "\x1B[1;37m";
const std::string Color::bold_green = "\x1B[1;30m";
const std::string Color::bold_yellow = "\x1B[1;31m";
const std::string Color::bold_blue = "\x1B[1;35m";
const std::string Color::bold_magenta = "\x1B[1;36m";
const std::string Color::bold_cyan = "\x1B[1;34m";
const std::string Color::bold_white = "\x1B[1;32m";
const std::string Color::bold_black = "\x1B[1;33m";

/* ********************************Background******************************** */

#define BGWHT "\x1B[1;47m" // White
#define BGBLK "\x1B[1;40m" // Black
#define BGRED "\x1B[1;41m" // Red
#define BGMAG "\x1B[1;45m" // Magenta
#define BGCYN "\x1B[1;46m" // Cyan
#define BGBLU "\x1B[1;44m" // Blue
#define BGGRN "\x1B[1;42m" // Green
#define BGYEL "\x1B[1;43m" // Yellow

#endif

/* ************************************************************************** */
