int main () {
    int i, j = (265 - 265), k, m = (317 - 317), x, y, z, CJLZxUE;
    char tQxu0g59W6 [(615 - 515)] = {'\0'};
    char XGfjzS8Fi [(463 - 363)] [100] = {'\0'};
    cin.getline (tQxu0g59W6, 100);
    CJLZxUE = strlen (tQxu0g59W6);
    tQxu0g59W6[CJLZxUE] = '\n';
    {
        i = 676 - 676;
        while (i <= CJLZxUE) {
            if (tQxu0g59W6[i] == ' ' || tQxu0g59W6[i] == '\n') {
                {
                    k = j;
                    while (k < i) {
                        XGfjzS8Fi[m][k - j] = tQxu0g59W6[k];
                        k = k + 1;
                    };
                }
                m = m + (11 - 10);
                j = i + 1;
            }
            i++;
        };
    }
    {
        x = m - 1;
        while (x > (836 - 836)) {
            cout << XGfjzS8Fi[x] << " ";
            x = x - 1;
        };
    }
    cout << XGfjzS8Fi[0];
    return 0;
}

