#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_BSLASH = 7,
  anon_sym_title = 8,
  anon_sym_author = 9,
  anon_sym_contributor = 10,
  anon_sym_date = 11,
  anon_sym_DASH = 12,
  anon_sym_tag = 13,
  anon_sym_ref = 14,
  sym_year = 15,
  sym_month = 16,
  aux_sym_day_token1 = 17,
  aux_sym_day_token2 = 18,
  anon_sym_def = 19,
  anon_sym_alloc = 20,
  anon_sym_taxon = 21,
  anon_sym_meta = 22,
  anon_sym_import = 23,
  anon_sym_export = 24,
  anon_sym_namespace = 25,
  anon_sym_transclude = 26,
  anon_sym_let = 27,
  anon_sym_tex = 28,
  anon_sym_iftex = 29,
  anon_sym_block = 30,
  anon_sym_scope = 31,
  anon_sym_subtree = 32,
  anon_sym_put = 33,
  anon_sym_get = 34,
  anon_sym_open = 35,
  anon_sym_query = 36,
  anon_sym_object = 37,
  anon_sym_patch = 38,
  anon_sym_call = 39,
  sym_comment = 40,
  anon_sym_POUND = 41,
  anon_sym_POUND_POUND = 42,
  anon_sym_p = 43,
  anon_sym_em = 44,
  anon_sym_strong = 45,
  anon_sym_li = 46,
  anon_sym_ul = 47,
  anon_sym_ol = 48,
  anon_sym_code = 49,
  anon_sym_blockquote = 50,
  anon_sym_pre = 51,
  anon_sym_BSLASHquery_SLASHauthor = 52,
  anon_sym_BSLASHquery_SLASHtag = 53,
  anon_sym_BSLASHquery_SLASHtaxon = 54,
  anon_sym_BSLASHquery_SLASHand = 55,
  anon_sym_BSLASHquery_SLASHor = 56,
  aux_sym_ident_token1 = 57,
  anon_sym_LBRACE_RBRACE = 58,
  anon_sym__ = 59,
  anon_sym_LBRACK_LBRACK = 60,
  anon_sym_RBRACK_RBRACK = 61,
  aux_sym__whitespace_token1 = 62,
  sym__alpha = 63,
  sym__digit = 64,
  sym_text = 65,
  sym_source_file = 66,
  sym__node = 67,
  sym_squares = 68,
  sym_parens = 69,
  sym_title = 70,
  sym_author = 71,
  sym_contributor = 72,
  sym_date = 73,
  sym_tag = 74,
  sym_day = 75,
  sym_def = 76,
  sym_alloc = 77,
  sym_taxon = 78,
  sym_meta = 79,
  sym_import = 80,
  sym_export = 81,
  sym_namespace = 82,
  sym_transclude = 83,
  sym_let = 84,
  sym_tex = 85,
  sym_if_tex = 86,
  sym_block = 87,
  sym_scope = 88,
  sym_subtree = 89,
  sym_put = 90,
  sym_get = 91,
  sym_open = 92,
  sym_query_tree = 93,
  sym__default = 94,
  sym_object = 95,
  sym_patch = 96,
  sym_call = 97,
  sym__prim = 98,
  sym_inline_math = 99,
  sym_display_math = 100,
  sym_p = 101,
  sym_em = 102,
  sym_strong = 103,
  sym_li = 104,
  sym_ul = 105,
  sym_ol = 106,
  sym_code = 107,
  sym_blockquote = 108,
  sym_pre = 109,
  sym__query = 110,
  sym__query0 = 111,
  sym_query_author = 112,
  sym_query_tag = 113,
  sym_query_taxon = 114,
  sym_query_and = 115,
  sym_query_or = 116,
  sym_query_meta = 117,
  sym_queries = 118,
  sym_method_decl = 119,
  sym_fun_spec = 120,
  sym_ident = 121,
  sym_ident_with_method_calls = 122,
  sym__arg = 123,
  sym__link = 124,
  sym_addr = 125,
  sym_id = 126,
  sym_prefix = 127,
  sym_markdown_link = 128,
  sym_unlabeled_link = 129,
  sym_external_link = 130,
  sym__whitespace = 131,
  sym__txt_arg = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_braces_repeat1 = 134,
  aux_sym_object_repeat1 = 135,
  aux_sym__query_repeat1 = 136,
  aux_sym_queries_repeat1 = 137,
  aux_sym_fun_spec_repeat1 = 138,
  aux_sym_ident_repeat1 = 139,
  aux_sym_ident_with_method_calls_repeat1 = 140,
  aux_sym__arg_repeat1 = 141,
  aux_sym_id_repeat1 = 142,
  aux_sym_prefix_repeat1 = 143,
  alias_sym_method_body = 144,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_title] = "title",
  [anon_sym_author] = "author",
  [anon_sym_contributor] = "contributor",
  [anon_sym_date] = "date",
  [anon_sym_DASH] = "-",
  [anon_sym_tag] = "tag",
  [anon_sym_ref] = "ref",
  [sym_year] = "year",
  [sym_month] = "month",
  [aux_sym_day_token1] = "day_token1",
  [aux_sym_day_token2] = "day_token2",
  [anon_sym_def] = "def",
  [anon_sym_alloc] = "alloc",
  [anon_sym_taxon] = "taxon",
  [anon_sym_meta] = "meta",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_namespace] = "namespace",
  [anon_sym_transclude] = "transclude",
  [anon_sym_let] = "let",
  [anon_sym_tex] = "tex",
  [anon_sym_iftex] = "iftex",
  [anon_sym_block] = "block",
  [anon_sym_scope] = "scope",
  [anon_sym_subtree] = "subtree",
  [anon_sym_put] = "put",
  [anon_sym_get] = "get",
  [anon_sym_open] = "open",
  [anon_sym_query] = "query",
  [anon_sym_object] = "object",
  [anon_sym_patch] = "patch",
  [anon_sym_call] = "call",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_p] = "p",
  [anon_sym_em] = "em",
  [anon_sym_strong] = "strong",
  [anon_sym_li] = "li",
  [anon_sym_ul] = "ul",
  [anon_sym_ol] = "ol",
  [anon_sym_code] = "code",
  [anon_sym_blockquote] = "blockquote",
  [anon_sym_pre] = "pre",
  [anon_sym_BSLASHquery_SLASHauthor] = "\\query/author",
  [anon_sym_BSLASHquery_SLASHtag] = "\\query/tag",
  [anon_sym_BSLASHquery_SLASHtaxon] = "\\query/taxon",
  [anon_sym_BSLASHquery_SLASHand] = "\\query/and",
  [anon_sym_BSLASHquery_SLASHor] = "\\query/or",
  [aux_sym_ident_token1] = "label",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym__] = "_",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__alpha] = "_alpha",
  [sym__digit] = "_digit",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_squares] = "squares",
  [sym_parens] = "parens",
  [sym_title] = "title",
  [sym_author] = "author",
  [sym_contributor] = "contributor",
  [sym_date] = "date",
  [sym_tag] = "tag",
  [sym_day] = "day",
  [sym_def] = "def",
  [sym_alloc] = "alloc",
  [sym_taxon] = "taxon",
  [sym_meta] = "meta",
  [sym_import] = "import",
  [sym_export] = "export",
  [sym_namespace] = "namespace",
  [sym_transclude] = "transclude",
  [sym_let] = "let",
  [sym_tex] = "tex",
  [sym_if_tex] = "if_tex",
  [sym_block] = "block",
  [sym_scope] = "scope",
  [sym_subtree] = "subtree",
  [sym_put] = "put",
  [sym_get] = "get",
  [sym_open] = "open",
  [sym_query_tree] = "query_tree",
  [sym__default] = "_default",
  [sym_object] = "object",
  [sym_patch] = "patch",
  [sym_call] = "call",
  [sym__prim] = "_prim",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [sym_p] = "paragraph",
  [sym_em] = "em",
  [sym_strong] = "strong",
  [sym_li] = "li",
  [sym_ul] = "ul",
  [sym_ol] = "ol",
  [sym_code] = "code",
  [sym_blockquote] = "blockquote",
  [sym_pre] = "pre",
  [sym__query] = "_query",
  [sym__query0] = "_query0",
  [sym_query_author] = "query_author",
  [sym_query_tag] = "query_tag",
  [sym_query_taxon] = "query_taxon",
  [sym_query_and] = "query_and",
  [sym_query_or] = "query_or",
  [sym_query_meta] = "query_meta",
  [sym_queries] = "queries",
  [sym_method_decl] = "method_decl",
  [sym_fun_spec] = "fun_spec",
  [sym_ident] = "ident",
  [sym_ident_with_method_calls] = "ident_with_method_calls",
  [sym__arg] = "_arg",
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_id] = "id",
  [sym_prefix] = "prefix",
  [sym_markdown_link] = "markdown_link",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_braces_repeat1] = "braces_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym__query_repeat1] = "_query_repeat1",
  [aux_sym_queries_repeat1] = "queries_repeat1",
  [aux_sym_fun_spec_repeat1] = "fun_spec_repeat1",
  [aux_sym_ident_repeat1] = "ident_repeat1",
  [aux_sym_ident_with_method_calls_repeat1] = "ident_with_method_calls_repeat1",
  [aux_sym__arg_repeat1] = "_arg_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
  [alias_sym_method_body] = "method_body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_contributor] = anon_sym_contributor,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_ref] = anon_sym_ref,
  [sym_year] = sym_year,
  [sym_month] = sym_month,
  [aux_sym_day_token1] = aux_sym_day_token1,
  [aux_sym_day_token2] = aux_sym_day_token2,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_taxon] = anon_sym_taxon,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_transclude] = anon_sym_transclude,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_tex] = anon_sym_tex,
  [anon_sym_iftex] = anon_sym_iftex,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_subtree] = anon_sym_subtree,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_call] = anon_sym_call,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_li] = anon_sym_li,
  [anon_sym_ul] = anon_sym_ul,
  [anon_sym_ol] = anon_sym_ol,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_blockquote] = anon_sym_blockquote,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_BSLASHquery_SLASHauthor] = anon_sym_BSLASHquery_SLASHauthor,
  [anon_sym_BSLASHquery_SLASHtag] = anon_sym_BSLASHquery_SLASHtag,
  [anon_sym_BSLASHquery_SLASHtaxon] = anon_sym_BSLASHquery_SLASHtaxon,
  [anon_sym_BSLASHquery_SLASHand] = anon_sym_BSLASHquery_SLASHand,
  [anon_sym_BSLASHquery_SLASHor] = anon_sym_BSLASHquery_SLASHor,
  [aux_sym_ident_token1] = aux_sym_ident_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__alpha] = sym__alpha,
  [sym__digit] = sym__digit,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_squares] = sym_squares,
  [sym_parens] = sym_parens,
  [sym_title] = sym_title,
  [sym_author] = sym_author,
  [sym_contributor] = sym_contributor,
  [sym_date] = sym_date,
  [sym_tag] = sym_tag,
  [sym_day] = sym_day,
  [sym_def] = sym_def,
  [sym_alloc] = sym_alloc,
  [sym_taxon] = sym_taxon,
  [sym_meta] = sym_meta,
  [sym_import] = sym_import,
  [sym_export] = sym_export,
  [sym_namespace] = sym_namespace,
  [sym_transclude] = sym_transclude,
  [sym_let] = sym_let,
  [sym_tex] = sym_tex,
  [sym_if_tex] = sym_if_tex,
  [sym_block] = sym_block,
  [sym_scope] = sym_scope,
  [sym_subtree] = sym_subtree,
  [sym_put] = sym_put,
  [sym_get] = sym_get,
  [sym_open] = sym_open,
  [sym_query_tree] = sym_query_tree,
  [sym__default] = sym__default,
  [sym_object] = sym_object,
  [sym_patch] = sym_patch,
  [sym_call] = sym_call,
  [sym__prim] = sym__prim,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [sym_p] = sym_p,
  [sym_em] = sym_em,
  [sym_strong] = sym_strong,
  [sym_li] = sym_li,
  [sym_ul] = sym_ul,
  [sym_ol] = sym_ol,
  [sym_code] = sym_code,
  [sym_blockquote] = sym_blockquote,
  [sym_pre] = sym_pre,
  [sym__query] = sym__query,
  [sym__query0] = sym__query0,
  [sym_query_author] = sym_query_author,
  [sym_query_tag] = sym_query_tag,
  [sym_query_taxon] = sym_query_taxon,
  [sym_query_and] = sym_query_and,
  [sym_query_or] = sym_query_or,
  [sym_query_meta] = sym_query_meta,
  [sym_queries] = sym_queries,
  [sym_method_decl] = sym_method_decl,
  [sym_fun_spec] = sym_fun_spec,
  [sym_ident] = sym_ident,
  [sym_ident_with_method_calls] = sym_ident_with_method_calls,
  [sym__arg] = sym__arg,
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
  [sym_markdown_link] = sym_markdown_link,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_braces_repeat1] = aux_sym_braces_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym__query_repeat1] = aux_sym__query_repeat1,
  [aux_sym_queries_repeat1] = aux_sym_queries_repeat1,
  [aux_sym_fun_spec_repeat1] = aux_sym_fun_spec_repeat1,
  [aux_sym_ident_repeat1] = aux_sym_ident_repeat1,
  [aux_sym_ident_with_method_calls_repeat1] = aux_sym_ident_with_method_calls_repeat1,
  [aux_sym__arg_repeat1] = aux_sym__arg_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
  [alias_sym_method_body] = alias_sym_method_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contributor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_day_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_taxon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iftex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHauthor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHtaxon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHquery_SLASHor] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ident_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__alpha] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_squares] = {
    .visible = true,
    .named = true,
  },
  [sym_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_contributor] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_alloc] = {
    .visible = true,
    .named = true,
  },
  [sym_taxon] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_transclude] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_if_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_subtree] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_query_tree] = {
    .visible = true,
    .named = true,
  },
  [sym__default] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__prim] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym_em] = {
    .visible = true,
    .named = true,
  },
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym_li] = {
    .visible = true,
    .named = true,
  },
  [sym_ul] = {
    .visible = true,
    .named = true,
  },
  [sym_ol] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_blockquote] = {
    .visible = true,
    .named = true,
  },
  [sym_pre] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym__query0] = {
    .visible = false,
    .named = true,
  },
  [sym_query_author] = {
    .visible = true,
    .named = true,
  },
  [sym_query_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_query_taxon] = {
    .visible = true,
    .named = true,
  },
  [sym_query_and] = {
    .visible = true,
    .named = true,
  },
  [sym_query_or] = {
    .visible = true,
    .named = true,
  },
  [sym_query_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_queries] = {
    .visible = true,
    .named = true,
  },
  [sym_method_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_with_method_calls] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym__link] = {
    .visible = false,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_link] = {
    .visible = true,
    .named = true,
  },
  [sym_unlabeled_link] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__txt_arg] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braces_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_queries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_with_method_calls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_method_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_address = 1,
  field_argument = 2,
  field_author = 3,
  field_binder = 4,
  field_contributor = 5,
  field_date = 6,
  field_dest = 7,
  field_id = 8,
  field_identifier = 9,
  field_k = 10,
  field_key = 11,
  field_label = 12,
  field_object = 13,
  field_prefix = 14,
  field_self = 15,
  field_tag = 16,
  field_v = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_author] = "author",
  [field_binder] = "binder",
  [field_contributor] = "contributor",
  [field_date] = "date",
  [field_dest] = "dest",
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_k] = "k",
  [field_key] = "key",
  [field_label] = "label",
  [field_object] = "object",
  [field_prefix] = "prefix",
  [field_self] = "self",
  [field_tag] = "tag",
  [field_v] = "v",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 2},
  [7] = {.index = 15, .length = 2},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 1},
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 6},
  [13] = {.index = 31, .length = 3},
  [14] = {.index = 34, .length = 9},
  [15] = {.index = 43, .length = 4},
  [16] = {.index = 47, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 1},
  [1] =
    {field_author, 0},
    {field_author, 1},
    {field_author, 2},
  [4] =
    {field_contributor, 0},
    {field_contributor, 1},
    {field_contributor, 2},
  [7] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
  [10] =
    {field_tag, 0},
    {field_tag, 1},
    {field_tag, 2},
  [13] =
    {field_argument, 1},
    {field_identifier, 0},
  [15] =
    {field_argument, 3},
    {field_identifier, 2},
  [17] =
    {field_id, 2},
    {field_prefix, 0},
  [19] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [22] =
    {field_address, 3},
  [23] =
    {field_k, 0},
    {field_v, 1},
  [25] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [31] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [34] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [43] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [47] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
    [3] = alias_sym_method_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__arg, 2,
    sym__arg,
    alias_sym_method_body,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 3,
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 27,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 87,
  [93] = 83,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 23,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 25,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 24,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 27,
  [138] = 43,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 186,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 122,
  [200] = 200,
  [201] = 34,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 172,
  [207] = 207,
  [208] = 208,
  [209] = 189,
  [210] = 192,
  [211] = 211,
};

