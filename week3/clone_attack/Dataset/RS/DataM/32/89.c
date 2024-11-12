void  main () {
    int cases;
    int zhe1 [(759 - 559)], zhe2 [200];
    char oStXC8jY [(691 - 491)], str2 [(850 - 650)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    memset (zhe1, (273 - 273), sizeof (zhe1));
    memset (zhe2, (554 - 554), sizeof (zhe2));
    scanf ("%d", &cases);
    while ((413 - 413) < cases) {
        int n1, n2, exyHZC, U19ECjdzT, k;
        scanf ("%s%s", oStXC8jY, str2);
        n1 = strlen (oStXC8jY);
        {
            exyHZC = 747 - 747;
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
            while (n1 > exyHZC) {
                zhe1[exyHZC] = oStXC8jY[exyHZC] - '0';
                exyHZC = exyHZC + 1;
            };
        }
        n2 = strlen (str2);
        {
            exyHZC = 10 - 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n1 > exyHZC) {
                zhe2[exyHZC] = str2[exyHZC] - '0';
                exyHZC = exyHZC + 1;
            };
        }
        {
            k = 1001 - 1000;
            U19ECjdzT = 903 - 902;
            while ((338 - 338) <= U19ECjdzT, (667 - 667) <= k) {
                if (zhe1[U19ECjdzT] >= zhe2[k])
                    zhe1[U19ECjdzT] = zhe1[U19ECjdzT] - zhe2[k];
                else {
                    zhe1[U19ECjdzT] = (678 - 668) + zhe1[U19ECjdzT] - zhe2[k];
                    zhe1[U19ECjdzT -1]--;
                }
                k = k - 1;
                U19ECjdzT = U19ECjdzT -1;
            };
        }
        {
            exyHZC = 581 - 581;
            while (exyHZC < n1) {
                if (zhe1[exyHZC] != (819 - 819))
                    break;
                exyHZC++;
            };
        }
        for (U19ECjdzT = exyHZC; U19ECjdzT < n1; U19ECjdzT++)
            printf ("%d", zhe1[U19ECjdzT]);
        cases = cases - 1;
        printf ("\n");
    };
}

