#pragma once

#include "tokens/tokens.hpp"
#include "ast/statements/loops/condition_loop.hpp"

condition_loop* parse_loop(token_list& Token_list);