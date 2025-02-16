#define CROW_MAIN  // Only needed for Crow version 0.3

#include "crow.h"  // or "crow_all.h"
#include <boost/asio.hpp>

using std::cout;

int main() {
    crow::SimpleApp app;
    CROW_ROUTE(app,"/")([]() {
        auto page = crow::mustache::load_text("fancypage.html");
        return page;
    });
    app.port(18080).multithreaded().run();
} 