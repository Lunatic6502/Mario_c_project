#include <stdio.h>

typedef struct box_obj {
  char name[4];
} Box;

typedef struct mario_obj {
  int health;
  int maxHealth;
  void *held;
} Mario;

int main() {
  Mario m_obj = {8, 8};
  Mario *ptr_m_obj = &m_obj;
  Box b_obj = {"Box"};

  m_obj.held = &b_obj;

  printf("Mario health = %i\n", ptr_m_obj->health);
  printf("Box name = %s\n", b_obj.name);
  printf("Mario holds = %s\n", ptr_m_obj->held);
}
