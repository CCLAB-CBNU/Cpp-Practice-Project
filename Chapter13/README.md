# Chapter 13

| 코드 | 제목 | 파일 | 비고 |
|---|---|---|---|
| [코드 13-1] | Perceptron 클래스 헤더(Perceptron.h) | [코드_13-1.h](%EC%BD%94%EB%93%9C_13-1.h) | 여러 파일 조합 → 아래 안내 |
| [코드 13-2] | Perceptron 클래스 구현(Perceptron.cpp) | [코드_13-2.cpp](%EC%BD%94%EB%93%9C_13-2.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 13-3] | Perceptron 클래스 테스트(main.cpp) | [코드_13-3.cpp](%EC%BD%94%EB%93%9C_13-3.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 13-4] | AND·OR·NAND 진리표 테스트(main.cpp) | [코드_13-4.cpp](%EC%BD%94%EB%93%9C_13-4.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 13-5] | XORGate 클래스 헤더(XORGate.h) | [코드_13-5.h](%EC%BD%94%EB%93%9C_13-5.h) | 여러 파일 조합 → 아래 안내 |
| [코드 13-6] | XORGate 클래스 구현(XORGate.cpp) | [코드_13-6.cpp](%EC%BD%94%EB%93%9C_13-6.cpp) | 여러 파일 조합 → 아래 안내 |
| [코드 13-7] | XORGate 클래스 테스트(main.cpp) | [코드_13-7.cpp](%EC%BD%94%EB%93%9C_13-7.cpp) | 여러 파일 조합 → 아래 안내 |

## 여러 파일 조합

13장의 코드는 모두 여러 파일로 나뉘어 있습니다. 단계마다 아래 이름으로 한 폴더(또는 한 프로젝트)에 저장한 뒤 함께 빌드합니다.

### 1단계: 퍼셉트론 ([코드 13-1] ~ [코드 13-3])

| 저장할 파일 이름 | 넣을 코드 |
|---|---|
| `Perceptron.h` | [[코드 13-1]](%EC%BD%94%EB%93%9C_13-1.h) |
| `Perceptron.cpp` | [[코드 13-2]](%EC%BD%94%EB%93%9C_13-2.cpp) |
| `main.cpp` | [[코드 13-3]](%EC%BD%94%EB%93%9C_13-3.cpp) |

```bash
g++ -std=c++17 Perceptron.cpp main.cpp -o perceptron
```

### 2단계: AND·OR·NAND 진리표 ([코드 13-4])

1단계의 `main.cpp`를 [[코드 13-4]](%EC%BD%94%EB%93%9C_13-4.cpp)로 **교체**합니다. `Perceptron.h`, `Perceptron.cpp`는 그대로 사용합니다. 빌드 명령은 1단계와 같습니다.

### 3단계: XOR 게이트 ([코드 13-5] ~ [코드 13-7])

1단계의 `Perceptron.h`, `Perceptron.cpp`에 아래 파일을 추가하고, `main.cpp`를 교체합니다.

| 저장할 파일 이름 | 넣을 코드 |
|---|---|
| `Perceptron.h` | [[코드 13-1]](%EC%BD%94%EB%93%9C_13-1.h) (1단계 그대로) |
| `Perceptron.cpp` | [[코드 13-2]](%EC%BD%94%EB%93%9C_13-2.cpp) (1단계 그대로) |
| `XORGate.h` | [[코드 13-5]](%EC%BD%94%EB%93%9C_13-5.h) |
| `XORGate.cpp` | [[코드 13-6]](%EC%BD%94%EB%93%9C_13-6.cpp) |
| `main.cpp` | [[코드 13-7]](%EC%BD%94%EB%93%9C_13-7.cpp) |

```bash
g++ -std=c++17 Perceptron.cpp XORGate.cpp main.cpp -o xor
```

실행 결과:

```
0 0 -> 0
1 0 -> 1
0 1 -> 1
1 1 -> 0
```
