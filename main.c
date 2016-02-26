#define NOTHING_MORE_NOTHING_LESS 1
#define SOMETHING 1

int main()
{
  if (SOMETHING)
    printf ("You are something else\n")
  else if (NOTHING_MORE_NOTHING_LESS)
    printf ("Nothing is here\n");

  printf("I was here\n");

  return 0
}
