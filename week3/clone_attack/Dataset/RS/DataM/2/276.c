void  main () {
    int best;
    int F5o3mJxed;
    int pC4o983;
    int i;
    int a [26] = {0};
    int IN9dtAR [100];
    int l;
    int ezbLtH7;
    int k;
    best = 0;
    F5o3mJxed = 0;
    char cMqWXR [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}, WvS8LM4pK [100] [26];
    scanf ("%d", &pC4o983);
    {
        i = 0;
        while (pC4o983 > i) {
            scanf ("%d %s", &IN9dtAR[i], &WvS8LM4pK[i]);
            i++;
        };
    }
    for (i = 0; pC4o983 > i; i = i + 1) {
        l = strlen (WvS8LM4pK[i]);
        for (ezbLtH7 = 0; l > ezbLtH7; ezbLtH7++) {
            for (k = 0; k < 26; k++) {
                if (WvS8LM4pK[i][ezbLtH7] == cMqWXR[k]) {
                    a[k]++;
                    break;
                };
            };
        };
    }
    for (i = 0; 26 > i; i++) {
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
        if (a[i] > F5o3mJxed) {
            best = i;
            F5o3mJxed = a[i];
        };
    }
    printf ("%c\n", cMqWXR[best]);
    printf ("%d\n", F5o3mJxed);
    for (i = 0; i < pC4o983; i++) {
        l = strlen (WvS8LM4pK[i]);
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
            ezbLtH7 = 0;
            while (l > ezbLtH7) {
                if (WvS8LM4pK[i][ezbLtH7] == cMqWXR[best]) {
                    printf ("%d\n", IN9dtAR[i]);
                    break;
                }
                ezbLtH7++;
            };
        };
    };
}

