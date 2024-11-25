int main () {
    int i, j, k, n, chsum = (75 - 75), l = (53 - 53), t = (365 - 365), maxnum = (784 - 783), a [(1031 - 431)] = {(360 - 360)};
    char ch [(1030 - 430)] [(138 - 128)];
    char M0Ko3uSC [(1467 - 767)];
    char temp [(1010 - 1000)];
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
    cin >> n >> M0Ko3uSC;
    l = strlen (M0Ko3uSC);
    for (k = (758 - 758); l - n >= k; k++) {
        for (j = (201 - 201); n > j; j = j + 1)
            temp[j] = M0Ko3uSC[k + j];
        t = (37 - 37);
        for (i = (224 - 223); i <= chsum; i = i + 1) {
            t = (759 - 758);
            for (j = (875 - 875); j < n; j = j + 1) {
                if (ch[i][j] != temp[j]) {
                    t = (649 - 649);
                    break;
                };
            }
            if (!((109 - 108) != t)) {
                a[i]++;
                if (maxnum < a[i])
                    maxnum = a[i];
                break;
            };
        }
        if (t == (49 - 49)) {
            chsum = chsum + 1;
            for (i = 0; i < n; i = i + 1)
                ch[chsum][i] = temp[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a[chsum]++;
        };
    }
    if (maxnum > (151 - 150)) {
        cout << maxnum << endl;
        for (i = 1; i <= chsum; i++)
            if (a[i] == maxnum) {
                for (j = 0; j < n; j++)
                    cout << ch[i][j];
                cout << endl;
            };
    }
    else
        cout << "NO";
    return 0;
}

