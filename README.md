# zephyr-canapp

A simple CAN application example.

I tested using Espressif ESP32 DevKitC:
https://docs.zephyrproject.org/latest/boards/espressif/esp32_devkitc/doc/index.html

## Usage

1. clone this repository wherever you like.
2. chdir to the cloned repository
    * `$ cd zephyr-canapp`
3. Setup build environment.
    * `$ source ~/zephyrproject/zephyr/zephyr-env.sh`
4. Build
    * `west build -p -b esp32_devkitc/esp32/procpu .`
5. Flash
    * `west flash`
5. Run
    * `west espressif monitor`
6. Use CAN shell
    * `uart:~$ can help`

## Notes
### Qemu CAN Bus emulation

Qemu supports CAN Bus emulation.
See [https://www.qemu.org/docs/master/system/devices/can.html](https://www.qemu.org/docs/master/system/devices/can.html)
for the details.

From my experiences, CONFIG_CAN_KVASER_PCI does not work for Zephyr qemu_kvm_arm64 board. Use qemu_x86_64 (for now).

Edit prj.conf (comment out CONFIG_CAN_ESP32_TWAI and enable CONFIG_CAN_KVASER_PCI), and build it.

```
$ west build -p -b qemu_x86_64 .
```


## TODO
* Port [simple_can_simulator.py](https://git.automotivelinux.org/AGL/meta-agl-demo/tree/recipes-demo/simple-can-simulator/files/simple_can_simulator.py) bundled in AGL, Automotive Grade Linux 
* Consider integration of http_server feature and exposing status/diagnostics information
* Explore UDS support in Zephyr (as a seperate project) and add UDS responder feature
* Explore integration of virtio_net and virtio_can (under development)
## License

Apache 2.0
