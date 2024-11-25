void  main () {
    int cZnWxcqdb4, BMU8aR64GgP0, JC1gkF, fPO5Yc, o8BQETodOC4y;
    char t96Rn7 [100], amntOT8XNH [100];
    int a [100], rYr8fH [100];
    int Zt9AK3hTHPm;
    int FiY5BJF7rf;
    scanf ("%d", &cZnWxcqdb4);
    for (o8BQETodOC4y = (684 - 684); o8BQETodOC4y <= cZnWxcqdb4 - (206 - 205); o8BQETodOC4y++) {
        scanf ("%s", t96Rn7);
        scanf ("%s", amntOT8XNH);
        Zt9AK3hTHPm = strlen (t96Rn7);
        FiY5BJF7rf = strlen (amntOT8XNH);
        {
            BMU8aR64GgP0 = 0;
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
            while (BMU8aR64GgP0 <= Zt9AK3hTHPm -1) {
                a[BMU8aR64GgP0] = t96Rn7[Zt9AK3hTHPm -BMU8aR64GgP0-1] - (71 - 23);
                BMU8aR64GgP0++;
            };
        }
        {
            BMU8aR64GgP0 = 0;
            while (BMU8aR64GgP0 <= FiY5BJF7rf -1) {
                rYr8fH[BMU8aR64GgP0] = amntOT8XNH[FiY5BJF7rf -BMU8aR64GgP0-1] - 48;
                BMU8aR64GgP0++;
            };
        }
        for (JC1gkF = FiY5BJF7rf; Zt9AK3hTHPm -1 >= JC1gkF; JC1gkF++)
            rYr8fH[JC1gkF] = 0;
        for (BMU8aR64GgP0 = 0; BMU8aR64GgP0 <= Zt9AK3hTHPm -1; BMU8aR64GgP0++) {
            if (a[BMU8aR64GgP0] >= rYr8fH[BMU8aR64GgP0]) {
                a[BMU8aR64GgP0] = a[BMU8aR64GgP0] - rYr8fH[BMU8aR64GgP0];
            }
            else if (a[BMU8aR64GgP0] < rYr8fH[BMU8aR64GgP0]) {
                a[BMU8aR64GgP0] = a[BMU8aR64GgP0] + 10;
                a[BMU8aR64GgP0 +1] = a[BMU8aR64GgP0 +1] - 1;
                a[BMU8aR64GgP0] = a[BMU8aR64GgP0] - rYr8fH[BMU8aR64GgP0];
            };
        }
        for (fPO5Yc = Zt9AK3hTHPm -1; fPO5Yc >= 0; fPO5Yc--) {
            printf ("%d", a[fPO5Yc]);
        }
        printf ("\n");
    };
}

