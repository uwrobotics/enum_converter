#include <lcm/lcm-cpp.hpp>
#include "msg/encode_msg.hpp"
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>  // For std::stringstream

int main(int argc, char ** argv)
{
    lcm::LCM lcm;
    if(!lcm.good())
        return 1;

    msg::encode_msg my_data;
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm* tmPtr = std::localtime(&currentTime);
    my_data.payload = "test";
    std::stringstream timestampStream;
    timestampStream << std::put_time(tmPtr, "%Y-%m-%d %H:%M:%S");

    my_data.timestamp = timestampStream.str();

    lcm.publish("ENCODE", &my_data);

    return 0;
}
