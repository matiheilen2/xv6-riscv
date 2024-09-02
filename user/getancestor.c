#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Usage: getancestor <n>\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  int ancestor_pid = getancestor(n);

  if (ancestor_pid == -1) {
    printf("Invalid ancestor level or not enough ancestors.\n");
  } else {
    printf("Ancestor PID at level %d: %d\n", n, ancestor_pid);
  }

  exit(0);
}
