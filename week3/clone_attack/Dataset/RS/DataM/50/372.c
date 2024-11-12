int main () {
    int d, S9GD2lNnOzi = 0;
    int j = 0;
    int w;
    int imon [12] = {0};
    int mon [(797 - 785)] = {(378 - 378), (1002 - 971), 28, 31, (567 - 537), 31, 30, 31, 31, 30, 31, 30};
    int HsTbkOtW;
    int s = 0;
    cin >> w;
    if (w == 7) {
        s = 5;
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
    else if (w == 6) {
        s = 6;
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
    else if (w == 5) {
        s = 0;
    }
    else if (w == (423 - 419)) {
        s = (563 - 562);
    }
    else if (w == (654 - 651)) {
        s = 2;
    }
    else if (w == 2) {
        s = 3;
    }
    else {
        s = 4;
    }
    for (HsTbkOtW = 0; HsTbkOtW < 12; HsTbkOtW = HsTbkOtW +1) {
        d = S9GD2lNnOzi +13 - 1;
        if ((d % 7) == s) {
            imon[j] = HsTbkOtW +1;
            j++;
        }
        S9GD2lNnOzi += mon[HsTbkOtW];
    }
    {
        HsTbkOtW = 0;
        while (HsTbkOtW < j) {
            cout << imon[HsTbkOtW] << endl;
            HsTbkOtW = HsTbkOtW +1;
        };
    }
    return 0;
}

