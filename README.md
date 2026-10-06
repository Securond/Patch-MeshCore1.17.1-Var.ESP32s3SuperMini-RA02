# Patch-MeshCore 1.17.1-Var.ESP32s3SuperMini-RA02
Патч для добавления варианта прошивки ESP32s3SuperMini+RA02 .
Основано на оригинальной прошивке 1.17.1, без кириллицы и т.п.
Протестированы варианты BLE и WiFi.

Pinout
| RA-02  | S3 Super Mini |
| ------ | ------------: |
| 3.3V   |           3V3 |
| GND    |           GND |
| SCK    |        GPIO12 |
| MISO   |        GPIO13 |
| MOSI   |        GPIO11 | 
| NSS/CS |        GPIO10 |
| RESET  |         GPIO9 |
| DIO0   |         GPIO8 |
| DIO1   |         GPIO7 |

Просто закинуть файлы из архива в рабочий проект Meshcore и собрать прошивку.

<img width="1600" height="1600" alt="pinout_esp32s3SuperMini" src="https://github.com/user-attachments/assets/58446c27-4add-4264-8676-8c7051eebb1a" />
