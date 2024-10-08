#ifndef PARSING_H
#define PARSING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

enum ElementType {
  HEADING_1 = 1,
  HEADING_2 = 2,
  HEADING_3 = 3,
  HEADING_4 = 4,
  HEADING_5 = 5,
  HEADING_6 = 6,
  PARAGRAPH = 10,
  BOLD = 11,
  ITALIC = 12,
  BLOCKQUOTE = 13,
  CODE = 14,
  LIST = 7
};

typedef struct {
  int type;
  char *content;
} MarkdownElement;

void parsing(FILE *file, FILE *fw);
void include_style(void);

MarkdownElement detect_md(char *line);

#ifdef __cplusplus
}
#endif

#endif
