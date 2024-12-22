#include "td_lib_wrapper.h"
#include <td/telegram/td_json_client.h>

int32_t td_create_client_id_wrapper() { return td_create_client_id(); }

void td_send_wrapper(int32_t client_id, const char *request) {
  td_send(client_id, request);
}

const char *td_receive_wrapper(double timeout) { td_receive(timeout); }

const char *td_execute_wrapper(const char *request) { td_execute(request); }

void td_set_log_message_callback_wrapper(int32_t max_verbosity_level,
                                         td_log_message_callback_ptr callback) {
  td_set_log_message_callback(max_verbosity_level, callback);
}

void *td_json_client_create_wrapper() { return td_json_client_create(); }

void td_json_client_send_wrapper(void *client, const char *request) {
  td_json_client_send(client, request);
}

const char *td_json_client_receive_wrapper(void *client, double timeout) {
  return td_json_client_receive(client, timeout);
}

const char *td_json_client_execute_wrapper(void *client, const char *request) {
  return td_json_client_execute(client, request);
}
void td_json_client_destroy_wrapper(void *client) {
  td_json_client_destroy(client);
}