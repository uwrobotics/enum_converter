// #include <nlohmann/json.hpp>
#include <iostream>
#include <string>
#include <lcm/lcm-cpp.hpp>
#include "msg/encode_msg.hpp"

// using json = nlohmann::json;


class Handler 
{
    public:
        ~Handler() {}

        void handleMessage(const lcm::ReceiveBuffer* rbuf,
                const std::string& chan, 
                const msg::encode_msg* msg)
        {
            std::cout << msg->payload << std::endl
                << msg->timestamp << std::endl;
        }
};

int main(int argc, char** argv)
{
    lcm::LCM lcm;
    if(!lcm.good())
        return 1;

    Handler handlerObject;
    lcm.subscribe("ENCODE", &Handler::handleMessage, &handlerObject);

    while(0 == lcm.handle());

    return 0;
}
