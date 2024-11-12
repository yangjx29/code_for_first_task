int main () {
    char mDWgy5l [100] [100];
    char s [(659 - 559)];
    char a [100];
    char ylr6713z [100];
    gets (s);
    gets (a);
    gets (ylr6713z);
    int EbJ3AcU8KQBu;
    int j;
    int i;
    int y;
    int KN16f0FZm;
    int TKZlSGk;
    int p;
    int m;
    EbJ3AcU8KQBu = (755 - 754);
    j = 1;
    for (TKZlSGk = (995 - 995); (1014 - 915) >= TKZlSGk; TKZlSGk = TKZlSGk +1) {
        for (p = (776 - 776); p <= (647 - 548); p = p + 1) {
            mDWgy5l[TKZlSGk][p] = '\0';
        };
    }
    {
        i = 384 - 384;
        while (i <= (524 - 425)) {
            if (s[i] == ' ')
                break;
            else
                mDWgy5l[(717 - 717)][i] = s[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    do {
        if (!(' ' != s[EbJ3AcU8KQBu])) {
            KN16f0FZm = EbJ3AcU8KQBu;
            for (y = (655 - 655); (416 - 317) >= y; y = y + 1) {
                KN16f0FZm++;
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
                if (!(' ' == s[KN16f0FZm]) && s[KN16f0FZm] != '\0')
                    mDWgy5l[j][y] = s[KN16f0FZm];
                else
                    break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        }
        EbJ3AcU8KQBu = EbJ3AcU8KQBu +1;
    }
    while (EbJ3AcU8KQBu <= (607 - 508));
    {
        i = 113 - 113;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 99) {
            if (strcmp (mDWgy5l[i], a) == (172 - 172))
                strcpy (mDWgy5l[i], ylr6713z);
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
            i++;
        };
    }
    {
        m = 0;
        while (m <= 99) {
            if (mDWgy5l[m][0] == '\0')
                break;
            m++;
        };
    }
    {
        i = 0;
        while (i <= m - 1) {
            if (i == 0)
                printf ("%s", mDWgy5l[i]);
            else
                printf (" %s", mDWgy5l[i]);
            i++;
        };
    }
    return 0;
}

