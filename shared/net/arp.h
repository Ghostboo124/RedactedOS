#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"
#include "net/network_types.h"

typedef struct __attribute__((packed)) arp_hdr_t {
        uint16_t htype;
        uint16_t ptype;
        uint8_t hlen;
        uint8_t plen;
        uint16_t opcode;
        uint8_t sender_mac[6];
        uint32_t sender_ip;
        uint8_t target_mac[6];
        uint32_t target_ip;
} arp_hdr_t;

void create_arp_packet(uintptr_t p, uint8_t* src_mac, uint32_t src_ip, uint8_t* dst_mac, uint32_t dst_ip, bool is_request);
bool arp_should_handle(arp_hdr_t *arp, uint32_t ip);
void arp_populate_response(network_connection_ctx *ctx, arp_hdr_t* arp);

#ifdef __cplusplus
}
#endif