#pragma once

#include "./expr_entity.hpp"

class expr_string : public expr_entity {
public:
	expr_string(token_string* val, int begin, int end) : expr_entity(begin, end), VALUE(val) {};

	token_string* VALUE;

	std::wstring view() {
		return this->VALUE->view();
	}

	semantic_node* eval(environment env, const runtime& Runtime) {
		return new builtin_object_string { this->VALUE->VALUE };
	}
};