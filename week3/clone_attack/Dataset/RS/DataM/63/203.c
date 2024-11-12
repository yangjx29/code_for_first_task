int main () {
    int Udcq0L17 = (643 - 643), WhlVspc = 0, k = 0, Z9ZxroFjnPUM = 0, WAc3RjdW = 0, j7g3PU84NW0 = 0, HsUkBHDnzK = 0;
    int SPs9YlEcQ7X [(363 - 263)] [100], tTiG4DzeCxHA [100] [100], EyMjfAu4p [100] [100];
    cin >> Z9ZxroFjnPUM >> WAc3RjdW;
    for (Udcq0L17 = 0; Udcq0L17 < Z9ZxroFjnPUM; Udcq0L17 = Udcq0L17 +1)
        for (WhlVspc = 0; WhlVspc < WAc3RjdW; WhlVspc = WhlVspc +1) {
            cin >> SPs9YlEcQ7X[Udcq0L17][WhlVspc];
        }
    cin >> j7g3PU84NW0 >> HsUkBHDnzK;
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
    for (Udcq0L17 = 0; Udcq0L17 < j7g3PU84NW0; Udcq0L17 = Udcq0L17 +1)
        for (WhlVspc = 0; WhlVspc < HsUkBHDnzK; WhlVspc++) {
            cin >> tTiG4DzeCxHA[Udcq0L17][WhlVspc];
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
    for (Udcq0L17 = 0; Udcq0L17 < Z9ZxroFjnPUM; Udcq0L17 = Udcq0L17 +1)
        for (WhlVspc = 0; WhlVspc < HsUkBHDnzK; WhlVspc++) {
            EyMjfAu4p[Udcq0L17][WhlVspc] = 0;
            for (k = 0; k < WAc3RjdW; k++) {
                EyMjfAu4p[Udcq0L17][WhlVspc] = EyMjfAu4p[Udcq0L17][WhlVspc] + SPs9YlEcQ7X[Udcq0L17][k] * tTiG4DzeCxHA[k][WhlVspc];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
    for (Udcq0L17 = 0; Udcq0L17 < Z9ZxroFjnPUM; Udcq0L17++) {
        for (WhlVspc = 0; WhlVspc < HsUkBHDnzK -1; WhlVspc++) {
            cout << EyMjfAu4p[Udcq0L17][WhlVspc] << ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        cout << EyMjfAu4p[Udcq0L17][HsUkBHDnzK -1] << endl;
    }
    return 0;
}

