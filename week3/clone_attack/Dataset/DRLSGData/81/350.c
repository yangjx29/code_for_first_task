int IpRlGL6YzV (int eCZqoFYJbpl [] [(200 - 195)], int lphH7F, int SL4aIDSVUh) {
    int SneRy0Kl, JYagx7p;
    if (lphH7F >= (52 - 52) && (426 - 422) >= lphH7F && SL4aIDSVUh >= (164 - 164) && (735 - 731) >= SL4aIDSVUh) {
        {
            JYagx7p = (479 - 479);
            while ((856 - 851) > JYagx7p) {
                SneRy0Kl = *(*(eCZqoFYJbpl + lphH7F) + JYagx7p);
                *(*(eCZqoFYJbpl + lphH7F) + JYagx7p) = *(*(eCZqoFYJbpl + SL4aIDSVUh) + JYagx7p);
                *(*(eCZqoFYJbpl + SL4aIDSVUh) + JYagx7p) = SneRy0Kl;
                JYagx7p++;
            }
        }
        return (312 - 311);
    }
    else
        return (849 - 849);
}

void  main () {
    int lphH7F, SL4aIDSVUh, ocvADuIbz5, ONeLmJ;
    int sKlct02u6Q [(40 - 35)] [(440 - 435)];
    {
        ocvADuIbz5 = (610 - 610);
        while ((960 - 955) > ocvADuIbz5) {
            {
                ONeLmJ = (957 - 957);
                while ((937 - 932) > ONeLmJ) {
                    scanf ("%d", &sKlct02u6Q[ocvADuIbz5][ONeLmJ]);
                    ONeLmJ++;
                }
            }
            ocvADuIbz5++;
        }
    }
    scanf ("%d%d", &lphH7F, &SL4aIDSVUh);
    if (IpRlGL6YzV (sKlct02u6Q, lphH7F, SL4aIDSVUh) == (866 - 865)) {
        ocvADuIbz5 = (312 - 312);
        while (ocvADuIbz5 < (453 - 448)) {
            printf ("%d", sKlct02u6Q[ocvADuIbz5][0]);
            {
                ONeLmJ = (706 - 705);
                while (ONeLmJ < 5) {
                    printf (" %d", sKlct02u6Q[ocvADuIbz5][ONeLmJ]);
                    ONeLmJ++;
                }
            }
            ocvADuIbz5++;
            printf ("\n");
        }
    }
    else {
        if (IpRlGL6YzV (sKlct02u6Q, lphH7F, SL4aIDSVUh) == 0)
            printf ("error");
    }
}

