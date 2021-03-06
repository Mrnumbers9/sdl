//
// Created by jake on 18/03/17.
//

#include "Enemy.h"
#include "GameObject.h"

Enemy::Enemy(const LoaderParams *pParams) : SDLGameObject(pParams) {}


void Enemy::draw() {
    SDLGameObject::draw();
}

void Enemy::update() {
    m_x -= 1;
    m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

void Enemy::clean() {}
