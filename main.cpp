#define CROW_MAIN  // Only needed for Crow version 0.3

#include "crow.h"  // or "crow_all.h"
#include <boost/asio.hpp>

using std::cout;

int main() {
    crow::SimpleApp app;
    CROW_ROUTE(app,"/")([]() {
        return "Hello World!\n This is my first API!";
    });
    app.port(18080).multithreaded().run();
} 