int main () {
    int c [101] [101];
    int n;
    int i;
    int iLMjQH;
    int s;
    int t;
    cin >> n;
    while (n--) {
        int sum;
        sum = 0;
        cin >> s >> t;
        for (i = (613 - 613); s > i; i++) {
            iLMjQH = 803 - 803;
            while (iLMjQH < t) {
                cin >> c[i][iLMjQH];
                iLMjQH = iLMjQH + 1;
            };
        }
        if (s == 1)
            for (i = 0; t > i; i++)
                sum = sum + c[0][t];
        else {
            if (!(1 != t)) {
                i = 0;
                while (s > i) {
                    sum = sum + c[i][0];
                    i = i + 1;
                };
            }
            else {
                {
                    i = 0;
                    while (i < t) {
                        sum = sum + c[0][i] + c[s - 1][i];
                        i = i + 1;
                    };
                }
                {
                    i = 1;
                    while (i < s - 1) {
                        sum = sum + c[i][0] + c[i][t - 1];
                        i = i + 1;
                    };
                };
            };
        }
        cout << sum << endl;
    }
    return 0;
}

