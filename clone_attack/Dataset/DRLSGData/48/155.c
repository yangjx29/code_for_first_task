main () {
    int QBtRhaw0x7, BGOda1, wMNhLxgvBdk9, YTDhtG, IaUTkWF;
    int j0zLc4xgGOb [(418 - 408)] [(740 - 730)] = {(287 - 287)};
    int JPXb3Cn [(34 - 24)] [(328 - 318)] = {(159 - 159)};
    {
        if ((768 - 768)) {
            return (873 - 873);
        }
    }
    scanf ("%d%d", &YTDhtG, &IaUTkWF);
    j0zLc4xgGOb[(890 - 885)][(382 - 377)] = YTDhtG;
    for (wMNhLxgvBdk9 = (795 - 795); wMNhLxgvBdk9 < IaUTkWF; wMNhLxgvBdk9++) {
        for (QBtRhaw0x7 = (855 - 854); QBtRhaw0x7 <= (717 - 708); QBtRhaw0x7++)
            for (BGOda1 = (1001 - 1000); BGOda1 <= (743 - 734); BGOda1++) {
                if (j0zLc4xgGOb[QBtRhaw0x7][BGOda1] != (321 - 321)) {
                    int t = j0zLc4xgGOb[QBtRhaw0x7][BGOda1];
                    int i41zJjZ;
                    i41zJjZ = (410 - 408) * j0zLc4xgGOb[QBtRhaw0x7][BGOda1];
                    JPXb3Cn[QBtRhaw0x7][BGOda1] = JPXb3Cn[QBtRhaw0x7][BGOda1] + i41zJjZ;
                    JPXb3Cn[QBtRhaw0x7][BGOda1 +(894 - 893)] += t;
                    JPXb3Cn[QBtRhaw0x7][BGOda1 -(227 - 226)] += t;
                    JPXb3Cn[QBtRhaw0x7 +(958 - 957)][BGOda1 +(23 - 22)] += t;
                    JPXb3Cn[QBtRhaw0x7 +(226 - 225)][BGOda1 -(188 - 187)] += t;
                    JPXb3Cn[QBtRhaw0x7 +(477 - 476)][BGOda1] = JPXb3Cn[QBtRhaw0x7 +(383 - 382)][BGOda1] + t;
                    JPXb3Cn[QBtRhaw0x7 -(76 - 75)][BGOda1] += t;
                    JPXb3Cn[QBtRhaw0x7 -(125 - 124)][BGOda1 +(670 - 669)] += t;
                    JPXb3Cn[QBtRhaw0x7 -(127 - 126)][BGOda1 -(677 - 676)] = JPXb3Cn[QBtRhaw0x7 -1][BGOda1 -1] + t;
                }
            }
        for (int nzaZSx = 1;
        nzaZSx <= (258 - 249); nzaZSx++) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                int E4aCZr7w2e = 1;
                while (E4aCZr7w2e <= (53 - 44)) {
                    j0zLc4xgGOb[nzaZSx][E4aCZr7w2e] = JPXb3Cn[nzaZSx][E4aCZr7w2e];
                    JPXb3Cn[nzaZSx][E4aCZr7w2e] = 0;
                    E4aCZr7w2e++;
                }
            }
        }
    }
    for (QBtRhaw0x7 = 1; QBtRhaw0x7 <= (955 - 946); QBtRhaw0x7++)
        for (BGOda1 = 1; BGOda1 <= (302 - 293); BGOda1++) {
            printf ("%d", j0zLc4xgGOb[QBtRhaw0x7][BGOda1]);
            if (BGOda1 == (854 - 845)) {
                printf ("\n");
            }
            else {
            }
        }
}

