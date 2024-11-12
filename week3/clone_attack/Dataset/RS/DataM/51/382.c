int main () {
    int num [550] = {0};
    int n = 0;
    char a [550];
    int len = strlen (a);
    char *p = a, b [550] [6] = {0}, c [550] [6] = {0};
    int max;
    max = 0;
    cin >> n;
    cin.get ();
    cin.getline (a, 550);
    for (int BDx2vbepR = 0;
    BDx2vbepR <= len - n; BDx2vbepR = BDx2vbepR +1) {
        int j = 0;
        for (; j < n; j++) {
            b[BDx2vbepR][j] = a[j + BDx2vbepR];
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
        b[BDx2vbepR][j] = '\0';
    }
    for (int BDx2vbepR = 0;
    len - n > BDx2vbepR; BDx2vbepR++) {
        int j = BDx2vbepR +(341 - 340);
        while (j <= len - n) {
            if (strcmp (b[BDx2vbepR], b[j]) == 0)
                num[BDx2vbepR]++;
            j++;
        };
    }
    {
        int BDx2vbepR = 0;
        while (BDx2vbepR < len - n) {
            if (max < num[BDx2vbepR])
                max = num[BDx2vbepR];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            BDx2vbepR = BDx2vbepR +1;
        };
    }
    if (max == 0)
        cout << "NO";
    else {
        cout << max + 1 << endl;
        for (int BDx2vbepR = 0;
        BDx2vbepR < len - n; BDx2vbepR++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (num[BDx2vbepR] == max) {
                cout << b[BDx2vbepR] << endl;
            };
        };
    }
    return 0;
}

