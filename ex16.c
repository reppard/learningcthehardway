#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);
  free(who->name);
  free(who);
}

void Person_print(struct Person *who)
{
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
  // make two people structures
  struct Person *reppard = Person_create("Reppard Walker", 34, 64, 160);
  struct Person *ash = Person_create("Ashley Walker", 30, 62, 115);

  // print them out and where they are in memory
  printf("Reppard is at memory location %p:\n", reppard);
  Person_print(reppard);

  printf("Ashley is at memory location %p:\n", ash);
  Person_print(ash);

  // make everyone age 20 years and print them again
  reppard->age += 20;
  reppard->height -= 2;
  reppard->weight += 40;
  Person_print(reppard);

  ash->age += 20;
  ash->height -= 2;
  ash->weight += 20;
  Person_print(ash);

  // destroy them both so we clean up
  Person_destroy(reppard);
  Person_destroy(ash);

  return 0;
}

// includes
//  stdlib gives us malloc and free
//  assert gives us....assert
//  string gives us strdup
