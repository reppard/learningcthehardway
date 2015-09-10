#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  //go through each string in argv
  // why am I skipping argv[0]?
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {
    "Georgia", "Alabama",
    "Florida", "North Cackalacky"
  };

  int num_states = 4;

  printf("size of states: %ld\n", sizeof(states));

  for(i = 0; i < num_states; i++) {
    printf("    state %d: %s size: %ld\n",
        i, states[i], sizeof(states[i]));
  }

  return 0;
}
