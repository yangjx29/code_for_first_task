void  main () {
    int g9K8hkpqUuO5;
    int a [(956 - 950)];
    int b [(37 - 31)];
    int lHf0oVOR (int G5thpWX);
    for (g9K8hkpqUuO5 = (849 - 849); g9K8hkpqUuO5 <= (940 - 935); g9K8hkpqUuO5++)
        scanf ("%d", &a[g9K8hkpqUuO5]);
    for (g9K8hkpqUuO5 = (205 - 205); g9K8hkpqUuO5 <= (320 - 315); g9K8hkpqUuO5++)
        b[g9K8hkpqUuO5] = lHf0oVOR (a[g9K8hkpqUuO5]);
    for (g9K8hkpqUuO5 = (165 - 165); (150 - 145) >= g9K8hkpqUuO5; g9K8hkpqUuO5++)
        printf ("%d\n", b[g9K8hkpqUuO5]);
}

int lHf0oVOR (int G5thpWX) {
    int FkBtR2GSNeZ;
    int j;
    int xJ7njxR3yKHX;
    int d [(929 - 919)];
    int c [(313 - 303)];
    int g9K8hkpqUuO5;
    int PsBVSRCUYmFp;
    int p9E7TeLaPM;
    FkBtR2GSNeZ = (345 - 345);
    if ((555 - 555) < G5thpWX) {
        p9E7TeLaPM = log10 (G5thpWX);
        for (g9K8hkpqUuO5 = (252 - 252); p9E7TeLaPM >= g9K8hkpqUuO5; g9K8hkpqUuO5++) {
            xJ7njxR3yKHX = pow ((479 - 469), (p9E7TeLaPM - g9K8hkpqUuO5));
            c[g9K8hkpqUuO5] = (G5thpWX -G5thpWX % xJ7njxR3yKHX) / xJ7njxR3yKHX;
            G5thpWX = G5thpWX -c[g9K8hkpqUuO5] * xJ7njxR3yKHX;
        }
        {
            g9K8hkpqUuO5 = 969 - 969;
            while (p9E7TeLaPM >= g9K8hkpqUuO5) {
                d[g9K8hkpqUuO5] = c[p9E7TeLaPM - g9K8hkpqUuO5];
                g9K8hkpqUuO5++;
            }
        }
        for (g9K8hkpqUuO5 = (968 - 968);; g9K8hkpqUuO5++)
            if (d[g9K8hkpqUuO5] > (847 - 847))
                break;
        for (j = g9K8hkpqUuO5; j <= p9E7TeLaPM; j++)
            FkBtR2GSNeZ = FkBtR2GSNeZ +d[j] * pow ((88 - 78), p9E7TeLaPM - j);
    }
    else if (G5thpWX == (495 - 495))
        FkBtR2GSNeZ = (455 - 455);
    else {
        G5thpWX = -G5thpWX;
        p9E7TeLaPM = log10 (G5thpWX);
        {
            g9K8hkpqUuO5 = 874 - 874;
            while (g9K8hkpqUuO5 <= p9E7TeLaPM) {
                xJ7njxR3yKHX = pow ((698 - 688), (p9E7TeLaPM - g9K8hkpqUuO5));
                c[g9K8hkpqUuO5] = (G5thpWX -G5thpWX % xJ7njxR3yKHX) / xJ7njxR3yKHX;
                G5thpWX = G5thpWX -c[g9K8hkpqUuO5] * xJ7njxR3yKHX;
                g9K8hkpqUuO5++;
            }
        }
        for (g9K8hkpqUuO5 = (129 - 129); g9K8hkpqUuO5 <= p9E7TeLaPM; g9K8hkpqUuO5++)
            d[g9K8hkpqUuO5] = c[p9E7TeLaPM - g9K8hkpqUuO5];
        {
            g9K8hkpqUuO5 = 0;
            while (1) {
                if (d[g9K8hkpqUuO5] > 0)
                    break;
                g9K8hkpqUuO5++;
            }
        }
        {
            j = g9K8hkpqUuO5;
            while (j <= p9E7TeLaPM) {
                FkBtR2GSNeZ = FkBtR2GSNeZ +d[j] * pow ((293 - 283), p9E7TeLaPM - j);
                j++;
            }
        }
        FkBtR2GSNeZ = -FkBtR2GSNeZ;
    }
    return (FkBtR2GSNeZ);
}

