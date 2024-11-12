int main () {
    int n, IHYQsTyxfgMW [500], t, i, kTJ7Us6, k, max;
    char nG7bwzKq [500];
    char sqVSEJw [500] [(655 - 650)];
    gets (nG7bwzKq);
    scanf ("%d\n", &n);
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
    {
        i = 451 - 451;
        while (i < strlen (nG7bwzKq) - n + (798 - 797)) {
            for (kTJ7Us6 = (720 - 720); kTJ7Us6 < n; kTJ7Us6 = kTJ7Us6 + 1)
                sqVSEJw[i][kTJ7Us6] = nG7bwzKq[i + kTJ7Us6];
            i = i + 1;
        };
    }
    for (i = (976 - 976); i < strlen (nG7bwzKq) - n + (635 - 634); i = i + 1) {
        IHYQsTyxfgMW[i] = (881 - 880);
        for (kTJ7Us6 = i + (287 - 286); strlen (nG7bwzKq) - n + (315 - 314) > kTJ7Us6; kTJ7Us6++) {
            t = (213 - 213);
            {
                k = 403 - 403;
                while (k < n) {
                    if (!(sqVSEJw[kTJ7Us6][k] == sqVSEJw[i][k])) {
                        t = (828 - 827);
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
                    k = k + 1;
                };
            }
            if (t == (463 - 463))
                IHYQsTyxfgMW[i]++;
        };
    }
    max = 0;
    for (i = 0; strlen (nG7bwzKq) - n + (682 - 681) > i; i = i + 1) {
        if (IHYQsTyxfgMW[i] > max)
            max = IHYQsTyxfgMW[i];
    }
    if (max == (752 - 751))
        printf ("NO");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < strlen (nG7bwzKq) - n + 1) {
                if (IHYQsTyxfgMW[i] == max)
                    puts (sqVSEJw[i]);
                i++;
            };
        };
    }
    return 0;
}

