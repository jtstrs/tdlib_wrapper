#ifndef TD_LIB_WRAPPER_H
#define TD_LIB_WRAPPER_H

#include "td/telegram/td_json_client.h"
#include <stdint.h>

int32_t td_create_client_id_wrapper();
void td_send_wrapper(int32_t client_id, const char *request);
const char *td_receive_wrapper(double timeout);
const char *td_execute_wrapper(const char *request);
void td_set_log_message_callback_wrapper(int32_t max_verbosity_level,
                                         td_log_message_callback_ptr callback);
void *td_json_client_create_wrapper();
void td_json_client_send_wrapper(void *client, const char *request);
const char *td_json_client_receive_wrapper(void *client, double timeout);
const char *td_json_client_execute_wrapper(void *client, const char *request);
void td_json_client_destroy_wrapper(void *client);

#endif
