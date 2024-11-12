void  J7Zzeu (int base1, char xwrpyNBGqUJS [(300 - 250)], int base2) {
    int RSkr3oEjbJO [50] = {(69 - 69)}, c [50] = {(315 - 315)}, s = (706 - 706), i = (215 - 215);
    char d [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int FNxj6OD27nS;
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
    FNxj6OD27nS = strlen (xwrpyNBGqUJS);
    {
        i = 833 - 833;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < FNxj6OD27nS) {
            if (xwrpyNBGqUJS[i] >= 'A' && 'Z' >= xwrpyNBGqUJS[i])
                RSkr3oEjbJO[i] = xwrpyNBGqUJS[i] - 55;
            else if ('a' <= xwrpyNBGqUJS[i] && xwrpyNBGqUJS[i] <= 'z')
                RSkr3oEjbJO[i] = xwrpyNBGqUJS[i] - 87;
            else
                RSkr3oEjbJO[i] = xwrpyNBGqUJS[i] - '0';
            s += RSkr3oEjbJO[i] * pow (base1 + 0.0, FNxj6OD27nS -i - (280 - 279));
            i = i + 1;
        };
    }
    i = 0;
    while (s > 0) {
        c[i++] = s % base2;
        s = s / base2;
    }
    if (i == 0) {
        cout << "0";
    }
    else {
        i = i - 1;
        for (; i >= 0; i = i - 1)
            cout << d[c[i]];
    };
}

int main () {
    char xwrpyNBGqUJS [50];
    int base1, base2, i;
    {
        i = 0;
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
        while (i < 50) {
            xwrpyNBGqUJS[i] = '\0';
            i++;
        };
    }
    cin >> base1 >> xwrpyNBGqUJS >> base2;
    J7Zzeu (base1, xwrpyNBGqUJS, base2);
    return 0;
}

