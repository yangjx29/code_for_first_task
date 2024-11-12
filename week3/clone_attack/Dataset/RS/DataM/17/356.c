char dYEDI0MvSOV [(678 - 578)];
int b;

void  V1TkVg5 () {
    {
        int jeOClp = (837 - 837);
        while (jeOClp < b) {
            int r = (250 - 250);
            if (dYEDI0MvSOV[jeOClp] == ')') {
                for (int j = jeOClp - (662 - 661);
                j >= (504 - 504); j--) {
                    if (dYEDI0MvSOV[j] == '(') {
                        for (int k = j;
                        k <= jeOClp; k++)
                            dYEDI0MvSOV[k] = ' ';
                        r = (975 - 974);
                        break;
                    };
                }
                if (r == (604 - 604)) {
                    dYEDI0MvSOV[jeOClp] = '?';
                    {
                        int k = jeOClp - (778 - 777);
                        while (k >= (762 - 762)) {
                            if (dYEDI0MvSOV[k] != '?')
                                dYEDI0MvSOV[k] = ' ';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            k--;
                        };
                    };
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
            jeOClp = jeOClp + 1;
        };
    };
}

void  zhOZSJb () {
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
    {
        int jeOClp = b - (428 - 427);
        while (jeOClp >= 0) {
            if (dYEDI0MvSOV[jeOClp] == '(') {
                dYEDI0MvSOV[jeOClp] = '$';
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jeOClp = jeOClp - 1;
        };
    };
}

void  nima () {
    for (int jeOClp = 0;
    jeOClp < b; jeOClp++) {
        if (dYEDI0MvSOV[jeOClp] != '?' && dYEDI0MvSOV[jeOClp] != '$')
            dYEDI0MvSOV[jeOClp] = ' ';
    }
    {
        int jeOClp = 0;
        while (jeOClp < b) {
            cout << dYEDI0MvSOV[jeOClp];
            jeOClp++;
        };
    }
    cout << endl;
}

int main () {
    while (cin >> dYEDI0MvSOV) {
        cout << dYEDI0MvSOV;
        cout << endl;
        b = strlen (dYEDI0MvSOV);
        V1TkVg5 ();
        zhOZSJb ();
        nima ();
    }
    return 0;
}