static inline bool aux_sym_ident_token1_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '%'
      ? (c < '#'
        ? c == 0
        : c <= '#')
      : (c <= '%' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < '['
        ? c == '.'
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_ident_token1_character_set_2(int32_t c) {
  return (c < '%'
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '#'))
    : (c <= '%' || (c < '{'
      ? (c < '['
        ? (c >= '(' && c <= ')')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_ident_token1_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '#'
      ? (c < '\n'
        ? c == 0
        : c <= '\r')
      : (c <= '#' || (c < '('
        ? c == '%'
        : c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < '['
        ? c == '.'
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_ident_token1_character_set_4(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < '%'
        ? c == '#'
        : c <= '%')))
    : (c <= ')' || (c < '['
      ? (c < '.'
        ? c == ','
        : c <= '.')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_ident_token1_character_set_5(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '%'
        ? c == '#'
        : c <= '%')))
    : (c <= ')' || (c < '['
      ? (c < '.'
        ? c == ','
        : c <= '.')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'g') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'q') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '}') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '_') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '1') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(274);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 49:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 50:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(268);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (!aux_sym_ident_token1_character_set_1(lookahead)) ADVANCE(270);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 53:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(271);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(273);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_author);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_year);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_tex);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_iftex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 'q') ADVANCE(263);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_scope);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_patch);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_em);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_strong);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_li);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ul);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ol);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHauthor);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtag);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHtaxon);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHand);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASHquery_SLASHor);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(160);
      if (!aux_sym_ident_token1_character_set_3(lookahead)) ADVANCE(269);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(256);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(226);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(105);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(260);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(100);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(116);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(268);
      if (!aux_sym_ident_token1_character_set_4(lookahead)) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (!aux_sym_ident_token1_character_set_5(lookahead)) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (!aux_sym_ident_token1_character_set_2(lookahead)) ADVANCE(395);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 54},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 54},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 54},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 49},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 50},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 54},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 54},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 54},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 52},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 54},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 54},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 54},
  [211] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_contributor] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [aux_sym_day_token1] = ACTIONS(1),
    [aux_sym_day_token2] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_taxon] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_transclude] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_tex] = ACTIONS(1),
    [anon_sym_iftex] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_subtree] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_li] = ACTIONS(1),
    [anon_sym_ul] = ACTIONS(1),
    [anon_sym_ol] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_blockquote] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [sym__alpha] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(207),
    [sym__node] = STATE(10),
    [sym_squares] = STATE(10),
    [sym_parens] = STATE(10),
    [sym_title] = STATE(10),
    [sym_author] = STATE(10),
    [sym_contributor] = STATE(10),
    [sym_date] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_def] = STATE(10),
    [sym_alloc] = STATE(10),
    [sym_taxon] = STATE(10),
    [sym_meta] = STATE(10),
    [sym_import] = STATE(10),
    [sym_export] = STATE(10),
    [sym_namespace] = STATE(10),
    [sym_transclude] = STATE(10),
    [sym_let] = STATE(10),
    [sym_tex] = STATE(10),
    [sym_if_tex] = STATE(10),
    [sym_block] = STATE(10),
    [sym_scope] = STATE(10),
    [sym_subtree] = STATE(10),
    [sym_put] = STATE(10),
    [sym_get] = STATE(10),
    [sym_open] = STATE(10),
    [sym_query_tree] = STATE(10),
    [sym__default] = STATE(10),
    [sym_object] = STATE(10),
    [sym_patch] = STATE(10),
    [sym_call] = STATE(10),
    [sym__prim] = STATE(10),
    [sym_inline_math] = STATE(10),
    [sym_display_math] = STATE(10),
    [sym_p] = STATE(10),
    [sym_em] = STATE(10),
    [sym_strong] = STATE(10),
    [sym_li] = STATE(10),
    [sym_ul] = STATE(10),
    [sym_ol] = STATE(10),
    [sym_code] = STATE(10),
    [sym_blockquote] = STATE(10),
    [sym_pre] = STATE(10),
    [sym_ident] = STATE(10),
    [sym_ident_with_method_calls] = STATE(10),
    [sym__link] = STATE(10),
    [sym_markdown_link] = STATE(10),
    [sym_unlabeled_link] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      anon_sym_POUND_POUND,
    ACTIONS(41), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(44), 1,
      sym_text,
    ACTIONS(24), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [79] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_text,
    STATE(5), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [157] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_text,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [235] = 10,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_POUND_POUND,
    ACTIONS(79), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(82), 1,
      sym_text,
    STATE(5), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [313] = 10,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_POUND_POUND,
    ACTIONS(105), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(108), 1,
      sym_text,
    STATE(6), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [391] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_text,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(2), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [469] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(5), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [547] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(5), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [625] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_text,
    STATE(6), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [703] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_text,
    STATE(3), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [778] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_text,
    STATE(9), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [853] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_text,
    STATE(8), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [928] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_text,
    STATE(7), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [1003] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_POUND_POUND,
    ACTIONS(17), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_text,
    STATE(4), 48,
      sym__node,
      sym_squares,
      sym_parens,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_def,
      sym_alloc,
      sym_taxon,
      sym_meta,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_if_tex,
      sym_block,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_braces_repeat1,
  [1078] = 37,
    ACTIONS(143), 1,
      anon_sym_title,
    ACTIONS(145), 1,
      anon_sym_author,
    ACTIONS(147), 1,
      anon_sym_contributor,
    ACTIONS(149), 1,
      anon_sym_date,
    ACTIONS(151), 1,
      anon_sym_tag,
    ACTIONS(153), 1,
      anon_sym_def,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_taxon,
    ACTIONS(159), 1,
      anon_sym_meta,
    ACTIONS(161), 1,
      anon_sym_import,
    ACTIONS(163), 1,
      anon_sym_export,
    ACTIONS(165), 1,
      anon_sym_namespace,
    ACTIONS(167), 1,
      anon_sym_transclude,
    ACTIONS(169), 1,
      anon_sym_let,
    ACTIONS(171), 1,
      anon_sym_tex,
    ACTIONS(173), 1,
      anon_sym_iftex,
    ACTIONS(175), 1,
      anon_sym_block,
    ACTIONS(177), 1,
      anon_sym_scope,
    ACTIONS(179), 1,
      anon_sym_subtree,
    ACTIONS(181), 1,
      anon_sym_put,
    ACTIONS(183), 1,
      anon_sym_get,
    ACTIONS(185), 1,
      anon_sym_open,
    ACTIONS(187), 1,
      anon_sym_query,
    ACTIONS(189), 1,
      anon_sym_object,
    ACTIONS(191), 1,
      anon_sym_patch,
    ACTIONS(193), 1,
      anon_sym_call,
    ACTIONS(195), 1,
      anon_sym_p,
    ACTIONS(197), 1,
      anon_sym_em,
    ACTIONS(199), 1,
      anon_sym_strong,
    ACTIONS(201), 1,
      anon_sym_li,
    ACTIONS(203), 1,
      anon_sym_ul,
    ACTIONS(205), 1,
      anon_sym_ol,
    ACTIONS(207), 1,
      anon_sym_code,
    ACTIONS(209), 1,
      anon_sym_blockquote,
    ACTIONS(211), 1,
      anon_sym_pre,
    ACTIONS(213), 1,
      aux_sym_ident_token1,
    ACTIONS(215), 1,
      sym_text,
  [1190] = 11,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(204), 1,
      sym__query,
    STATE(22), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(113), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1231] = 10,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(239), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(242), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(245), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(248), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(251), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(18), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1270] = 10,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(18), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1309] = 10,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(258), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(171), 1,
      sym_queries,
    STATE(19), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1348] = 10,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(258), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(169), 1,
      sym_queries,
    STATE(19), 9,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
      sym__whitespace,
      aux_sym_queries_repeat1,
  [1387] = 10,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_BSLASHquery_SLASHauthor,
    ACTIONS(221), 1,
      anon_sym_BSLASHquery_SLASHtag,
    ACTIONS(223), 1,
      anon_sym_BSLASHquery_SLASHtaxon,
    ACTIONS(225), 1,
      anon_sym_BSLASHquery_SLASHand,
    ACTIONS(227), 1,
      anon_sym_BSLASHquery_SLASHor,
    ACTIONS(260), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      sym__txt_arg,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    STATE(109), 7,
      sym__query0,
      sym_query_author,
      sym_query_tag,
      sym_query_taxon,
      sym_query_and,
      sym_query_or,
      sym_query_meta,
  [1425] = 5,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(24), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(266), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1452] = 4,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(272), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1476] = 4,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(25), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(279), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1500] = 5,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      sym_text,
    STATE(26), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(283), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1524] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(293), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1542] = 3,
    STATE(26), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(297), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1562] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(301), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1579] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(305), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1596] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(309), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1613] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(313), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1630] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(317), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1647] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(321), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1664] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(325), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1681] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(329), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1698] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(333), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1715] = 2,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(337), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1732] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(341), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1749] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(345), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1766] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(349), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1783] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(353), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1800] = 2,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(272), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1817] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(357), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1834] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(361), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1851] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(365), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1868] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(369), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1885] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(373), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1902] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(377), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1919] = 2,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(381), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1936] = 2,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(385), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1953] = 2,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(389), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1970] = 2,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(393), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1987] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(397), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2004] = 2,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(401), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2021] = 2,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(405), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2038] = 2,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(409), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2055] = 2,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(413), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2072] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(417), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2089] = 2,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(421), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2106] = 2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(425), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2123] = 2,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(429), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2140] = 2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(433), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2157] = 2,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(437), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2174] = 2,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(441), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2191] = 2,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(445), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2208] = 2,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(449), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2225] = 2,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(453), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2242] = 2,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(457), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2259] = 2,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(461), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2276] = 2,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(465), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2293] = 2,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(469), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2310] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(473), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2327] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(477), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2344] = 2,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(481), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2361] = 2,
    ACTIONS(483), 1,
      anon_sym_BSLASH,
    STATE(40), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2377] = 2,
    ACTIONS(483), 1,
      anon_sym_BSLASH,
    STATE(35), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2393] = 3,
    ACTIONS(487), 1,
      aux_sym__whitespace_token1,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
    ACTIONS(485), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2410] = 2,
    ACTIONS(291), 1,
      aux_sym__whitespace_token1,
    ACTIONS(293), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2424] = 9,
    ACTIONS(195), 1,
      anon_sym_p,
    ACTIONS(490), 1,
      anon_sym_em,
    ACTIONS(492), 1,
      anon_sym_strong,
    ACTIONS(494), 1,
      anon_sym_li,
    ACTIONS(496), 1,
      anon_sym_ul,
    ACTIONS(498), 1,
      anon_sym_ol,
    ACTIONS(500), 1,
      anon_sym_code,
    ACTIONS(502), 1,
      anon_sym_blockquote,
    ACTIONS(504), 1,
      anon_sym_pre,
  [2452] = 3,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    ACTIONS(510), 1,
      sym_text,
    ACTIONS(506), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2468] = 2,
    ACTIONS(514), 1,
      aux_sym__whitespace_token1,
    ACTIONS(512), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2481] = 3,
    STATE(87), 1,
      aux_sym_id_repeat1,
    ACTIONS(516), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(518), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2496] = 2,
    ACTIONS(522), 1,
      aux_sym__whitespace_token1,
    ACTIONS(520), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2509] = 2,
    ACTIONS(526), 1,
      aux_sym__whitespace_token1,
    ACTIONS(524), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2522] = 2,
    ACTIONS(530), 1,
      aux_sym__whitespace_token1,
    ACTIONS(528), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2535] = 3,
    STATE(87), 1,
      aux_sym_id_repeat1,
    ACTIONS(532), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(534), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2550] = 2,
    ACTIONS(539), 1,
      aux_sym__whitespace_token1,
    ACTIONS(537), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2563] = 2,
    ACTIONS(543), 1,
      aux_sym__whitespace_token1,
    ACTIONS(541), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHquery_SLASHauthor,
      anon_sym_BSLASHquery_SLASHtag,
      anon_sym_BSLASHquery_SLASHtaxon,
      anon_sym_BSLASHquery_SLASHand,
      anon_sym_BSLASHquery_SLASHor,
  [2576] = 5,
    ACTIONS(545), 1,
      sym__alpha,
    ACTIONS(547), 1,
      sym_text,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(189), 1,
      sym_prefix,
    STATE(197), 2,
      sym_addr,
      sym_external_link,
  [2593] = 3,
    STATE(93), 1,
      aux_sym_id_repeat1,
    STATE(199), 1,
      sym_id,
    ACTIONS(549), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2606] = 3,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_id_repeat1,
    ACTIONS(551), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2619] = 3,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_id_repeat1,
    ACTIONS(554), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2632] = 4,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      aux_sym__whitespace_token1,
    STATE(95), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2647] = 4,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      aux_sym__whitespace_token1,
    STATE(95), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2662] = 4,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      aux_sym__whitespace_token1,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(95), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2677] = 3,
    STATE(83), 1,
      aux_sym_id_repeat1,
    STATE(122), 1,
      sym_id,
    ACTIONS(572), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2690] = 4,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(112), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2704] = 3,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    ACTIONS(576), 1,
      aux_sym__whitespace_token1,
    STATE(94), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2716] = 5,
    ACTIONS(545), 1,
      sym__alpha,
    ACTIONS(578), 1,
      sym_text,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(189), 1,
      sym_prefix,
    STATE(190), 1,
      sym_addr,
  [2732] = 3,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    ACTIONS(580), 1,
      aux_sym__whitespace_token1,
    STATE(96), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2744] = 4,
    ACTIONS(582), 1,
      sym__alpha,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(209), 1,
      sym_prefix,
    STATE(211), 1,
      sym_addr,
  [2757] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(103), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2768] = 4,
    ACTIONS(582), 1,
      sym__alpha,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(185), 1,
      sym_addr,
    STATE(189), 1,
      sym_prefix,
  [2781] = 3,
    ACTIONS(260), 1,
      aux_sym__whitespace_token1,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2792] = 4,
    ACTIONS(582), 1,
      sym__alpha,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(181), 1,
      sym_addr,
    STATE(189), 1,
      sym_prefix,
  [2805] = 4,
    ACTIONS(582), 1,
      sym__alpha,
    STATE(119), 1,
      aux_sym_prefix_repeat1,
    STATE(180), 1,
      sym_addr,
    STATE(189), 1,
      sym_prefix,
  [2818] = 4,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__arg,
    STATE(111), 1,
      aux_sym_fun_spec_repeat1,
  [2831] = 3,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      aux_sym__whitespace_token1,
    STATE(105), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2842] = 3,
    ACTIONS(260), 1,
      aux_sym__whitespace_token1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(78), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2853] = 4,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym__arg,
    STATE(120), 1,
      aux_sym_fun_spec_repeat1,
  [2866] = 2,
    ACTIONS(270), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2875] = 3,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      aux_sym__whitespace_token1,
    STATE(110), 2,
      sym__whitespace,
      aux_sym__query_repeat1,
  [2886] = 3,
    ACTIONS(601), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_fun_spec,
    STATE(108), 1,
      sym_ident,
  [2896] = 3,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      sym_text,
    STATE(28), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [2906] = 3,
    ACTIONS(607), 1,
      anon_sym_DASH,
    ACTIONS(609), 1,
      sym__alpha,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
  [2916] = 3,
    ACTIONS(601), 1,
      anon_sym_BSLASH,
    STATE(46), 1,
      sym_fun_spec,
    STATE(108), 1,
      sym_ident,
  [2926] = 2,
    ACTIONS(614), 1,
      aux_sym__whitespace_token1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [2934] = 3,
    ACTIONS(616), 1,
      anon_sym_DASH,
    ACTIONS(618), 1,
      sym__alpha,
    STATE(116), 1,
      aux_sym_prefix_repeat1,
  [2944] = 3,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      aux_sym_fun_spec_repeat1,
  [2954] = 3,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym__arg,
  [2964] = 1,
    ACTIONS(627), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [2970] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__arg,
  [2977] = 2,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__txt_arg,
  [2984] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [2991] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__arg,
  [2998] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [3005] = 2,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym__arg,
  [3012] = 2,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym__arg,
  [3019] = 2,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym__arg,
  [3026] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym__arg,
  [3033] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym__arg,
  [3040] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym__arg,
  [3047] = 2,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__arg,
  [3054] = 2,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym__arg,
  [3061] = 2,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__txt_arg,
  [3068] = 1,
    ACTIONS(291), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3073] = 1,
    ACTIONS(270), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3078] = 2,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__txt_arg,
  [3085] = 2,
    ACTIONS(635), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [3092] = 2,
    ACTIONS(635), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      sym_ident,
  [3099] = 2,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__arg,
  [3106] = 2,
    ACTIONS(601), 1,
      anon_sym_BSLASH,
    STATE(159), 1,
      sym_ident,
  [3113] = 2,
    ACTIONS(637), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym__txt_arg,
  [3120] = 2,
    ACTIONS(639), 1,
      sym_year,
    ACTIONS(641), 1,
      sym_text,
  [3127] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__arg,
  [3134] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__arg,
  [3141] = 2,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__arg,
  [3148] = 2,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__arg,
  [3155] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [3162] = 2,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym__txt_arg,
  [3169] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym__arg,
  [3176] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym__arg,
  [3183] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3190] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__arg,
  [3197] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym__arg,
  [3204] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym__arg,
  [3211] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [3218] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__arg,
  [3225] = 2,
    ACTIONS(643), 1,
      aux_sym_day_token1,
    STATE(183), 1,
      sym_day,
  [3232] = 2,
    ACTIONS(635), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_ident,
  [3239] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__arg,
  [3246] = 1,
    ACTIONS(645), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3251] = 2,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__txt_arg,
  [3258] = 1,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
  [3262] = 1,
    ACTIONS(651), 1,
      sym_text,
  [3266] = 1,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
  [3270] = 1,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
  [3274] = 1,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [3278] = 1,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
  [3282] = 1,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
  [3286] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [3290] = 1,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
  [3294] = 1,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
  [3298] = 1,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
  [3302] = 1,
    ACTIONS(671), 1,
      sym_text,
  [3306] = 1,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
  [3310] = 1,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
  [3314] = 1,
    ACTIONS(677), 1,
      sym_text,
  [3318] = 1,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [3322] = 1,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [3326] = 1,
    ACTIONS(683), 1,
      aux_sym_day_token2,
  [3330] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
  [3334] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
  [3338] = 1,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [3342] = 1,
    ACTIONS(691), 1,
      aux_sym_ident_token1,
  [3346] = 1,
    ACTIONS(693), 1,
      anon_sym_DASH,
  [3350] = 1,
    ACTIONS(695), 1,
      anon_sym_DASH,
  [3354] = 1,
    ACTIONS(697), 1,
      anon_sym_DASH,
  [3358] = 1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [3362] = 1,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
  [3366] = 1,
    ACTIONS(703), 1,
      sym_text,
  [3370] = 1,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
  [3374] = 1,
    ACTIONS(707), 1,
      aux_sym_ident_token1,
  [3378] = 1,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
  [3382] = 1,
    ACTIONS(711), 1,
      sym_month,
  [3386] = 1,
    ACTIONS(713), 1,
      anon_sym_RBRACK_RBRACK,
  [3390] = 1,
    ACTIONS(715), 1,
      sym_text,
  [3394] = 1,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
  [3398] = 1,
    ACTIONS(717), 1,
      anon_sym_RBRACK_RBRACK,
  [3402] = 1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
  [3406] = 1,
    ACTIONS(719), 1,
      anon_sym_POUND,
  [3410] = 1,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [3414] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [3418] = 1,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
  [3422] = 1,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
  [3426] = 1,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [3430] = 1,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
  [3434] = 1,
    ACTIONS(733), 1,
      anon_sym_DASH,
  [3438] = 1,
    ACTIONS(735), 1,
      sym_text,
  [3442] = 1,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 157,
  [SMALL_STATE(5)] = 235,
  [SMALL_STATE(6)] = 313,
  [SMALL_STATE(7)] = 391,
  [SMALL_STATE(8)] = 469,
  [SMALL_STATE(9)] = 547,
  [SMALL_STATE(10)] = 625,
  [SMALL_STATE(11)] = 703,
  [SMALL_STATE(12)] = 778,
  [SMALL_STATE(13)] = 853,
  [SMALL_STATE(14)] = 928,
  [SMALL_STATE(15)] = 1003,
  [SMALL_STATE(16)] = 1078,
  [SMALL_STATE(17)] = 1190,
  [SMALL_STATE(18)] = 1231,
  [SMALL_STATE(19)] = 1270,
  [SMALL_STATE(20)] = 1309,
  [SMALL_STATE(21)] = 1348,
  [SMALL_STATE(22)] = 1387,
  [SMALL_STATE(23)] = 1425,
  [SMALL_STATE(24)] = 1452,
  [SMALL_STATE(25)] = 1476,
  [SMALL_STATE(26)] = 1500,
  [SMALL_STATE(27)] = 1524,
  [SMALL_STATE(28)] = 1542,
  [SMALL_STATE(29)] = 1562,
  [SMALL_STATE(30)] = 1579,
  [SMALL_STATE(31)] = 1596,
  [SMALL_STATE(32)] = 1613,
  [SMALL_STATE(33)] = 1630,
  [SMALL_STATE(34)] = 1647,
  [SMALL_STATE(35)] = 1664,
  [SMALL_STATE(36)] = 1681,
  [SMALL_STATE(37)] = 1698,
  [SMALL_STATE(38)] = 1715,
  [SMALL_STATE(39)] = 1732,
  [SMALL_STATE(40)] = 1749,
  [SMALL_STATE(41)] = 1766,
  [SMALL_STATE(42)] = 1783,
  [SMALL_STATE(43)] = 1800,
  [SMALL_STATE(44)] = 1817,
  [SMALL_STATE(45)] = 1834,
  [SMALL_STATE(46)] = 1851,
  [SMALL_STATE(47)] = 1868,
  [SMALL_STATE(48)] = 1885,
  [SMALL_STATE(49)] = 1902,
  [SMALL_STATE(50)] = 1919,
  [SMALL_STATE(51)] = 1936,
  [SMALL_STATE(52)] = 1953,
  [SMALL_STATE(53)] = 1970,
  [SMALL_STATE(54)] = 1987,
  [SMALL_STATE(55)] = 2004,
  [SMALL_STATE(56)] = 2021,
  [SMALL_STATE(57)] = 2038,
  [SMALL_STATE(58)] = 2055,
  [SMALL_STATE(59)] = 2072,
  [SMALL_STATE(60)] = 2089,
  [SMALL_STATE(61)] = 2106,
  [SMALL_STATE(62)] = 2123,
  [SMALL_STATE(63)] = 2140,
  [SMALL_STATE(64)] = 2157,
  [SMALL_STATE(65)] = 2174,
  [SMALL_STATE(66)] = 2191,
  [SMALL_STATE(67)] = 2208,
  [SMALL_STATE(68)] = 2225,
  [SMALL_STATE(69)] = 2242,
  [SMALL_STATE(70)] = 2259,
  [SMALL_STATE(71)] = 2276,
  [SMALL_STATE(72)] = 2293,
  [SMALL_STATE(73)] = 2310,
  [SMALL_STATE(74)] = 2327,
  [SMALL_STATE(75)] = 2344,
  [SMALL_STATE(76)] = 2361,
  [SMALL_STATE(77)] = 2377,
  [SMALL_STATE(78)] = 2393,
  [SMALL_STATE(79)] = 2410,
  [SMALL_STATE(80)] = 2424,
  [SMALL_STATE(81)] = 2452,
  [SMALL_STATE(82)] = 2468,
  [SMALL_STATE(83)] = 2481,
  [SMALL_STATE(84)] = 2496,
  [SMALL_STATE(85)] = 2509,
  [SMALL_STATE(86)] = 2522,
  [SMALL_STATE(87)] = 2535,
  [SMALL_STATE(88)] = 2550,
  [SMALL_STATE(89)] = 2563,
  [SMALL_STATE(90)] = 2576,
  [SMALL_STATE(91)] = 2593,
  [SMALL_STATE(92)] = 2606,
  [SMALL_STATE(93)] = 2619,
  [SMALL_STATE(94)] = 2632,
  [SMALL_STATE(95)] = 2647,
  [SMALL_STATE(96)] = 2662,
  [SMALL_STATE(97)] = 2677,
  [SMALL_STATE(98)] = 2690,
  [SMALL_STATE(99)] = 2704,
  [SMALL_STATE(100)] = 2716,
  [SMALL_STATE(101)] = 2732,
  [SMALL_STATE(102)] = 2744,
  [SMALL_STATE(103)] = 2757,
  [SMALL_STATE(104)] = 2768,
  [SMALL_STATE(105)] = 2781,
  [SMALL_STATE(106)] = 2792,
  [SMALL_STATE(107)] = 2805,
  [SMALL_STATE(108)] = 2818,
  [SMALL_STATE(109)] = 2831,
  [SMALL_STATE(110)] = 2842,
  [SMALL_STATE(111)] = 2853,
  [SMALL_STATE(112)] = 2866,
  [SMALL_STATE(113)] = 2875,
  [SMALL_STATE(114)] = 2886,
  [SMALL_STATE(115)] = 2896,
  [SMALL_STATE(116)] = 2906,
  [SMALL_STATE(117)] = 2916,
  [SMALL_STATE(118)] = 2926,
  [SMALL_STATE(119)] = 2934,
  [SMALL_STATE(120)] = 2944,
  [SMALL_STATE(121)] = 2954,
  [SMALL_STATE(122)] = 2964,
  [SMALL_STATE(123)] = 2970,
  [SMALL_STATE(124)] = 2977,
  [SMALL_STATE(125)] = 2984,
  [SMALL_STATE(126)] = 2991,
  [SMALL_STATE(127)] = 2998,
  [SMALL_STATE(128)] = 3005,
  [SMALL_STATE(129)] = 3012,
  [SMALL_STATE(130)] = 3019,
  [SMALL_STATE(131)] = 3026,
  [SMALL_STATE(132)] = 3033,
  [SMALL_STATE(133)] = 3040,
  [SMALL_STATE(134)] = 3047,
  [SMALL_STATE(135)] = 3054,
  [SMALL_STATE(136)] = 3061,
  [SMALL_STATE(137)] = 3068,
  [SMALL_STATE(138)] = 3073,
  [SMALL_STATE(139)] = 3078,
  [SMALL_STATE(140)] = 3085,
  [SMALL_STATE(141)] = 3092,
  [SMALL_STATE(142)] = 3099,
  [SMALL_STATE(143)] = 3106,
  [SMALL_STATE(144)] = 3113,
  [SMALL_STATE(145)] = 3120,
  [SMALL_STATE(146)] = 3127,
  [SMALL_STATE(147)] = 3134,
  [SMALL_STATE(148)] = 3141,
  [SMALL_STATE(149)] = 3148,
  [SMALL_STATE(150)] = 3155,
  [SMALL_STATE(151)] = 3162,
  [SMALL_STATE(152)] = 3169,
  [SMALL_STATE(153)] = 3176,
  [SMALL_STATE(154)] = 3183,
  [SMALL_STATE(155)] = 3190,
  [SMALL_STATE(156)] = 3197,
  [SMALL_STATE(157)] = 3204,
  [SMALL_STATE(158)] = 3211,
  [SMALL_STATE(159)] = 3218,
  [SMALL_STATE(160)] = 3225,
  [SMALL_STATE(161)] = 3232,
  [SMALL_STATE(162)] = 3239,
  [SMALL_STATE(163)] = 3246,
  [SMALL_STATE(164)] = 3251,
  [SMALL_STATE(165)] = 3258,
  [SMALL_STATE(166)] = 3262,
  [SMALL_STATE(167)] = 3266,
  [SMALL_STATE(168)] = 3270,
  [SMALL_STATE(169)] = 3274,
  [SMALL_STATE(170)] = 3278,
  [SMALL_STATE(171)] = 3282,
  [SMALL_STATE(172)] = 3286,
  [SMALL_STATE(173)] = 3290,
  [SMALL_STATE(174)] = 3294,
  [SMALL_STATE(175)] = 3298,
  [SMALL_STATE(176)] = 3302,
  [SMALL_STATE(177)] = 3306,
  [SMALL_STATE(178)] = 3310,
  [SMALL_STATE(179)] = 3314,
  [SMALL_STATE(180)] = 3318,
  [SMALL_STATE(181)] = 3322,
  [SMALL_STATE(182)] = 3326,
  [SMALL_STATE(183)] = 3330,
  [SMALL_STATE(184)] = 3334,
  [SMALL_STATE(185)] = 3338,
  [SMALL_STATE(186)] = 3342,
  [SMALL_STATE(187)] = 3346,
  [SMALL_STATE(188)] = 3350,
  [SMALL_STATE(189)] = 3354,
  [SMALL_STATE(190)] = 3358,
  [SMALL_STATE(191)] = 3362,
  [SMALL_STATE(192)] = 3366,
  [SMALL_STATE(193)] = 3370,
  [SMALL_STATE(194)] = 3374,
  [SMALL_STATE(195)] = 3378,
  [SMALL_STATE(196)] = 3382,
  [SMALL_STATE(197)] = 3386,
  [SMALL_STATE(198)] = 3390,
  [SMALL_STATE(199)] = 3394,
  [SMALL_STATE(200)] = 3398,
  [SMALL_STATE(201)] = 3402,
  [SMALL_STATE(202)] = 3406,
  [SMALL_STATE(203)] = 3410,
  [SMALL_STATE(204)] = 3414,
  [SMALL_STATE(205)] = 3418,
  [SMALL_STATE(206)] = 3422,
  [SMALL_STATE(207)] = 3426,
  [SMALL_STATE(208)] = 3430,
  [SMALL_STATE(209)] = 3434,
  [SMALL_STATE(210)] = 3438,
  [SMALL_STATE(211)] = 3442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(123),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(126),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(90),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braces_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(16),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(123),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(126),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(90),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(210),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(128),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(129),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(130),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(208),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(205),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queries_repeat1, 2), SHIFT_REPEAT(18),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_queries, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(11),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(26),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2), SHIFT_REPEAT(26),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, .production_id = 14),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, .production_id = 14),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, .production_id = 7),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, .production_id = 7),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tex, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tex, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, .production_id = 12),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, .production_id = 13),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, .production_id = 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, .production_id = 15),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, .production_id = 15),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squares, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squares, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, .production_id = 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, .production_id = 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__query_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__query_repeat1, 2), SHIFT_REPEAT(78),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_meta, 2, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_author, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_author, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tag, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tag, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_taxon, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_taxon, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(87),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_and, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_and, 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_or, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_or, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(92),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(179),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(95),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2), SHIFT_REPEAT(12),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2), SHIFT_REPEAT(116),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, .production_id = 16),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2), SHIFT_REPEAT(166),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, .production_id = 8),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [729] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_forester() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
