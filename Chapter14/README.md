# Chapter 14

| 코드 | 제목 | 파일 | 비고 |
|---|---|---|---|
| [코드 14-1] | 행렬곱 및 활성화 함수 헤더(MathUtils.h) | [코드_14-1.h](%EC%BD%94%EB%93%9C_14-1.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-2] | 행렬곱 및 활성화 함수 구현(MathUtils.cpp) | [코드_14-2.cpp](%EC%BD%94%EB%93%9C_14-2.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-3] | Layer 추상 클래스 헤더(Layer.h) | [코드_14-3.h](%EC%BD%94%EB%93%9C_14-3.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-4] | Layer 추상 클래스 구현(Layer.cpp) | [코드_14-4.cpp](%EC%BD%94%EB%93%9C_14-4.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-5] | 은닉층 클래스 헤더(HiddenLayer.h) | [코드_14-5.h](%EC%BD%94%EB%93%9C_14-5.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-6] | 은닉층 클래스 구현(HiddenLayer.cpp) | [코드_14-6.cpp](%EC%BD%94%EB%93%9C_14-6.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-7] | 출력층 클래스 헤더(OutputLayer.h) | [코드_14-7.h](%EC%BD%94%EB%93%9C_14-7.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-8] | 출력층 클래스 구현(OutputLayer.cpp) | [코드_14-8.cpp](%EC%BD%94%EB%93%9C_14-8.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-9] | NeuralNetwork 클래스 헤더(NeuralNetwork.h) | [코드_14-9.h](%EC%BD%94%EB%93%9C_14-9.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-10] | NeuralNetwork 클래스 구현(NeuralNetwork.cpp) | [코드_14-10.cpp](%EC%BD%94%EB%93%9C_14-10.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-11] | 손실 함수 헤더(Loss.h) | [코드_14-11.h](%EC%BD%94%EB%93%9C_14-11.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-12] | 손실 함수 구현(Loss.cpp) | [코드_14-12.cpp](%EC%BD%94%EB%93%9C_14-12.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-13] | Layer 추상 클래스 헤더 - backward( ) 추가(Layer.h 수정) | [코드_14-13.h](%EC%BD%94%EB%93%9C_14-13.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-14] | 출력층 클래스 헤더 - backward( ) 추가(OutputLayer.h 수정) | [코드_14-14.h](%EC%BD%94%EB%93%9C_14-14.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-15] | 출력층 클래스 구현 - backward( ) 추가(OutputLayer.cpp 수정) | [코드_14-15.cpp](%EC%BD%94%EB%93%9C_14-15.cpp) | 조각 코드(OutputLayer.cpp에 추가) |
| [코드 14-16] | 은닉층 클래스 헤더 - backward( ) 추가(HiddenLayer.h 수정) | [코드_14-16.h](%EC%BD%94%EB%93%9C_14-16.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-17] | 은닉층 클래스 구현 - backward() 추가(HiddenLayer.cpp 수정) | [코드_14-17.cpp](%EC%BD%94%EB%93%9C_14-17.cpp) | 조각 코드(HiddenLayer.cpp에 추가) |
| [코드 14-18] | NeuralNetwork 클래스 헤더 - train( ) 추가(NeuralNetwork.h 수정) | [코드_14-18.h](%EC%BD%94%EB%93%9C_14-18.h) | 여러 파일 조합 → 아래 안내 |
| [코드 14-19] | NeuralNetwork 클래스 구현 - train( ) 추가(NeuralNetwork.cpp 수정) | [코드_14-19.cpp](%EC%BD%94%EB%93%9C_14-19.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-20] | XOR 학습 및 결과 보기(main.cpp) | [코드_14-20.cpp](%EC%BD%94%EB%93%9C_14-20.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 14-21] | 은닉층을 추가하는 NeuralNetwork 클래스 | [코드_14-21.cpp](%EC%BD%94%EB%93%9C_14-21.cpp) | 조각 코드(생성자 교체) |
| [코드 14-22] | 깊은 은닉층을 학습하는 메인 함수 | [코드_14-22.cpp](%EC%BD%94%EB%93%9C_14-22.cpp) | 조각 코드(main 수정) |

## 여러 파일 조합

14장은 하나의 신경망 프로젝트를 단계별로 고쳐 나갑니다. 뒤 단계의 코드는 앞 단계 파일을 **교체**하거나 앞 단계 파일 끝에 **이어 붙이는** 방식이므로, 아래 표를 따라 파일을 만드세요.

### 1단계: 순전파 신경망 ([코드 14-1] ~ [코드 14-12])

| 저장할 파일 이름 | 넣을 코드 |
|---|---|
| `MathUtils.h` | [[코드 14-1]](%EC%BD%94%EB%93%9C_14-1.h) |
| `MathUtils.cpp` | [[코드 14-2]](%EC%BD%94%EB%93%9C_14-2.cpp) |
| `Layer.h` | [[코드 14-3]](%EC%BD%94%EB%93%9C_14-3.h) |
| `Layer.cpp` | [[코드 14-4]](%EC%BD%94%EB%93%9C_14-4.cpp) |
| `HiddenLayer.h` | [[코드 14-5]](%EC%BD%94%EB%93%9C_14-5.h) |
| `HiddenLayer.cpp` | [[코드 14-6]](%EC%BD%94%EB%93%9C_14-6.cpp) |
| `OutputLayer.h` | [[코드 14-7]](%EC%BD%94%EB%93%9C_14-7.h) |
| `OutputLayer.cpp` | [[코드 14-8]](%EC%BD%94%EB%93%9C_14-8.cpp) |
| `NeuralNetwork.h` | [[코드 14-9]](%EC%BD%94%EB%93%9C_14-9.h) |
| `NeuralNetwork.cpp` | [[코드 14-10]](%EC%BD%94%EB%93%9C_14-10.cpp) |
| `Loss.h` | [[코드 14-11]](%EC%BD%94%EB%93%9C_14-11.h) |
| `Loss.cpp` | [[코드 14-12]](%EC%BD%94%EB%93%9C_14-12.cpp) |

