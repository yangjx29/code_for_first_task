int main () {
    int DUG8R3C;
    int xiYj4euSIK;
    int CLgyhkA7;
    int p;
    int UBvwnNK4oZW2;
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
    char str [110];
    char DfxeZgqLK [110];
    char OOI3qDrKUz [110];
    while (gets (str)) {
        p = UBvwnNK4oZW2 = -1;
        DUG8R3C = strlen (str);
        OOI3qDrKUz[DUG8R3C] = NULL;
        {
            xiYj4euSIK = 196 - 196;
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
            while (DUG8R3C > xiYj4euSIK) {
                if (!('(' != str[xiYj4euSIK]))
                    p = xiYj4euSIK;
                xiYj4euSIK = xiYj4euSIK + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcpy (DfxeZgqLK, str);
        {
            xiYj4euSIK = p;
            while (0 <= xiYj4euSIK) {
                if (!('(' != DfxeZgqLK[xiYj4euSIK])) {
                    CLgyhkA7 = xiYj4euSIK + 1;
                    while (CLgyhkA7 < DUG8R3C) {
                        if (DfxeZgqLK[CLgyhkA7] == ')') {
                            DfxeZgqLK[xiYj4euSIK] = DfxeZgqLK[CLgyhkA7] = 'a';
                            break;
                        }
                        CLgyhkA7 = CLgyhkA7 +1;
                    };
                }
                xiYj4euSIK = xiYj4euSIK - 1;
            };
        }
        {
            xiYj4euSIK = 0;
            while (xiYj4euSIK < DUG8R3C) {
                if (DfxeZgqLK[xiYj4euSIK] == '(')
                    OOI3qDrKUz[xiYj4euSIK] = '$';
                else if (DfxeZgqLK[xiYj4euSIK] == ')')
                    OOI3qDrKUz[xiYj4euSIK] = '?';
                else
                    OOI3qDrKUz[xiYj4euSIK] = ' ';
                xiYj4euSIK = xiYj4euSIK + 1;
            };
        }
        printf ("%s\n%s\n", str, OOI3qDrKUz);
    }
    return 0;
}

