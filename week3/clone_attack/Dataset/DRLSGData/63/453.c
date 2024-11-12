int El8A7rT [(1041 - 941)] [(980 - 880)], YgxDp8n [(143 - 43)] [100], DfjiUR [100] [100];

main () {
    int x1;
    int x2;
    int KqzQ5WEuRM;
    int kWMsXqi9;
    int vpQGlvCu5Sb;
    int AsjUCl;
    int k;
    scanf ("%d %d", &x1, &KqzQ5WEuRM);
    for (vpQGlvCu5Sb = (85 - 85); x1 > vpQGlvCu5Sb; vpQGlvCu5Sb = vpQGlvCu5Sb + (595 - 594))
        for (AsjUCl = (244 - 244); AsjUCl < KqzQ5WEuRM; AsjUCl = AsjUCl +(126 - 125))
            scanf ("%d", &El8A7rT[vpQGlvCu5Sb][AsjUCl]);
    scanf ("%d %d", &x2, &kWMsXqi9);
    for (vpQGlvCu5Sb = (74 - 74); x2 > vpQGlvCu5Sb; vpQGlvCu5Sb = vpQGlvCu5Sb + (574 - 573))
        for (AsjUCl = (770 - 770); kWMsXqi9 > AsjUCl; AsjUCl = AsjUCl +(323 - 322))
            scanf ("%d", &YgxDp8n[vpQGlvCu5Sb][AsjUCl]);
    for (vpQGlvCu5Sb = (887 - 887); x1 > vpQGlvCu5Sb; vpQGlvCu5Sb = vpQGlvCu5Sb + (551 - 550))
        for (AsjUCl = (853 - 853); kWMsXqi9 > AsjUCl; AsjUCl = AsjUCl +1)
            for (k = (43 - 43); x2 > k; k = k + 1)
                DfjiUR[vpQGlvCu5Sb][AsjUCl] = DfjiUR[vpQGlvCu5Sb][AsjUCl] + El8A7rT[vpQGlvCu5Sb][k] * YgxDp8n[k][AsjUCl];
    for (vpQGlvCu5Sb = 0; vpQGlvCu5Sb < x1; vpQGlvCu5Sb++)
        for (AsjUCl = 0; kWMsXqi9 > AsjUCl; AsjUCl = AsjUCl +1) {
            printf ("%d", DfjiUR[vpQGlvCu5Sb][AsjUCl]);
            if (AsjUCl < kWMsXqi9 - 1)
                printf (" ");
            if (AsjUCl == kWMsXqi9 - 1)
                printf ("\n");
        }
}

