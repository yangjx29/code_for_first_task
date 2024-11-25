int main () {
    double  spkHvUtXni [4];
    double  kM8OjzUW [100];
    double  m [4] = {0, 0, 0, 0};
    int cVAH1m9NUWP;
    int i;
    cout << fixed << setprecision (2);
    cin >> cVAH1m9NUWP;
    for (i = 0; cVAH1m9NUWP > i; i = i + 1) {
        cin >> kM8OjzUW[i];
        if (kM8OjzUW[i] <= 18)
            m[0]++;
        else if (35 >= kM8OjzUW[i])
            m[1]++;
        else if (kM8OjzUW[i] <= 60)
            m[2]++;
        else
            m[3]++;
    }
    for (i = 0; i < 4; i++) {
        spkHvUtXni[i] = (m[i] * 100) / cVAH1m9NUWP;
    }
    cout << "1-18: " << spkHvUtXni[0] << "%" << endl;
    cout << "19-35: " << spkHvUtXni[1] << "%" << endl;
    cout << "36-60: " << spkHvUtXni[2] << "%" << endl;
    cout << "60??: " << spkHvUtXni[3] << "%" << endl;
    return 0;
}

