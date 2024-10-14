#include <zephyr/zbus/zbus.h>

ZBUS_CHAN_DEFINE(zbus_chan_1,
                 int,
                 nullptr,
                 nullptr,
                 ZBUS_OBSERVERS(obs_1),
                 0
);

int main(){
    return 0;
}