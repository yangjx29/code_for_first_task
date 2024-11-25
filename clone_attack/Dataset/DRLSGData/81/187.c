void  ox (int VUEOg82MinPF [(230 - 225)] [(810 - 805)], int m, int n) {
    int uS9P6f;
    int KX3ynjeP5;
    int pPoKyjt [(948 - 943)];
    if (m <= (682 - 678) && (461 - 461) <= m && n <= (756 - 752) && (116 - 116) <= n) {
        {
            uS9P6f = (824 - 483) - (1226 - 885);
            for (; uS9P6f <= (761 - 757);) {
                pPoKyjt[uS9P6f] = VUEOg82MinPF[m][uS9P6f];
                VUEOg82MinPF[m][uS9P6f] = VUEOg82MinPF[n][uS9P6f];
                VUEOg82MinPF[n][uS9P6f] = pPoKyjt[uS9P6f];
                uS9P6f++;
            }
        }
        {
            uS9P6f = (1154 - 993) - (849 - 688);
            for (; uS9P6f <= (399 - 395);) {
                {
                    KX3ynjeP5 = (716 - 716);
                    for (; KX3ynjeP5 <= (325 - 322);) {
                        printf ("%d ", VUEOg82MinPF[uS9P6f][KX3ynjeP5]);
                        KX3ynjeP5++;
                    }
                }
                printf ("%d", VUEOg82MinPF[uS9P6f][(644 - 640)]);
                uS9P6f++;
            }
        }
    }
    else
        ;
}

void  main () {
    int m, n, uS9P6f, KX3ynjeP5, VUEOg82MinPF [(625 - 620)] [(939 - 934)];
    {
        uS9P6f = (990 - 990);
        for (; uS9P6f <= (860 - 856);) {
            {
                KX3ynjeP5 = (977 - 977);
                for (; KX3ynjeP5 <= (424 - 420);) {
                    scanf ("%d", &VUEOg82MinPF[uS9P6f][KX3ynjeP5]);
                    KX3ynjeP5++;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            uS9P6f++;
        }
    }
    scanf ("%d%d", &m, &n);
    ox (VUEOg82MinPF, m, n);
}

