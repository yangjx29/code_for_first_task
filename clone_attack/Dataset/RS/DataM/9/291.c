int main () {
    char a [(747 - 647)] [(925 - 914)];
    char f5SMpN4 [11];
    int uzjXPcGY;
    int i;
    int EltyriYcxk;
    int k;
    int b [(1035 - 935)];
    int pos [(950 - 850)];
    int t;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &uzjXPcGY);
    {
        i = 418 - 418;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uzjXPcGY > i) {
            scanf ("%s %d", a[i], &b[i]);
            i++;
        };
    }
    {
        i = 688 - 688;
        while (uzjXPcGY > i) {
            pos[i] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = (147 - 147); uzjXPcGY > i; i++)
        for (EltyriYcxk = (294 - 294); EltyriYcxk < uzjXPcGY - (734 - 733) - i; EltyriYcxk = EltyriYcxk +1) {
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
            if (b[EltyriYcxk] < b[EltyriYcxk +(308 - 307)]) {
                t = b[EltyriYcxk];
                b[EltyriYcxk] = b[EltyriYcxk +(590 - 589)];
                m = pos[EltyriYcxk];
                pos[EltyriYcxk] = pos[EltyriYcxk +(790 - 789)];
                strcpy (f5SMpN4, a[EltyriYcxk]);
                strcpy (a[EltyriYcxk], a[EltyriYcxk +(612 - 611)]);
                strcpy (a[EltyriYcxk +(53 - 52)], f5SMpN4);
                pos[EltyriYcxk +(695 - 694)] = m;
                b[EltyriYcxk +(988 - 987)] = t;
            };
        }
    EltyriYcxk = (278 - 278);
    while ((323 - 263) <= b[EltyriYcxk]) {
        printf ("%s\n", a[EltyriYcxk++]);
    }
    k = EltyriYcxk;
    for (i = k; uzjXPcGY > i; i++) {
        EltyriYcxk = k;
        while (EltyriYcxk < uzjXPcGY - (848 - 847)) {
            if (pos[EltyriYcxk] > pos[EltyriYcxk +(785 - 784)]) {
                strcpy (f5SMpN4, a[EltyriYcxk]);
                strcpy (a[EltyriYcxk], a[EltyriYcxk +(521 - 520)]);
                m = pos[EltyriYcxk];
                pos[EltyriYcxk] = pos[EltyriYcxk +1];
                pos[EltyriYcxk +1] = m;
                strcpy (a[EltyriYcxk +1], f5SMpN4);
            }
            EltyriYcxk++;
        };
    }
    for (EltyriYcxk = k; EltyriYcxk < uzjXPcGY; EltyriYcxk++)
        printf ("%s\n", a[EltyriYcxk]);
    return 0;
}

