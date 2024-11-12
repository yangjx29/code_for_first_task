int max (int x, int y) {
    if (y < x)
        return (x);
    else
        return (y);
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
}

int min (int x, int y) {
    if (x < y)
        return (x);
    else
        return (y);
}

void  main () {
    int aiCaRhkdLUH, xfp3HbBxXC, vcNz0pUR, k = (728 - 728), MAX, lvMGc1;
    char zV5kzaPO [(1714 - 714)];
    int a [50];
    int SlMfqd5jQsFx [50];
    gets (zV5kzaPO);
    vcNz0pUR = strlen (zV5kzaPO);
    {
        aiCaRhkdLUH = 354 - 354;
        while (aiCaRhkdLUH < vcNz0pUR) {
            if (!(' ' != zV5kzaPO[aiCaRhkdLUH])) {
                a[k] = aiCaRhkdLUH;
                k++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            aiCaRhkdLUH = aiCaRhkdLUH + 1;
        };
    }
    SlMfqd5jQsFx[0] = a[0];
    a[k] = vcNz0pUR;
    for (aiCaRhkdLUH = 1; k >= aiCaRhkdLUH; aiCaRhkdLUH++)
        SlMfqd5jQsFx[aiCaRhkdLUH] = a[aiCaRhkdLUH] - a[aiCaRhkdLUH - 1] - 1;
    MAX = lvMGc1 = SlMfqd5jQsFx[0];
    {
        aiCaRhkdLUH = 0;
        while (k >= aiCaRhkdLUH) {
            MAX = max (MAX, SlMfqd5jQsFx[aiCaRhkdLUH]);
            lvMGc1 = min (lvMGc1, SlMfqd5jQsFx[aiCaRhkdLUH]);
            aiCaRhkdLUH++;
        };
    }
    {
        aiCaRhkdLUH = 0;
        while (k >= aiCaRhkdLUH) {
            if (SlMfqd5jQsFx[aiCaRhkdLUH] == MAX) {
                {
                    xfp3HbBxXC = aiCaRhkdLUH;
                    while (xfp3HbBxXC < a[aiCaRhkdLUH]) {
                        printf ("%c", zV5kzaPO[xfp3HbBxXC]);
                        xfp3HbBxXC++;
                    };
                }
                break;
            }
            aiCaRhkdLUH++;
        };
    }
    {
        aiCaRhkdLUH = 0;
        while (aiCaRhkdLUH <= k) {
            if (SlMfqd5jQsFx[aiCaRhkdLUH] == lvMGc1) {
                {
                    xfp3HbBxXC = aiCaRhkdLUH;
                    while (xfp3HbBxXC < a[aiCaRhkdLUH]) {
                        printf ("%c", zV5kzaPO[xfp3HbBxXC]);
                        xfp3HbBxXC++;
                    };
                }
                break;
            }
            aiCaRhkdLUH++;
        };
    };
}

