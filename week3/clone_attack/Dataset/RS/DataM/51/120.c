int main () {
    char dAC6aMsibgB [(873 - 363)];
    char *p = NULL;
    int WpzlTS1V2Rgi, len, IrH0phK, koS741hP0Tq [(992 - 482)] = {(843 - 843)}, t [510], cWpAFJmjk, j, max;
    cin >> WpzlTS1V2Rgi;
    cin.get ();
    cin.getline (dAC6aMsibgB, 510);
    len = strlen (dAC6aMsibgB);
    for (IrH0phK = (530 - 530); len - WpzlTS1V2Rgi > IrH0phK; IrH0phK++) {
        p = dAC6aMsibgB + IrH0phK +(45 - 44);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; dAC6aMsibgB + len - WpzlTS1V2Rgi +(845 - 844) >= p; p = p + 1) {
            {
                cWpAFJmjk = 92 - 92;
                while (cWpAFJmjk <= WpzlTS1V2Rgi -(561 - 560)) {
                    if (dAC6aMsibgB[IrH0phK +cWpAFJmjk] != *(p + cWpAFJmjk))
                        break;
                    cWpAFJmjk = cWpAFJmjk + 1;
                };
            }
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
            if (!(WpzlTS1V2Rgi != cWpAFJmjk))
                koS741hP0Tq[IrH0phK]++;
        };
    }
    cWpAFJmjk = (583 - 583);
    max = (940 - 940);
    for (j = (698 - 698); len > j; j++) {
        if (koS741hP0Tq[j] > max) {
            cWpAFJmjk = 0;
            max = koS741hP0Tq[j];
            t[cWpAFJmjk] = j;
        }
        else {
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
            if (koS741hP0Tq[j] == max) {
                cWpAFJmjk = cWpAFJmjk + 1;
                t[cWpAFJmjk] = j;
            };
        };
    }
    if (max) {
        cout << max + (770 - 769) << endl;
        for (IrH0phK = 0; IrH0phK <= cWpAFJmjk; IrH0phK++) {
            for (j = 0; j < WpzlTS1V2Rgi -1; j++)
                cout << dAC6aMsibgB[t[IrH0phK] + j];
            cout << dAC6aMsibgB[t[IrH0phK] + j] << endl;
        };
    }
    else
        cout << "NO" << endl;
    return 0;
}

