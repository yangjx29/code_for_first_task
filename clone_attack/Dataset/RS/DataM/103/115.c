int kOnseTIKAZkD (char m) {
    int jCujbxFP;
    jCujbxFP = 0;
    if ('Z' >= m && 'A' <= m)
        jCujbxFP = m - 'A' - (768 - 767);
    else if ('z' >= m && 'a' <= m)
        jCujbxFP = m - 'a' - 1;
    return jCujbxFP;
}

int main () {
    int k = 1, i = 1;
    char a [(10191 - 190)];
    char wIQb3wE1gD;
    cin.getline (a, 10001);
    wIQb3wE1gD = a[0];
    for (; a[i] != '\0';) {
        if (kOnseTIKAZkD (a[i]) == kOnseTIKAZkD (wIQb3wE1gD)) {
            k = k + 1;
        }
        else {
            cout << '(' << (char) ('A' + 1 + kOnseTIKAZkD (wIQb3wE1gD)) << ',' << k << ')';
            wIQb3wE1gD = a[i];
            k = 1;
        }
        i = i + 1;
    }
    if (kOnseTIKAZkD (a[i - 1]) != kOnseTIKAZkD (a[i - 2] || k > 1))
        cout << '(' << (char) ('A' + 1 + kOnseTIKAZkD (wIQb3wE1gD)) << ',' << k << ')';
    return 0;
}

