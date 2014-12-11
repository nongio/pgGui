#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "ofMain.h"
#include "Utils.h"
#include "ofAddon.h"


TEST_CASE( "ofAddons class", "[ofAddons]" ) {
    SECTION("initialization") {
        ofAddon addon;
        REQUIRE( addon.pathToOF == getOFRoot() );
    }
    SECTION("parsing") {

    }
}
