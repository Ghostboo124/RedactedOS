#pragma once

#include "types.h"
#include "xHCIDevice.hpp"
#include "keypress.h"

class xHCIKeyboard: public xHCIEndpoint {
public:
    xHCIKeyboard(uint8_t new_slot_id, xhci_usb_device_endpoint *endpoint) : xHCIEndpoint(endpoint), slot_id(new_slot_id) {}
    void request_data() override;
    void process_data() override;
private:
    trb* latest_ring;
    bool requesting = false;
    uint8_t slot_id;

    keypress last_keypress;

    int repeated_keypresses = 0; 
};