#ifndef LEX_H
#define LEX_H

#include <stdint.h>

struct compilation_unit;
struct array;

struct lexer {
	struct compilation_unit* unit;
	uint64_t row, col;
	uint64_t pos;
};

struct lexer_info {
	struct array* token_stream;

	// diagnostic information
	uint64_t lines_lexed;
};

struct lexer_info
tokenize(struct lexer* lex, struct compilation_unit* unit);

#endif
