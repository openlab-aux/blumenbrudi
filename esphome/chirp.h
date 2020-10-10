#include "esphome.h"

class ChirpComponent : public PollingComponent, public Sensor, public I2CDevice {
	public:
		ChirpComponent() : PollingComponent(5000) {}

		void setup() override {
			//Wire.begin();
			//update_addr(0x20, 0x20);
			//update();
		}

		void update() override {
			//Wire.beginTransmission(0x20);
			//Wire.write(0x00); // 0x00 is hum
			//Wire.endTransmission();
			//delay(1100);
			//Wire.requestFrom(0x20, 2);
			//unsigned int t = Wire.read() << 8;
			//t = t | Wire.read();
			//ESP_LOGD("chirp", "Humidity is: %i", t);
			//publish_state(t);
		}

		void update_addr(int addr, int new_addr) {
			Wire.beginTransmission(addr);
			Wire.write(0x01); // 0x01 is write i2c addr
			Wire.write(new_addr); // new addr
			Wire.endTransmission();
		}
};
