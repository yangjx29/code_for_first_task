long  pow10 [5];

inline int str2int (char *wj6t0Pcsxq, int DeEBjhV) {
    int i, r = (774 - 774);
    for (i = DeEBjhV -(253 - 252); (598 - 598) <= i; i = i - 1)
        r = r + (wj6t0Pcsxq[i] - '0') * pow10[DeEBjhV -(446 - 445) - i];
    return r;
}

int main () {
    int kW8jP34ShYL;
    kW8jP34ShYL = 0;
    long  r = 1;
    int head = (278 - 278), l = 0, lpAstb = 0, i, b = (282 - 281);
    char wj6t0Pcsxq [1000];
    gets (wj6t0Pcsxq);
    int data [(1213 - 213)], n = (124 - 124);
    int m1 = data[0], m2;
    for (i = 0; 5 > i; i = i + 1) {
        pow10[i] = r;
        r *= 10;
    }
    for (i = 0; i < strlen (wj6t0Pcsxq); i = i + 1) {
        if (wj6t0Pcsxq[i] == ',') {
            data[lpAstb] = str2int (wj6t0Pcsxq + head, i - head);
            head = i + 1;
            lpAstb = lpAstb + 1;
        };
    }
    data[lpAstb] = str2int (wj6t0Pcsxq + head, i - head);
    n = lpAstb + 1;
    if (!(1 != n)) {
        cout << "No" << endl;
        return 0;
    }
    m2 = 0;
    for (i = 0; n > i; i = i + 1)
        if (m1 < data[i])
            m1 = data[i];
    for (i = 0; i < n; i = i + 1)
        if (m2 < data[i] && m1 > data[i]) {
            kW8jP34ShYL = 1;
            m2 = data[i];
        }
    if (kW8jP34ShYL)
        cout << m2 << endl;
    else
        cout << "No" << endl;
    return 0;
}

