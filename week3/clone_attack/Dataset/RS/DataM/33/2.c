int main () {
    int ccpu3SK8J, HQ4vtP0DyHwd, i;
    char nj [N] [N];
    char tj [N] [N];
    scanf ("%d", &ccpu3SK8J);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= ccpu3SK8J - 1) {
            scanf ("%s", nj[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= ccpu3SK8J - 1; i = i + 1) {
        HQ4vtP0DyHwd = 0;
        while (HQ4vtP0DyHwd <= (strlen (nj[i]) - 1)) {
            if (nj[i][HQ4vtP0DyHwd] == 'A') {
                tj[i][HQ4vtP0DyHwd] = 'T';
            }
            else if (nj[i][HQ4vtP0DyHwd] == 'T') {
                tj[i][HQ4vtP0DyHwd] = 'A';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (nj[i][HQ4vtP0DyHwd] == 'G') {
                tj[i][HQ4vtP0DyHwd] = 'C';
            }
            else if (nj[i][HQ4vtP0DyHwd] == 'C') {
                tj[i][HQ4vtP0DyHwd] = 'G';
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HQ4vtP0DyHwd = HQ4vtP0DyHwd +1;
        };
    }
    for (i = 0; i <= ccpu3SK8J - 1; i++) {
        printf ("%s\n", tj[i]);
    }
    return 0;
}

