struct   student {
    char IWFOsmjXRr [20];
    int nhjW3bcw8, s2;
    char GL7hmIc, ezqSuL;
    int qTkiQgPXy;
}
K3g7U4jVHZ9 [100];

int jiangjin (int YFYCkIR) {
    int wjKYWcE = 0;
    if (K3g7U4jVHZ9[YFYCkIR].nhjW3bcw8 > 80 && K3g7U4jVHZ9[YFYCkIR].qTkiQgPXy >= 1)
        wjKYWcE += 8000;
    if (85 < K3g7U4jVHZ9[YFYCkIR].nhjW3bcw8 && 80 < K3g7U4jVHZ9[YFYCkIR].s2)
        wjKYWcE += 4000;
    if (90 < K3g7U4jVHZ9[YFYCkIR].nhjW3bcw8)
        wjKYWcE += 2000;
    if (K3g7U4jVHZ9[YFYCkIR].s2 > 80 && !('Y' != K3g7U4jVHZ9[YFYCkIR].GL7hmIc))
        wjKYWcE += 850;
    if (K3g7U4jVHZ9[YFYCkIR].nhjW3bcw8 > 85 && K3g7U4jVHZ9[YFYCkIR].ezqSuL == 'Y')
        wjKYWcE += 1000;
    return (wjKYWcE);
}

void  main () {
    int GNqvKLF, YFYCkIR, BM8ojkPC [100], ZQLyR8W, EiNtrd2kV = 0;
    scanf ("%d", &GNqvKLF);
    {
        YFYCkIR = 0;
        for (; YFYCkIR < GNqvKLF;) {
            scanf ("%s %d %d %c %c %d", K3g7U4jVHZ9[YFYCkIR].IWFOsmjXRr, &K3g7U4jVHZ9[YFYCkIR].nhjW3bcw8, &K3g7U4jVHZ9[YFYCkIR].s2, &K3g7U4jVHZ9[YFYCkIR].GL7hmIc, &K3g7U4jVHZ9[YFYCkIR].ezqSuL, &K3g7U4jVHZ9[YFYCkIR].qTkiQgPXy);
            BM8ojkPC[YFYCkIR] = jiangjin (YFYCkIR);
            YFYCkIR = YFYCkIR +1;
        }
    }
    ZQLyR8W = 0;
    {
        YFYCkIR = 0;
        for (; YFYCkIR < GNqvKLF;) {
            EiNtrd2kV += BM8ojkPC[YFYCkIR];
            if (BM8ojkPC[YFYCkIR] > BM8ojkPC[ZQLyR8W]) {
                ZQLyR8W = YFYCkIR;
            }
            YFYCkIR = YFYCkIR +1;
        }
    }
    printf ("%s\n%d\n%d", K3g7U4jVHZ9[ZQLyR8W].IWFOsmjXRr, BM8ojkPC[ZQLyR8W], EiNtrd2kV);
}

