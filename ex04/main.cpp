#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <file> <to_replace> <replacer>" << std::endl;
		return 1;
	}
	std::ifstream in(argv[1]);
	if (!in) {
		std::cerr << "Can't open file" << std::endl;
		return 1;
	}
	std::string file_name = argv[1];
	std::string to_replace = argv[2];
	std::string replacer = argv[3];
	std::ofstream out((file_name + ".replace").c_str());
	if (!out) {
		std::cerr << "Can't create output file" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(in, line)) {
		size_t pos = 0;
		while ((pos = line.find(to_replace, pos)) != std::string::npos) {
			line.erase(pos, to_replace.length());
			line.insert(pos, replacer);
			pos += replacer.length();
		}
		out << line << std::endl;
	}
	return 0;
}