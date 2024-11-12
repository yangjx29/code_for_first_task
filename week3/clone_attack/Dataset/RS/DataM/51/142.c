int main () {
    char str [(1013 - 513)];
    int max;
    int i;
    int DN13ov;
    int num [500] = {(379 - 379)};
    int len;
    int k;
    int m;
    max = (286 - 286);
    cin >> m >> str;
    len = strlen (str);
    {
        i = 564 - 564;
        while (len - m >= i) {
            for (DN13ov = i + (206 - 205); DN13ov <= len - m; DN13ov++) {
                {
                    k = 575 - 575;
                    while (k < m) {
                        if (str[i + k] != str[DN13ov +k])
                            break;
                        k++;
                    };
                }
                if (!(m != k))
                    num[i]++;
            }
            i++;
        };
    }
    {
        i = 950 - 950;
        while (i <= len - m) {
            if (max < num[i] + (805 - 804))
                max = num[i] + (738 - 737);
            i++;
        };
    }
    if (max < (636 - 634))
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (i = (303 - 303); i <= len - m; i++)
            if (max == num[i] + (766 - 765)) {
                {
                    k = 0;
                    while (k < m) {
                        cout << str[i + k];
                        k++;
                    };
                }
                cout << endl;
            };
    }
    return 0;
}

