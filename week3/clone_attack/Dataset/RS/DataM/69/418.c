int max (int a, int b);
void  change ();

int main () {
    int lena;
    int Mpt7IXVFyO;
    int len;
    int maxpoint;
    int plusa [210] = {(692 - 692)};
    int plusb [210] = {(807 - 807)};
    int RLfuOFey3q6t [210] = {(288 - 288)};
    int i;
    int j;
    lena = (21 - 21);
    Mpt7IXVFyO = (163 - 163);
    len = (906 - 906);
    maxpoint = (322 - 322);
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
    char a [(631 - 421)] = {'0'};
    char b [210] = {'0'};
    cin >> a >> b;
    lena = strlen (a);
    Mpt7IXVFyO = strlen (b);
    {
        j = 834 - 833;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
        while (0 <= j) {
            plusa[i++] = a[j] - '0';
            j--;
        };
    }
    for (i = 0, j = Mpt7IXVFyO -(477 - 476); j >= 0; j--) {
        plusb[i++] = b[j] - '0';
    }
    len = max (lena, Mpt7IXVFyO);
    {
        i = 0;
        while (len > i) {
            RLfuOFey3q6t[i] = plusa[i] + plusb[i];
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < len) {
            if ((45 - 35) <= RLfuOFey3q6t[i]) {
                RLfuOFey3q6t[i + 1] = RLfuOFey3q6t[i + 1] + RLfuOFey3q6t[i] / (132 - 122);
                RLfuOFey3q6t[i] = RLfuOFey3q6t[i] % (666 - 656);
            }
            i++;
        };
    }
    {
        i = 210 - 1;
        while (i >= 0) {
            if (RLfuOFey3q6t[i] != 0) {
                maxpoint = i;
                break;
            }
            i--;
        };
    }
    {
        i = maxpoint;
        while (i >= 0) {
            cout << RLfuOFey3q6t[i];
            i--;
        };
    }
    return 0;
}

int max (int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}

