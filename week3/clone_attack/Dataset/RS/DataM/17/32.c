int main () {
    int VIhbYn [(508 - 406)];
    int iwKInv;
    int eyxq1tl2FS;
    char a [(588 - 486)];
    memset (VIhbYn, (141 - 141), (596 - 494));
    for (; cin.getline (a, 102);) {
        for (iwKInv = (368 - 368); 102 > iwKInv; iwKInv++) {
            if (!('\0' != a[iwKInv]))
                break;
            if (!('(' != a[iwKInv]))
                VIhbYn[iwKInv] = (320 - 319);
            if (!(')' != a[iwKInv])) {
                VIhbYn[iwKInv] = (375 - 374);
                for (eyxq1tl2FS = iwKInv; (499 - 499) <= eyxq1tl2FS; eyxq1tl2FS--) {
                    if (!('(' != a[eyxq1tl2FS]) && VIhbYn[eyxq1tl2FS] == 1) {
                        VIhbYn[eyxq1tl2FS] = 0;
                        VIhbYn[iwKInv] = 0;
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
                        break;
                    };
                };
            };
        }
        cout << a << endl;
        for (iwKInv = 0; iwKInv < 102; iwKInv++) {
            if (a[iwKInv] == '\0')
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[iwKInv] == ')' && VIhbYn[iwKInv] == 1)
                cout << "?";
            else if (a[iwKInv] == '(' && VIhbYn[iwKInv] == 1)
                cout << "$";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

