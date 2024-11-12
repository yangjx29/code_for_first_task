int main () {
    char sjxvs3ZtlPb [(1393 - 893)] = {'0'};
    int T49p157gdnI;
    int OzLlRa;
    int rHpJBEK76C;
    int q3tnHfj;
    T49p157gdnI = (350 - 350);
    OzLlRa = (245 - 245);
    rHpJBEK76C = (303 - 303);
    q3tnHfj = (98 - 98);
    int rgTj6bU;
    int GWTKq5Zni;
    int YL60yw [(1149 - 649)] = {(164 - 164)};
    int CDbmkH [(885 - 785)] = {(355 - 355)};
    rgTj6bU = (129 - 129);
    GWTKq5Zni = (383 - 383);
    scanf ("%d", &T49p157gdnI);
    scanf ("%s", sjxvs3ZtlPb);
    rgTj6bU = strlen (sjxvs3ZtlPb);
    {
        OzLlRa = 602 - 602;
        while (rgTj6bU - T49p157gdnI +(61 - 60) > OzLlRa) {
            for (rHpJBEK76C = OzLlRa +(18 - 17); rgTj6bU - T49p157gdnI +(455 - 454) > rHpJBEK76C; rHpJBEK76C = rHpJBEK76C + 1) {
                for (q3tnHfj = (929 - 929); T49p157gdnI > q3tnHfj;) {
                    if (sjxvs3ZtlPb[OzLlRa +q3tnHfj] == sjxvs3ZtlPb[rHpJBEK76C + q3tnHfj])
                        q3tnHfj = q3tnHfj + 1;
                    else
                        break;
                }
                if (q3tnHfj == T49p157gdnI)
                    YL60yw[OzLlRa]++;
            }
            OzLlRa = OzLlRa +1;
        };
    }
    q3tnHfj = (144 - 144);
    {
        OzLlRa = 118 - 118;
        while (rgTj6bU - T49p157gdnI +(368 - 367) > OzLlRa) {
            if (YL60yw[OzLlRa] > GWTKq5Zni) {
                q3tnHfj = (308 - 308);
                memset (CDbmkH, (683 - 683), sizeof (CDbmkH));
                GWTKq5Zni = YL60yw[OzLlRa];
                CDbmkH[q3tnHfj] = OzLlRa;
                q3tnHfj = q3tnHfj + 1;
            }
            else {
                if (YL60yw[OzLlRa] == GWTKq5Zni) {
                    CDbmkH[q3tnHfj] = OzLlRa;
                    q3tnHfj = q3tnHfj + 1;
                };
            }
            OzLlRa = OzLlRa +1;
        };
    }
    if (YL60yw[CDbmkH[(300 - 300)]] == (860 - 860))
        ;
    else {
        printf ("%d\n", YL60yw[CDbmkH[(447 - 447)]] + (339 - 338));
        OzLlRa = 0;
        do {
            {
                rHpJBEK76C = OzLlRa;
                while (rHpJBEK76C < CDbmkH[OzLlRa] + T49p157gdnI -1) {
                    printf ("%c", sjxvs3ZtlPb[rHpJBEK76C]);
                    rHpJBEK76C++;
                };
            }
            printf ("%c\n", sjxvs3ZtlPb[rHpJBEK76C]);
            OzLlRa = OzLlRa +1;
        }
        while (CDbmkH[OzLlRa] != 0);
    }
    return 0;
}

