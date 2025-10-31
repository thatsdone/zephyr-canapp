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

## TODO
* Port simple_can_simulator.py bundled in AGL, Automotive Grade Linux 

## License

Apache 2.0