이 단계에는 `main.cpp`가 없으므로 컴파일만 확인합니다.

```bash
g++ -std=c++17 -c MathUtils.cpp Layer.cpp HiddenLayer.cpp OutputLayer.cpp NeuralNetwork.cpp Loss.cpp
```

### 2단계: 역전파와 학습 ([코드 14-13] ~ [코드 14-20])

1단계 파일을 아래와 같이 고칩니다. 완성된 프로젝트는 파일 13개입니다.

| 파일 이름 | 넣을 코드 | 1단계에서 바뀌는 점 |
|---|---|---|
| `MathUtils.h` | [[코드 14-1]](%EC%BD%94%EB%93%9C_14-1.h) | 그대로 |
| `MathUtils.cpp` | [[코드 14-2]](%EC%BD%94%EB%93%9C_14-2.cpp) | 그대로 |
| `Layer.h` | [[코드 14-13]](%EC%BD%94%EB%93%9C_14-13.h) | [코드 14-3]을 **교체** |
| `Layer.cpp` | [[코드 14-4]](%EC%BD%94%EB%93%9C_14-4.cpp) | 그대로 |
| `HiddenLayer.h` | [[코드 14-16]](%EC%BD%94%EB%93%9C_14-16.h) | [코드 14-5]를 **교체** |
| `HiddenLayer.cpp` | [[코드 14-6]](%EC%BD%94%EB%93%9C_14-6.cpp) + [[코드 14-17]](%EC%BD%94%EB%93%9C_14-17.cpp) | [코드 14-6] 끝에 [코드 14-17]을 **이어 붙임** |
| `OutputLayer.h` | [[코드 14-14]](%EC%BD%94%EB%93%9C_14-14.h) | [코드 14-7]을 **교체** |
| `OutputLayer.cpp` | [[코드 14-8]](%EC%BD%94%EB%93%9C_14-8.cpp) + [[코드 14-15]](%EC%BD%94%EB%93%9C_14-15.cpp) | [코드 14-8] 끝에 [코드 14-15]를 **이어 붙임** |
| `NeuralNetwork.h` | [[코드 14-18]](%EC%BD%94%EB%93%9C_14-18.h) | [코드 14-9]를 **교체** |
| `NeuralNetwork.cpp` | [[코드 14-19]](%EC%BD%94%EB%93%9C_14-19.cpp) | [코드 14-10]을 **교체**(생성자, `predict()`, 소멸자 포함) |
| `Loss.h` | [[코드 14-11]](%EC%BD%94%EB%93%9C_14-11.h) | 그대로 |
| `Loss.cpp` | [[코드 14-12]](%EC%BD%94%EB%93%9C_14-12.cpp) | 그대로 |
| `main.cpp` | [[코드 14-20]](%EC%BD%94%EB%93%9C_14-20.cpp) | 새로 추가 |

```bash
g++ -std=c++17 MathUtils.cpp Layer.cpp HiddenLayer.cpp OutputLayer.cpp NeuralNetwork.cpp Loss.cpp main.cpp -o xor_nn
```

> `Layer` 생성자([코드 14-4])는 `srand()` 없이 `rand()`로 가중치를 초기화합니다. 따라서 Loss 값과 XOR 예측값은 컴파일러와 표준 라이브러리에 따라 책과 다를 수 있습니다.

> **책과 다른 점:** [코드 14-15]와 [코드 14-17]의 `backward()`에는 편향(bias)을 갱신하는 `bias[i] += lr * delta[i];`가 추가되어 있습니다. 이 코드가 없으면 편향이 0으로 고정되어 XOR을 제대로 학습하지 못합니다(예: `1, 1` 입력의 출력이 0.5 근처에 머묾).

### 3단계: 은닉층 추가 ([코드 14-21], [코드 14-22])

2단계 프로젝트에서 두 곳만 고칩니다.

1. `NeuralNetwork.cpp`: 생성자 `NeuralNetwork::NeuralNetwork(...)` 부분만 [[코드 14-21]](%EC%BD%94%EB%93%9C_14-21.cpp)로 **교체**합니다. `predict()`, `train()`, 소멸자는 그대로 둡니다.
2. `main.cpp`: `NeuralNetwork nn(2, 4, 1);`을 `NeuralNetwork nn(2, 8, 1);`로 바꿉니다. [[코드 14-22]](%EC%BD%94%EB%93%9C_14-22.cpp)는 이 변경을 보여 주는 조각 코드입니다. 변수 이름이 `net`으로 되어 있으니 그대로 붙여 넣지 말고 숫자만 바꾸세요.

빌드 명령은 2단계와 같습니다.
