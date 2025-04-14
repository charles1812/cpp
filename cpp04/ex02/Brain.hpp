#pragma once

#include <string>

class Brain {
	public:
	Brain(void);
	Brain(const Brain &brain);
	~Brain(void);

	Brain &operator=(const Brain &rhs);

	std::string ideas[100];
};
