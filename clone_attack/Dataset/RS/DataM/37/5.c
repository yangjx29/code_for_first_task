main () {
    char o2Iog0Z [(100858 - 858)] = {'\0'};
    int g9wRW6VUyl;
    int UxfuycFEAU;
    int Fa7V13b;
    int j;
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
    int k;
    int MJOTHS [(100399 - 399)] = {(342 - 342)};
    scanf ("%d", &UxfuycFEAU);
    for (Fa7V13b = 0; UxfuycFEAU > Fa7V13b; Fa7V13b++) {
        int o69jKPs = 0;
        for (int HlMDkxXQ = 0;
        100000 > HlMDkxXQ; HlMDkxXQ = HlMDkxXQ +1)
            o2Iog0Z[HlMDkxXQ] = '\0';
        scanf ("%s", o2Iog0Z);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100000 > o69jKPs) {
            if (!('\0' != o2Iog0Z[o69jKPs + 1])) {
                g9wRW6VUyl = o69jKPs;
                break;
            }
            o69jKPs = o69jKPs + 1;
        }
        for (int HlMDkxXQ = 0;
        100000 > HlMDkxXQ; HlMDkxXQ++)
            MJOTHS[HlMDkxXQ] = 0;
        for (j = 0; j <= g9wRW6VUyl; j++) {
            k = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (g9wRW6VUyl >= k) {
                if (!(o2Iog0Z[k] != o2Iog0Z[j]))
                    MJOTHS[j]++;
                k = k + 1;
            };
        }
        for (j = 0; j <= g9wRW6VUyl; j++) {
            if (MJOTHS[j] == 1) {
                printf ("%c\n", o2Iog0Z[j]);
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
                break;
            }
            if (j == g9wRW6VUyl && MJOTHS[g9wRW6VUyl] != 1)
                printf ("no\n");
        };
    };
}

