#ifndef CONSTANTS_H
#define CONSTANTS_H

#define LEXEME_LENGTH 100

/* Output helpers */
#define PROGRAM_ID "Jeffrey Walraven - CSIS 434 (1), Spring 2017 - Lexical Analyzer"
#define TAB "       "

/* Character classes */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

/* Token codes */
#define RESERVED_WORD 10
#define VARIABLE 11
#define STRING_LIT 12
#define COMMA 13
#define QUOTE_MARK 14

#define NUM_RESERVED_WORDS 8
const char reservedWords[NUM_RESERVED_WORDS][7] = {
	"BEGIN",
	"END",
	"CHAR",
	"STRING",
	"OUTPUT",
	"INPUT",
	"EQ",
	"NEG"
};

inline char* charArrayForToken(int token)
{
	switch(token)
	{
	case RESERVED_WORD:
		return "RESERVED_WORD";
	case VARIABLE:
		return "VARIABLE";
	case STRING_LIT:
		return "STRING_LIT";
	case COMMA:
		return "COMMA";
	case QUOTE_MARK:
		return "QUOTE_MARK";
	case EOF:
		return "EOF";
	default:
		return "UNKOWN";
	}
	return "";
}

#endif