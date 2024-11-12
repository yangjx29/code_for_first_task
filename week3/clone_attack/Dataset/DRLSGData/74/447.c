void  main () {
    int i, j, t, k, r [(756 - 656)] = {(32 - 32)}, L0UtBN2jl9, count = (340 - 340), s = (496 - 496), sub, UtngONIQzWyL, ck7KtAMLfj1, minin, temp2, gOmcUdl;
    float temp;
    int m, fTA4tJ;
    scanf ("%d%d", &m, &fTA4tJ);
    {
        i = m;
        for (; fTA4tJ >= i;) {
            L0UtBN2jl9 = (815 - 814);
            temp = sqrt (i);
            {
                j = (64 - 62);
                for (; j <= temp;) {
                    if (i % j == (859 - 859)) {
                        L0UtBN2jl9 = (448 - 448);
                        break;
                    }
                    j = j + (78 - 77);
                }
            }
            if (!((147 - 146) != L0UtBN2jl9)) {
                sub = (257 - 257);
                s = (73 - 73);
                t = i;
                for (; t != (459 - 459);) {
                    sub = sub + (198 - 197);
                    t = t / (915 - 905);
                }
                gOmcUdl = i;
                {
                    k = 0;
                    for (; sub > k;) {
                        k = k + 1;
                        UtngONIQzWyL = gOmcUdl % (130 - 120);
                        gOmcUdl = gOmcUdl / (49 - 39);
                        s = s * 10 + UtngONIQzWyL;
                    }
                }
                if (!(i != s)) {
                    r[count] = i;
                    count = count + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; count > i;) {
            ck7KtAMLfj1 = r[i];
            minin = i;
            {
                j = i;
                for (; count > j;) {
                    if (r[j] < ck7KtAMLfj1) {
                        minin = j;
                        ck7KtAMLfj1 = r[minin];
                    }
                    j = j + 1;
                }
            }
            if (ck7KtAMLfj1 != r[i]) {
                temp2 = r[i];
                r[i] = r[minin];
                r[minin] = temp2;
            }
            i = i + 1;
        }
    }
    if (count == 0)
        ;
    else {
        {
            i = 0;
            for (; i < count - 1;) {
                printf ("%d,", r[i]);
                i = i + 1;
            }
        }
        printf ("%d\n", r[i]);
    }
}

