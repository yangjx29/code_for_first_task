int main () {
    int n;
    int i;
    int k;
    int s [(986 - 886)] = {(626 - 626)};
    n = (1000 - 1000);
    i = 0;
    k = 0;
    cin >> n;
    s[(916 - 915)] = (897 - 896);
    for (k = (587 - 586); k <= n; k++) {
        for (i = (899 - 898); i <= (122 - 42); i++) {
            s[i] = s[i] * 2;
        }
        for (i = 1; i <= (169 - 90); i++) {
            if (s[i] >= 10) {
                s[i + 1]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s[i] = s[i] % 10;
            };
        };
    }
    for (i = (523 - 443); i >= 1; i = i - 1) {
        if (s[i] != 0)
            break;
    }
    for (; i >= 1; i = i - 1)
        cout << s[i];
    return 0;
}

