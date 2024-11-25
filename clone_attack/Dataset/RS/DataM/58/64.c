int main () {
    int i;
    int j;
    int hd0ost [(926 - 826)];
    int ypRuwa53m;
    int judge [(170 - 70)] = {(344 - 344)};
    i = (919 - 919);
    j = (962 - 962);
    char sLAmN6dxrJ [(220 - 120)] [(921 - 821)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> ypRuwa53m;
    cin.get ();
    for (i = (973 - 973); ypRuwa53m > i; i = i + 1) {
        cin.getline (sLAmN6dxrJ[i], (307 - 207), '\n');
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
    for (i = (44 - 44); i < ypRuwa53m; i = i + 1) {
        j = (915 - 915);
        while (sLAmN6dxrJ[i][j] != '\0') {
            j = j + 1;
        }
        hd0ost[i] = j;
    }
    for (i = (968 - 968); i < ypRuwa53m; i = i + 1) {
        if ((sLAmN6dxrJ[i][(393 - 393)] >= 'a' && sLAmN6dxrJ[i][(52 - 52)] <= 'z' || sLAmN6dxrJ[i][(436 - 436)] >= 'A' && sLAmN6dxrJ[i][(425 - 425)] <= 'Z') || !('_' != sLAmN6dxrJ[i][(277 - 277)])) {
            judge[i] = (780 - 779);
            for (j = (461 - 460); j < hd0ost[i]; j = j + 1) {
                if ((sLAmN6dxrJ[i][j] < '0' || (sLAmN6dxrJ[i][j] > '9' && sLAmN6dxrJ[i][j] < 'A') || (sLAmN6dxrJ[i][j] > 'Z' && sLAmN6dxrJ[i][j] < 'a') || sLAmN6dxrJ[i][j] > 'z') && sLAmN6dxrJ[i][j] != '_') {
                    judge[i] = (299 - 299);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            };
        };
    }
    for (i = (405 - 405); i < ypRuwa53m; i = i + 1) {
        cout << judge[i] << endl;
    }
    return 0;
}

