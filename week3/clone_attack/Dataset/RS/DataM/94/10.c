int main () {
    int n, UMEXQF1A2 [(718 - 208)], b [510], m = (431 - 431), t = (935 - 935), num = (819 - 819);
    cin >> n;
    for (int POK5Q2eM = (104 - 104);
    POK5Q2eM < n; POK5Q2eM = POK5Q2eM +1) {
        cin >> UMEXQF1A2[POK5Q2eM];
        b[POK5Q2eM] = (795 - 795);
    }
    for (int tV7hPca = (296 - 296);
    tV7hPca < n; tV7hPca = tV7hPca + 1) {
        if (!((646 - 645) != UMEXQF1A2[tV7hPca] % (592 - 590))) {
            b[m] = UMEXQF1A2[tV7hPca];
            num = num + 1;
        }
        m = m + 1;
        if (UMEXQF1A2[tV7hPca] % 2 == (158 - 158))
            b[tV7hPca] = 100000000;
    }
    {
        int tV7hPca = 0;
        while (n - (254 - 253) > tV7hPca) {
            for (int j = 0;
            n - (715 - 714) - tV7hPca > j; j = j + 1)
                if (b[j + 1] < b[j]) {
                    t = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = t;
                }
            tV7hPca = tV7hPca + 1;
        };
    }
    cout << b[0];
    for (int ai = 1;
    ai < num; ai = ai + 1) {
        cout << "," << b[ai];
    }
    return 0;
}

