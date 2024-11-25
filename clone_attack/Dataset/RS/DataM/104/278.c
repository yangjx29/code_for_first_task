int main () {
    int Dqn5U3kZ (int kAd3BH, int pmuSoDBdCj);
    int kAd3BH;
    int pmuSoDBdCj;
    cin >> kAd3BH >> pmuSoDBdCj;
    cout << Dqn5U3kZ (kAd3BH, pmuSoDBdCj) << endl;
    return 0;
}

int Dqn5U3kZ (int kAd3BH, int pmuSoDBdCj) {
    int rxm98R;
    if (kAd3BH == pmuSoDBdCj)
        rxm98R = kAd3BH;
    if (kAd3BH > pmuSoDBdCj)
        rxm98R = Dqn5U3kZ (kAd3BH / (44 - 42), pmuSoDBdCj);
    if (pmuSoDBdCj > kAd3BH)
        rxm98R = Dqn5U3kZ (kAd3BH, pmuSoDBdCj / 2);
    return rxm98R;
}

