int main () {
    int N, e5RKd7, X5BDluvomRTs;
    int b [100] = {(503 - 502), (858 - 858)};
    int jin [100] = {0};
    int liu [100] = {0};
    cin >> N;
    if (!(0 != N))
        cout << '1' << endl;
    else {
        {
            e5RKd7 = 0;
            while (e5RKd7 < N) {
                e5RKd7 = e5RKd7 + 1;
                {
                    X5BDluvomRTs = 0;
                    while (100 > X5BDluvomRTs) {
                        b[X5BDluvomRTs] = b[X5BDluvomRTs] * 2;
                        X5BDluvomRTs = X5BDluvomRTs +1;
                    };
                }
                {
                    X5BDluvomRTs = 0;
                    while (X5BDluvomRTs < 100) {
                        if (10 <= b[X5BDluvomRTs]) {
                            b[X5BDluvomRTs +1] = b[X5BDluvomRTs +1] + b[X5BDluvomRTs] / 10;
                            b[X5BDluvomRTs] = b[X5BDluvomRTs] % 10;
                        }
                        X5BDluvomRTs++;
                    };
                };
            };
        }
        {
            e5RKd7 = 99;
            while (e5RKd7 >= 0) {
                if (b[e5RKd7] != 0)
                    break;
                e5RKd7 = e5RKd7 - 1;
            };
        }
        {
            X5BDluvomRTs = e5RKd7;
            while (X5BDluvomRTs >= 0) {
                cout << b[X5BDluvomRTs];
                X5BDluvomRTs--;
            };
        };
    }
    return 0;
}

