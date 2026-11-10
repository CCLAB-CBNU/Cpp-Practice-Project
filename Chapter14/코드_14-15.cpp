// OutputLayer.cpp 수정
vector<double> OutputLayer::backward(const vector<double>& target, double lr) {
    vector<double> delta(lastOutput.size());
    for (size_t i = 0; i < lastOutput.size(); i++) {
        double o = lastOutput[i];
        delta[i] = (target[i] - o) * o * (1 - o);   // (t-o) * sigmoid'(o)
    }

    // 이전 층(은닉층)에 전달할 오차 : Wᵀ * delta(가중치 갱신 전에 먼저 계산)
    vector<double> propagated(lastInput.size(), 0.0);
    for (size_t j = 0; j < lastInput.size(); j++)
        for (size_t i = 0; i < weights.size(); i++)
            propagated[j] += weights[i][j] * delta[i];

    // 가중치 갱신 : W = W + lr * delta * input
    for (size_t i = 0; i < weights.size(); i++)
        for (size_t j = 0; j < weights[i].size(); j++)
            weights[i][j] += lr * delta[i] * lastInput[j];

    // 편향 갱신 : b = b + lr * delta
    for (size_t i = 0; i < bias.size(); i++)
        bias[i] += lr * delta[i];

    return propagated;    // 은닉층 뉴런 수 크기의 벡터
}
