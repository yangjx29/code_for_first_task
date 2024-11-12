int main () {
    int i, WIkb3zgqL7, m, n, x = (915 - 914);
    int tYVDCB [(933 - 928)] [(161 - 156)];
    {
        i = 185 - 185;
        while ((587 - 583) >= i) {
            {
                WIkb3zgqL7 = 614 - 614;
                while (WIkb3zgqL7 <= (251 - 247)) {
                    cin >> tYVDCB[i][WIkb3zgqL7];
                    WIkb3zgqL7++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 849 - 849;
        while ((684 - 680) >= i) {
            for (WIkb3zgqL7 = (261 - 261); WIkb3zgqL7 <= 4; WIkb3zgqL7++) {
                int RXdDkLfjKIoz = (195 - 194), v = 1;
                for (m = 0; m <= 4; m++)
                    if (tYVDCB[i][WIkb3zgqL7] < tYVDCB[i][m]) {
                        RXdDkLfjKIoz = 0;
                        break;
                    }
                for (n = 0; n <= 4; n = n + 1)
                    if (tYVDCB[i][WIkb3zgqL7] > tYVDCB[n][WIkb3zgqL7]) {
                        v = 0;
                        break;
                    }
                if (RXdDkLfjKIoz &&v) {
                    x = 0;
                    cout << i + 1 << " " << WIkb3zgqL7 +1 << " " << tYVDCB[i][WIkb3zgqL7] << endl;
                };
            }
            i++;
        };
    }
    if (x)
        cout << "not found" << endl;
    return 0;
}

