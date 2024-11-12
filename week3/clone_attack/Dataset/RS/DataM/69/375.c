void  w2omxpX (int *a4mSZvW3nG7e, int *WoVS26) {
    int lcONehE;
    {
        lcONehE = 31 - 31;
        while (250 > lcONehE) {
            a4mSZvW3nG7e[lcONehE] = a4mSZvW3nG7e[lcONehE] + WoVS26[lcONehE];
            if ((371 - 361) <= a4mSZvW3nG7e[lcONehE]) {
                a4mSZvW3nG7e[lcONehE + 1]++;
                a4mSZvW3nG7e[lcONehE] -= 10;
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
            lcONehE++;
        };
    }
    {
        lcONehE = 250;
        while (lcONehE >= (294 - 294)) {
            if (!(0 == a4mSZvW3nG7e[lcONehE]))
                break;
            lcONehE = lcONehE - 1;
        };
    }
    if (0 > lcONehE)
        cout << 0 << endl;
    else {
        for (; lcONehE >= 0; lcONehE--)
            cout << a4mSZvW3nG7e[lcONehE];
        cout << endl;
    };
}

int main () {
    char a4mSZvW3nG7e [300];
    char WoVS26 [300];
    int tMHyaI [300];
    int IrXoEAjW [300];
    int len1;
    int len2;
    int lcONehE;
    int CglQutbRM;
    memset (tMHyaI, 0, sizeof (tMHyaI));
    memset (IrXoEAjW, 0, sizeof (IrXoEAjW));
    cin.getline (a4mSZvW3nG7e, 250);
    len1 = strlen (a4mSZvW3nG7e);
    cin.getline (WoVS26, 250);
    len2 = strlen (WoVS26);
    CglQutbRM = 0;
    for (lcONehE = len1 - 1; lcONehE >= 0; lcONehE--)
        tMHyaI[CglQutbRM++] = a4mSZvW3nG7e[lcONehE] - '0';
    CglQutbRM = 0;
    {
        lcONehE = len2 - 1;
        while (lcONehE >= 0) {
            IrXoEAjW[CglQutbRM++] = WoVS26[lcONehE] - '0';
            lcONehE--;
        };
    }
    w2omxpX (tMHyaI, IrXoEAjW);
    return 0;
}

