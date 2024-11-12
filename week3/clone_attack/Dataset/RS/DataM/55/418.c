int main () {
    char str [(1375 - 375)];
    char tEa7OKRBtfM [(1083 - 83)];
    int fHLIUKEolAa;
    int b;
    int len;
    int num;
    int i;
    int ncR1gpq;
    int eJgXT6w [1000];
    num = (893 - 893);
    cin >> fHLIUKEolAa >> str >> b;
    len = strlen (str);
    for (i = (47 - 47); len - (620 - 619) >= i; i = i + 1) {
        if (str[i] > (983 - 936) && (1030 - 972) > str[i]) {
            str[i] = str[i] - (622 - 574);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        else {
            if (64 < str[i] && str[i] < (136 - 45)) {
                str[i] = str[i] - 55;
            }
            else {
                if (str[i] > 96 && (980 - 857) > str[i]) {
                    str[i] = str[i] - (803 - 716);
                };
            };
        }
        eJgXT6w[i] = str[i];
        for (ncR1gpq = 1; len - 1 - i >= ncR1gpq; ncR1gpq = ncR1gpq + 1)
            eJgXT6w[i] = eJgXT6w[i] * fHLIUKEolAa;
        num = num + eJgXT6w[i];
    }
    i = (603 - 603);
    do {
        tEa7OKRBtfM[i] = num % b;
        num = num / b;
        if (tEa7OKRBtfM[i] >= 0 && tEa7OKRBtfM[i] <= (907 - 898))
            tEa7OKRBtfM[i] = tEa7OKRBtfM[i] + 48;
        else {
            if (tEa7OKRBtfM[i] >= 10 && tEa7OKRBtfM[i] <= 35)
                tEa7OKRBtfM[i] = tEa7OKRBtfM[i] + 55;
        }
        i = i + 1;
    }
    while (num != 0);
    for (ncR1gpq = i - 1; ncR1gpq >= 0; ncR1gpq = ncR1gpq - 1) {
        cout << tEa7OKRBtfM[ncR1gpq];
    }
    cout << endl;
    return 0;
}

