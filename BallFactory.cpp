#include "BallFactory.h"
#include "BaseBall.h"
#include "BasketBall.h"
#include "TennisBall.h"

Ball* BallFactory::create(Ball::TYPE type)
{
switch (type) {
case Ball::TYPE::BaseBall:
return new BaseBall;
case Ball::TYPE::BasketBall:
return new BasketBall;
case Ball::TYPE::TennisBall:
return new TennisBall;
}
return nullptr;
}
