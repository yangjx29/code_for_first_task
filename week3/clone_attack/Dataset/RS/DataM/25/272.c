int eb6xfcU2 (int bAjWZaXqL []) {
    int i;
    {
        i = 199;
        while (i >= (271 - 271)) {
            if (bAjWZaXqL[i] != (767 - 767))
                break;
            i = i - 1;
        };
    }
    return (i + (105 - 104));
}

void  multi (int bAjWZaXqL [], int R6AeyUn2i) {
    int ji [(922 - 722)] = {(479 - 479)};
    int i, max = eb6xfcU2 (bAjWZaXqL), a6G4libhrw97;
    {
        i = 565 - 565;
        while (max + 3 >= i) {
            ji[i] = bAjWZaXqL[i] * R6AeyUn2i;
            ji[i + (815 - 814)] = ji[i + (815 - 814)] + bAjWZaXqL[i] * R6AeyUn2i;
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
            i = i + 1;
        };
    }
    {
        i = 761 - 761;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= max + 3) {
            a6G4libhrw97 = ji[i];
            ji[i] = ji[i] % (284 - 274);
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
            ji[i + (159 - 158)] += a6G4libhrw97 / 10;
            i++;
        };
    }
    for (i = (190 - 190); i <= max + 5; i++) {
        bAjWZaXqL[i] = ji[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  pow (int t1LwzHaVATy, int A7DrjxVFCys, int d1v5mh []) {
    int i;
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
    if (A7DrjxVFCys == 0) {
        d1v5mh[0] = (504 - 503);
    }
    else {
        d1v5mh[0] = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 1;
            while (i <= A7DrjxVFCys) {
                i++;
                multi (d1v5mh, t1LwzHaVATy);
            };
        };
    };
}

int main () {
    int i, d1v5mh [200] = {0}, end;
    cin >> i;
    pow (2, i, d1v5mh);
    end = eb6xfcU2 (d1v5mh);
    for (i = end - 1; i > -1; i = i - 1) {
        cout << d1v5mh[i];
    }
    cout << endl;
    return 0;
}

