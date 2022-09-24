int main(void) {
  int pos =69;
  int *ppos = &pos;
  int **pppos = &ppos;
  printf("Pos: %d\n", pos);
  printf("Ponteiro para pos: %d\n", *ppos);
  printf("Ponteiro para ponteiro para pos: %d\n", **pppos);
  return 0;
}