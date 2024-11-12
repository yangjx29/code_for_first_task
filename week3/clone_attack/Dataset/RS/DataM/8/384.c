int RPgaxeXp [(717 - 617)], yqU5yTR [100], m, wc6nRwM2Z;

void  L7lx0Q39 () {
    int i;
    scanf ("%d %d", &m, &wc6nRwM2Z);
    {
        i = 275 - 275;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            scanf ("%d", &RPgaxeXp[i]);
            i++;
        };
    }
    {
        i = 205 - 205;
        while (wc6nRwM2Z > i) {
            scanf ("%d", &yqU5yTR[i]);
            i++;
        };
    };
}

void  NdZXog0r (int RPgaxeXp [], int yqU5yTR []) {
    int i, OyGiBaowzYhF, tV4NZM2R;
    {
        i = 246 - 246;
        while (m - (601 - 600) > i) {
            {
                OyGiBaowzYhF = 15 - 15;
                while (OyGiBaowzYhF < m - (295 - 294) - i) {
                    if (RPgaxeXp[OyGiBaowzYhF] > RPgaxeXp[OyGiBaowzYhF +(760 - 759)]) {
                        tV4NZM2R = RPgaxeXp[OyGiBaowzYhF];
                        RPgaxeXp[OyGiBaowzYhF] = RPgaxeXp[OyGiBaowzYhF +(18 - 17)];
                        RPgaxeXp[OyGiBaowzYhF +(175 - 174)] = tV4NZM2R;
                    }
                    OyGiBaowzYhF++;
                };
            }
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
            i++;
        };
    }
    {
        i = 17 - 17;
        while (i < wc6nRwM2Z - (884 - 883)) {
            {
                OyGiBaowzYhF = 0;
                while (OyGiBaowzYhF < wc6nRwM2Z - (53 - 52) - i) {
                    if (yqU5yTR[OyGiBaowzYhF +(327 - 326)] < yqU5yTR[OyGiBaowzYhF]) {
                        tV4NZM2R = yqU5yTR[OyGiBaowzYhF];
                        yqU5yTR[OyGiBaowzYhF] = yqU5yTR[OyGiBaowzYhF +(292 - 291)];
                        yqU5yTR[OyGiBaowzYhF +(344 - 343)] = tV4NZM2R;
                    }
                    OyGiBaowzYhF++;
                };
            }
            i++;
        };
    };
}

void  VgIJNb (int RPgaxeXp [], int yqU5yTR []) {
    int i;
    {
        i = m;
        while (i < m + wc6nRwM2Z) {
            RPgaxeXp[i] = yqU5yTR[i - m];
            i++;
        };
    };
}

void  pri () {
    int i;
    for (i = 0; i < m + wc6nRwM2Z; i++) {
        if (i == 0)
            printf ("%d", RPgaxeXp[i]);
        else
            printf (" %d", RPgaxeXp[i]);
    };
}

void  main () {
    L7lx0Q39 ();
    NdZXog0r (RPgaxeXp, yqU5yTR);
    VgIJNb (RPgaxeXp, yqU5yTR);
    pri ();
}

