#pragma once

#include "ast/nodes.hpp"

expr* parse_arith(token_list& Token_list, int& index);

expr* parse_multi_divis(token_list& Token_list, int& index);
