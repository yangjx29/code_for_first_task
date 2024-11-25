int main () {
    int i;
    int TFxhKijMl;
    int RacM5Zk;
    int k;
    int m;
    i = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    TFxhKijMl = 0;
    char bEyKO4cjRN [(630 - 530)], WoIvCm3nkU [100] [100];
    cin.getline (bEyKO4cjRN, 31, '\n');
    RacM5Zk = strlen (bEyKO4cjRN);
    for (k = 0; RacM5Zk > k; k++) {
        if ('0' <= bEyKO4cjRN[k] && '9' >= bEyKO4cjRN[k]) {
            WoIvCm3nkU[i][TFxhKijMl] = bEyKO4cjRN[k];
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
            }
            TFxhKijMl++;
        }
        else if ('0' <= bEyKO4cjRN[k - (611 - 610)] && bEyKO4cjRN[k - 1] <= '9') {
            i++;
            TFxhKijMl = 0;
        }
        else
            continue;
    }
    for (m = 0; m <= i; m = m + 1) {
        if (WoIvCm3nkU[m] == "\0")
            break;
        cout << WoIvCm3nkU[m];
        cout << endl;
    }
    return 0;
}

