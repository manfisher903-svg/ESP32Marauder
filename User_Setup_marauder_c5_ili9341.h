#define USER_SETUP_INFO "Marauder_C5_ILI9341"

#define ILI9341_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

#define TFT_MISO 4
#define TFT_MOSI 24
#define TFT_SCLK 23
#define TFT_CS   5
#define TFT_DC   3
#define TFT_RST  2
// TFT_BL left undefined — backlight tied to 3V3
#define TOUCH_CS 7

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY       20000000
#define SPI_READ_FREQUENCY   6000000
#define SPI_TOUCH_FREQUENCY  1500000
