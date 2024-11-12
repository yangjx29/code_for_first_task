void  main () {
    char WwEtOu7vCd [3] [(724 - 468)], KDZCe8GY [512];
    int tWPlxfhQM9, AM8ziHmR0S, Rih7ZFNdRS2, FeI7hR0K8fM, j;
    scanf ("%s %s %s", WwEtOu7vCd[(95 - 95)], WwEtOu7vCd[(477 - 476)], WwEtOu7vCd[(542 - 540)]);
    tWPlxfhQM9 = strlen (WwEtOu7vCd[(727 - 727)]);
    AM8ziHmR0S = strlen (WwEtOu7vCd[(151 - 150)]);
    Rih7ZFNdRS2 = strlen (WwEtOu7vCd[2]);
    {
        j = (231 - 231);
        while (j < tWPlxfhQM9 - AM8ziHmR0S +(941 - 940)) {
            {
                FeI7hR0K8fM = (485 - 485);
                while (AM8ziHmR0S > FeI7hR0K8fM) {
                    if (WwEtOu7vCd[1][FeI7hR0K8fM] != WwEtOu7vCd[(768 - 768)][FeI7hR0K8fM +j])
                        break;
                    FeI7hR0K8fM++;
                }
            }
            if (!(AM8ziHmR0S != FeI7hR0K8fM)) {
                break;
            }
            j++;
        }
    }
    if (tWPlxfhQM9 - AM8ziHmR0S +1 > j) {
        {
            FeI7hR0K8fM = (263 - 263);
            while (j > FeI7hR0K8fM) {
                KDZCe8GY[FeI7hR0K8fM] = WwEtOu7vCd[(549 - 549)][FeI7hR0K8fM];
                FeI7hR0K8fM++;
            }
        }
        {
            FeI7hR0K8fM = j;
            for (; j + Rih7ZFNdRS2 > FeI7hR0K8fM;) {
                KDZCe8GY[FeI7hR0K8fM] = WwEtOu7vCd[2][FeI7hR0K8fM -j];
                FeI7hR0K8fM++;
            }
        }
        {
            FeI7hR0K8fM = j + Rih7ZFNdRS2;
            while (WwEtOu7vCd[(483 - 483)][FeI7hR0K8fM -Rih7ZFNdRS2+AM8ziHmR0S] != '\0') {
                KDZCe8GY[FeI7hR0K8fM] = WwEtOu7vCd[0][FeI7hR0K8fM -Rih7ZFNdRS2+AM8ziHmR0S];
                FeI7hR0K8fM++;
            }
        }
        KDZCe8GY[FeI7hR0K8fM] = '\0';
        printf ("%s", KDZCe8GY);
    }
    else
        printf ("%s", WwEtOu7vCd[0]);
}

