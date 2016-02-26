#define NOTHING_MORE_NOTHING_LESS 1
#define SOMETHING !NOTHING_MORE_NOTHING_LESS
int main()
{
  if (NOTHING_MORE_NOTHING_LESS)
    printf ("Nothing is here\n");
  else if (SOMETHING)
    printf ("You are something else\n")
  return 0
}
