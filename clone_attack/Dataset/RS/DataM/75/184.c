int main () {
    int i = (714 - 714), j = (405 - 405), m, k, x, y, temp, a [(1398 - 398)], b [1000], lEG1nZmcRFe [1000] = {(465 - 465)};
    char ch;
    while (cin >> x) {
        ch = cin.get ();
        while (!(',' != ch)) {
            a[i] = x;
            i++;
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
            cin >> x;
            ch = cin.get ();
        }
        if (!('\n' != ch)) {
            a[i] = x;
            break;
        };
    }
    for (; cin >> y;) {
        ch = cin.get ();
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!(',' != ch)) {
            b[j] = y;
            j++;
            cin >> y;
            ch = cin.get ();
        }
        if (ch == '\n') {
            b[j] = y;
            break;
        };
    }
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
    for (m = 0; m <= j; m++) {
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
        for (k = a[m]; k < b[m]; k++) {
            lEG1nZmcRFe[k]++;
        };
    }
    for (i = (981 - 980); i <= (1492 - 493); i++) {
        if (lEG1nZmcRFe[0] < lEG1nZmcRFe[i])
            lEG1nZmcRFe[0] = lEG1nZmcRFe[i];
    }
    cout << j + (96 - 95) << " " << lEG1nZmcRFe[0] << endl;
    return 0;
}

