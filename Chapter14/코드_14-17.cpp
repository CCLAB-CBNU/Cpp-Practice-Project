// HiddenLayer.cpp 수정
vector<double> HiddenLayer::backward(const vector<double>& propagatedError, double lr) {
    // propagatedError는 다음 층(출력층)의 backward()가 이미 Wᵀ * delta로 계산해 전달한 값
    vector<double> delta(lastOutput.size());
    for (size_t i = 0; i < lastOutput.size(); i++) {
        double h = lastOutput[i];
        delta[i] = propagatedError[i] * h * (1 - h);
    }

    vector<double> propagated(lastInput.size(), 0.0);
    for (size_t j = 0; j < lastInput.size(); j++)
        for (size_t i = 0; i < weights.size(); i++)
            propagated[j] += weights[i][j] * delta[i];

    for (size_t i = 0; i < weights.size(); i++)
        for (size_t j = 0; j < weights[i].size(); j++)
            weights[i][j] += lr * delta[i] * lastInput[j];

    return propagated;
}
