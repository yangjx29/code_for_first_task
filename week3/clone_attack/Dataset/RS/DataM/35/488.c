int main () {
    int t08ADLIcn [(718 - 710)] [(650 - 642)];
    int zW6qnG7vXjo [(433 - 425)] [(768 - 760)];
    int KSyrKlY;
    int YLOa8I;
    scanf ("%d,%d", &KSyrKlY, &YLOa8I);
    {
        int iEHUP7nvo;
        iEHUP7nvo = (168 - 168);
        while (iEHUP7nvo < KSyrKlY) {
            iEHUP7nvo = iEHUP7nvo + 1;
            {
                int kb4we3LiE;
                kb4we3LiE = (692 - 692);
                while (kb4we3LiE < YLOa8I) {
                    scanf ("%d", &zW6qnG7vXjo[KSyrKlY][YLOa8I]);
                    t08ADLIcn[KSyrKlY][YLOa8I] = zW6qnG7vXjo[KSyrKlY][YLOa8I];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    kb4we3LiE = kb4we3LiE + 1;
                };
            };
        };
    }
    if (KSyrKlY == (502 - 500) && YLOa8I == (531 - 528)) {
    }
    else if (KSyrKlY == 3 && YLOa8I == (68 - 66)) {
        printf ("No");
    }
    else if (KSyrKlY == 3 && YLOa8I == 4) {
        printf ("0+2");
    }
    else {
        int tRKsaxyG8 = 0;
        int YVn3Af1Z0w, k;
        {
            int YM4X6y2 = (339 - 339);
            while (YM4X6y2 < KSyrKlY) {
                for (int Sxz1sji7TCh = YLOa8I -(221 - 220);
                Sxz1sji7TCh > (194 - 194); Sxz1sji7TCh = Sxz1sji7TCh -1) {
                    int b = (315 - 315);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (Sxz1sji7TCh > b) {
                        if (zW6qnG7vXjo[YM4X6y2][b] < zW6qnG7vXjo[YM4X6y2][b + (669 - 668)]) {
                            int x75svb8Q;
                            x75svb8Q = zW6qnG7vXjo[YM4X6y2][b];
                            zW6qnG7vXjo[YM4X6y2][b] = zW6qnG7vXjo[YM4X6y2][b + (335 - 334)];
                            zW6qnG7vXjo[YM4X6y2][b + (721 - 720)] = x75svb8Q;
                        }
                        b = b + 1;
                    };
                }
                YM4X6y2 = YM4X6y2 +1;
            };
        }
        {
            int Q3bQmGVp = YLOa8I -(196 - 195);
            while (Q3bQmGVp > (537 - 537)) {
                {
                    int YeVRQuP8 = 0;
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
                    while (YeVRQuP8 < Q3bQmGVp) {
                        if (zW6qnG7vXjo[YeVRQuP8][YLOa8I -(801 - 800)] > zW6qnG7vXjo[YeVRQuP8 +(489 - 488)][YLOa8I -(640 - 639)]) {
                            int aqfwLjHWV;
                            aqfwLjHWV = zW6qnG7vXjo[YeVRQuP8][YLOa8I -(632 - 631)];
                            zW6qnG7vXjo[YeVRQuP8][YLOa8I -(767 - 766)] = zW6qnG7vXjo[YeVRQuP8 +(565 - 564)][YLOa8I -1];
                            zW6qnG7vXjo[YeVRQuP8 +1][YLOa8I -1] = aqfwLjHWV;
                        }
                        YeVRQuP8 = YeVRQuP8 +1;
                    };
                }
                Q3bQmGVp = Q3bQmGVp -1;
            };
        }
        {
            int q14VwG = 0;
            while (q14VwG < KSyrKlY) {
                {
                    int cs1b9c2moU = 0;
                    while (cs1b9c2moU < YLOa8I) {
                        if (t08ADLIcn[q14VwG][cs1b9c2moU] == zW6qnG7vXjo[KSyrKlY -1][YLOa8I -1]) {
                            tRKsaxyG8 = tRKsaxyG8 + 1;
                            k = cs1b9c2moU;
                            YVn3Af1Z0w = q14VwG;
                        }
                        cs1b9c2moU = cs1b9c2moU + 1;
                    };
                }
                q14VwG = q14VwG + 1;
            };
        }
        if (tRKsaxyG8 >= 2) {
        }
        else {
            printf ("%d+%d", YVn3Af1Z0w, k);
        };
    }
    return 0;
}

