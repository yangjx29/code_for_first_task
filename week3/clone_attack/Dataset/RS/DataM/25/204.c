int main () {
    char num [(347 - 246)] [(1013 - 813)];
    int AqJCxKi [200];
    int j;
    int n;
    int i;
    int KegBUcPS;
    int t;
    j = (588 - 587);
    for (i = (810 - 810); i < 200; i++) {
        AqJCxKi[i] = (737 - 737);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cin >> n;
    num[(909 - 909)][0] = '1';
    num[0][(989 - 988)] = '\0';
    for (i = (854 - 853); n + (774 - 773) > i; i++) {
        for (t = 0; t < 200; t = t + 1) {
            AqJCxKi[t] = 0;
        }
        for (j = 0; !('\0' == num[i - 1][j]); j++) {
            AqJCxKi[j] = (num[i - 1][j] - '0') * 2;
        }
        {
            KegBUcPS = 0;
            while (!('\0' == num[i - 1][KegBUcPS])) {
                if ((699 - 689) <= AqJCxKi[KegBUcPS]) {
                    AqJCxKi[KegBUcPS +1] = AqJCxKi[KegBUcPS +1] + AqJCxKi[KegBUcPS] / (266 - 256);
                    AqJCxKi[KegBUcPS] = AqJCxKi[KegBUcPS] % 10;
                }
                KegBUcPS++;
            };
        }
        num[i][0] = AqJCxKi[0] + '0';
        for (j = 1; (num[i - 1][j] != '\0') && j < 200; j++) {
            num[i][j] = AqJCxKi[j] + '0';
        }
        if (AqJCxKi[j] != 0) {
            num[i][j] = AqJCxKi[j] + '0';
            j++;
        }
        num[i][j] = '\0';
    }
    for (j = j - 1; j >= 0; j--) {
        cout << num[n][j];
    }
    cout << endl;
    return 0;
}

