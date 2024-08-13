#ifndef TREE_SITTER_CONTEXT_H_
#define TREE_SITTER_CONTEXT_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_context(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_CONTEXT_H_
