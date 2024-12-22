#include "td/telegram/td_json_client.h"
#include <stdint.h>

int32_t main(int32_t argc, char *argv[]) {
  void *td_client = td_json_client_create();
  td_json_client_destroy(td_client);
  return 0;
}