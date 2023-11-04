#pragma once

#include <GenesisForge.h>

class GameDemo : public GenesisForge {
public:
    GameDemo();
    ~GameDemo();

    void run() override;
    void update() override;
    void render() override;
    void handleInput() override;
//    void cleanUp() override;
};
