// XORGate.cpp
#include "XORGate.h"

XORGate::XORGate()
    : nandGate(-0.5, -0.5, 0.7),
      orGate(0.5, 0.5, -0.2),
      andGate(0.5, 0.5, -0.7) {
      // 멤버 초기화 리스트로 세 내부 게이트를 각자의 가중치로 생성
}

int XORGate::calculate(int x1, int x2) {
    int s1 = nandGate.calculate(x1, x2);
    int s2 = orGate.calculate(x1, x2);
    return andGate.calculate(s1, s2);
}
