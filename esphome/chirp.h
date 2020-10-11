#include "esphome.h"

class ChirpComponent : public Component, public I2CDevice {
	public:
		Sensor *chirp_sensor = new Sensor();
		ChirpComponent(I2CComponent *parent, uint8_t address, bool vref_default = false) : I2CDevice(parent, address) {
			//this->vref_default_ = vref_default;
		}

		void setup() override {
			ESP_LOGCONFIG("chirp", "Setting up ChirpComponent at %#02x ...", address_);
		}

		//void update() override {
		//	ESP_LOGCONFIG("chirp", "Updating values for ChirpComponent at %#02x ...", address_);
		//}

};
