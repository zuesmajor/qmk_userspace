#pragma once

#define SPI_DRIVER SPID0

#define SPI_MISO_PIN GP16 // this is a fake pin
#define SPI_SCK_PIN	GP2 // SCL
#define SPI_MOSI_PIN GP3 // SDA

#define LCD_RST_PIN GP13
#define LCD_DC_PIN GP14
#define LCD_CS_PIN GP15
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 30000
#define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE

#define AUDIO_PIN GP0
#define AUDIO_PWM_DRIVER PWMD0
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(VIOLIN_SOUND)
#define GOODBYE_SONG SONG(MUSIC_OFF_SOUND)