/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C -F ', 0, 0' -p -j1 -i 1 -g -o -t -G -N is_reserved_word -k'1,3,$' /cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"

/* Command-line: gperf -L KR-C -F ', 0, 0' -p -j1 -i 1 -g -o -t -N is_reserved_word -k1,3,$ c-parse.gperf  */ 
#line 4 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
struct resword { const char *name; short token; enum rid rid; };

#define TOTAL_KEYWORDS 83
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 12
#define MAX_HASH_VALUE 125
/* maximum key range = 114, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126,  19, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126,   1, 126,  12,  50,  17,
       22,  18,  51,  37,   5,  10, 126,  15,  35,  49,
       27,  40,  28, 126,   2,  20,   1,  33,  64,   7,
       11,   4,   7, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
      126, 126, 126, 126, 126, 126
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static struct resword wordlist[] =
  {
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 37 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__real__", REALPART, NORID},
#line 43 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__typeof__", TYPEOF, NORID},
#line 38 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__restrict", TYPE_QUAL, RID_RESTRICT},
#line 69 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"int", TYPESPEC, RID_INT},
#line 39 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__restrict__", TYPE_QUAL, RID_RESTRICT},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 30 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__imag__", IMAGPART, NORID},
#line 21 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__asm__", ASM_KEYWORD, NORID},
#line 32 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__inline__", SCSPEC, RID_INLINE},
#line 33 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__iterator", SCSPEC, RID_ITERATOR},
#line 34 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__iterator__", SCSPEC, RID_ITERATOR},
#line 19 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__alignof__", ALIGNOF, NORID},
#line 26 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__const", TYPE_QUAL, RID_CONST},
#line 23 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__attribute__", ATTRIBUTE, NORID},
#line 27 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__const__", TYPE_QUAL, RID_CONST},
#line 80 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"struct", STRUCT, NORID},
#line 25 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__complex__", TYPESPEC, RID_COMPLEX},
#line 74 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"restrict", TYPE_QUAL, RID_RESTRICT},
#line 41 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__signed__", TYPESPEC, RID_SIGNED},
#line 28 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__extension__", EXTENSION, NORID},
#line 64 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"id", OBJECTNAME, RID_ID},
#line 52 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"char", TYPESPEC, RID_CHAR},
#line 75 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"return", RETURN, NORID},
#line 31 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__inline", SCSPEC, RID_INLINE},
#line 24 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__complex", TYPESPEC, RID_COMPLEX},
#line 66 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"in", TYPE_QUAL, RID_IN},
#line 88 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"while", WHILE, NORID},
#line 81 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"switch", SWITCH, NORID},
#line 22 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__attribute", ATTRIBUTE, NORID},
    {"", 0, 0},
#line 36 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__real", REALPART, NORID},
#line 72 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"out", TYPE_QUAL, RID_OUT},
#line 35 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__label__", LABEL, NORID},
#line 13 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@private", PRIVATE, NORID},
#line 17 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@selector", SELECTOR, NORID},
#line 73 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"register", SCSPEC, RID_REGISTER},
#line 53 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"const", TYPE_QUAL, RID_CONST},
#line 40 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__signed", TYPESPEC, RID_SIGNED},
#line 60 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"extern", SCSPEC, RID_EXTERN},
#line 14 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@protected", PROTECTED, NORID},
#line 29 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__imag", IMAGPART, NORID},
#line 79 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"static", SCSPEC, RID_STATIC},
#line 67 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"inout", TYPE_QUAL, RID_INOUT},
#line 47 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"auto", SCSPEC, RID_AUTO},
#line 62 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"for", FOR, NORID},
#line 51 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"case", CASE, NORID},
#line 58 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"else", ELSE, NORID},
#line 42 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__typeof", TYPEOF, NORID},
#line 8 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@defs", DEFS, NORID},
#line 65 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"if", IF, NORID},
#line 56 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"do", DO, NORID},
#line 15 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@protocol", PROTOCOL, NORID},
#line 76 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"short", TYPESPEC, RID_SHORT},
#line 20 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__asm", ASM_KEYWORD, NORID},
#line 71 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"oneway", TYPE_QUAL, RID_ONEWAY},
#line 68 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"inline", SCSPEC, RID_INLINE},
#line 54 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"continue", CONTINUE, NORID},
#line 9 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@encode", ENCODE, NORID},
#line 10 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@end", END, NORID},
#line 18 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__alignof", ALIGNOF, NORID},
#line 12 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@interface", INTERFACE, NORID},
#line 84 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"union", UNION, NORID},
#line 16 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@public", PUBLIC, NORID},
#line 49 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"bycopy", TYPE_QUAL, RID_BYCOPY},
#line 45 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__volatile__", TYPE_QUAL, RID_VOLATILE},
#line 57 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"double", TYPESPEC, RID_DOUBLE},
#line 6 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@class", CLASS, NORID},
#line 55 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"default", DEFAULT, NORID},
#line 63 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"goto", GOTO, NORID},
#line 85 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"unsigned", TYPESPEC, RID_UNSIGNED},
#line 78 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"sizeof", SIZEOF, NORID},
#line 77 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"signed", TYPESPEC, RID_SIGNED},
#line 83 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"typeof", TYPEOF, NORID},
#line 82 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"typedef", SCSPEC, RID_TYPEDEF},
#line 48 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"break", BREAK, NORID},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 44 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"__volatile", TYPE_QUAL, RID_VOLATILE},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 61 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"float", TYPESPEC, RID_FLOAT},
    {"", 0, 0},
#line 7 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@compatibility_alias", ALIAS, NORID},
#line 86 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"void", TYPESPEC, RID_VOID},
    {"", 0, 0}, {"", 0, 0},
#line 70 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"long", TYPESPEC, RID_LONG},
#line 59 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"enum", ENUM, NORID},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 50 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"byref", TYPE_QUAL, RID_BYREF},
    {"", 0, 0},
#line 11 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"@implementation", IMPLEMENTATION, NORID},
    {"", 0, 0}, {"", 0, 0},
#line 46 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"asm", ASM_KEYWORD, NORID},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
#line 87 "/cygdrive/d/develop/workspaces/c1/amigaos-cross-toolchain/submodules/gcc-2.95.3/gcc/c-parse.gperf"
    {"volatile", TYPE_QUAL, RID_VOLATILE}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct resword *
is_reserved_word (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
