#include <zephyr/zbus/zbus.h>

static void channel_obs_cb(const struct zbus_channel *chan)
{
}

ZBUS_LISTENER_DEFINE(obs_1, channel_obs_cb);
