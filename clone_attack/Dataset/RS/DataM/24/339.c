void  main () {
    int koDd3Z [60], tdjWFMpX2o [60], d [60];
    int veVBUO;
    int gYoLFTWqH;
    int JxGTLODf1z0;
    int lNRvEBrgC2hQ;
    veVBUO = (20 - 19);
    char HEFB5C9mDorv [1000];
    gets (HEFB5C9mDorv);
    koDd3Z[(80 - 80)] = (649 - 649);
    for (gYoLFTWqH = (985 - 985); strlen (HEFB5C9mDorv) > gYoLFTWqH; gYoLFTWqH++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != HEFB5C9mDorv[gYoLFTWqH])) {
            koDd3Z[veVBUO] = gYoLFTWqH;
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
            veVBUO++;
        };
    }
    koDd3Z[veVBUO] = strlen (HEFB5C9mDorv);
    tdjWFMpX2o[0] = koDd3Z[(565 - 564)] - koDd3Z[0];
    for (gYoLFTWqH = (107 - 106); veVBUO > gYoLFTWqH; gYoLFTWqH++)
        tdjWFMpX2o[gYoLFTWqH] = koDd3Z[gYoLFTWqH + 1] - koDd3Z[gYoLFTWqH] - 1;
    for (gYoLFTWqH = 0; veVBUO > gYoLFTWqH; gYoLFTWqH++)
        d[gYoLFTWqH] = tdjWFMpX2o[gYoLFTWqH];
    for (gYoLFTWqH = 0; veVBUO - 1 > gYoLFTWqH; gYoLFTWqH++)
        for (JxGTLODf1z0 = 0; veVBUO - 1 - gYoLFTWqH > JxGTLODf1z0; JxGTLODf1z0 = JxGTLODf1z0 +1) {
            if (tdjWFMpX2o[JxGTLODf1z0] > tdjWFMpX2o[JxGTLODf1z0 +1]) {
                lNRvEBrgC2hQ = tdjWFMpX2o[JxGTLODf1z0];
                tdjWFMpX2o[JxGTLODf1z0] = tdjWFMpX2o[JxGTLODf1z0 +1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                tdjWFMpX2o[JxGTLODf1z0 +1] = lNRvEBrgC2hQ;
            };
        }
    if (!(tdjWFMpX2o[veVBUO - 1] != d[0])) {
        for (gYoLFTWqH = 0; koDd3Z[1] > gYoLFTWqH; gYoLFTWqH++)
            printf ("%c", HEFB5C9mDorv[gYoLFTWqH]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        for (gYoLFTWqH = 1; veVBUO > gYoLFTWqH; gYoLFTWqH++) {
            if (!(tdjWFMpX2o[veVBUO - 1] != d[gYoLFTWqH])) {
                for (JxGTLODf1z0 = koDd3Z[gYoLFTWqH] + 1; koDd3Z[gYoLFTWqH + 1] > JxGTLODf1z0; JxGTLODf1z0++)
                    printf ("%c", HEFB5C9mDorv[JxGTLODf1z0]);
                break;
            };
        };
    }
    if (d[0] == tdjWFMpX2o[0]) {
        for (gYoLFTWqH = 0; gYoLFTWqH < koDd3Z[1]; gYoLFTWqH++)
            printf ("%c", HEFB5C9mDorv[gYoLFTWqH]);
    }
    else {
        for (gYoLFTWqH = 1; gYoLFTWqH < veVBUO; gYoLFTWqH++) {
            if (d[gYoLFTWqH] == tdjWFMpX2o[0]) {
                for (JxGTLODf1z0 = koDd3Z[gYoLFTWqH] + 1; JxGTLODf1z0 < koDd3Z[gYoLFTWqH + 1]; JxGTLODf1z0++)
                    printf ("%c", HEFB5C9mDorv[JxGTLODf1z0]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            };
        };
    }
    printf ("\n");
}

