#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::string rgb_to_hex(int red, int green, int blue) { // Input RGB values (0-255)
	int hex_value = 0;
	hex_value = red * 0x10000 + green * 0x100 + blue;
	std::stringstream hex_str;
	hex_str << "#" << std::hex << hex_value;
	return hex_str.str();
}

std::vector<int> hex_to_rgb(std::string hex_value) { // Input a HEX string
	int red = '0x' + hex_value[2, 3];
	int green = '0x' + hex_value[4, 5];
	int blue = '0x' + hex_value[6, 7];
	return std::vector<int> { int(red), int(green), int(blue) };
}

int main() {
	return 0;
}
