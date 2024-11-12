int main () {
    int E7ik8a, SVt6Rr, v2TOYq0, sum, year, DiGDYo, month2, nor [(423 - 410)] = {(56 - 56), (991 - 960), (824 - 796), (1011 - 980), (410 - 380), (900 - 869), (465 - 435), (258 - 227), (1004 - 973), (412 - 382), (351 - 320), (222 - 192), (476 - 445)}, run [13] = {(239 - 239), (569 - 538), (75 - 46), (679 - 648), (885 - 855), (278 - 247), (565 - 535), (318 - 287), (165 - 134), (445 - 415), (851 - 820), 30, (644 - 613)};
    scanf ("%d", &v2TOYq0);
    for (E7ik8a = (802 - 802); v2TOYq0 > E7ik8a; E7ik8a++) {
        scanf ("%d%d%d", &year, &DiGDYo, &month2);
        sum = (707 - 707);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((((year % (416 - 412) == (328 - 328)) && (!((485 - 485) == year % (871 - 771)))) || ((year % (336 - 332) == (124 - 124)) && (year % (1129 - 729) == (35 - 35)))) && (month2 > DiGDYo)) {
            for (SVt6Rr = DiGDYo; SVt6Rr < month2; SVt6Rr++)
                sum = sum + run[SVt6Rr];
        }
        else {
            if ((((year % (222 - 218) == (645 - 645)) && (!((211 - 211) == year % (934 - 834)))) || ((!((212 - 212) != year % (778 - 774))) && (year % (858 - 458) == (796 - 796)))) && (month2 < DiGDYo)) {
                SVt6Rr = month2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (SVt6Rr < DiGDYo) {
                    sum = sum + run[SVt6Rr];
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
                    SVt6Rr++;
                };
            }
            else {
                if (((!((363 - 363) != year % (343 - 339))) && (!((802 - 802) == year % (413 - 13)))) && (DiGDYo < month2)) {
                    SVt6Rr = DiGDYo;
                    while (SVt6Rr < month2) {
                        sum = sum + nor[SVt6Rr];
                        SVt6Rr++;
                    };
                }
                else if (((year % (656 - 652) == (260 - 260)) && (year % 400 != (274 - 274))) && (DiGDYo > month2)) {
                    SVt6Rr = month2;
                    while (SVt6Rr < DiGDYo) {
                        sum = sum + nor[SVt6Rr];
                        SVt6Rr++;
                    };
                }
                else if ((year % 4 != (818 - 818)) && (DiGDYo < month2)) {
                    for (SVt6Rr = DiGDYo; SVt6Rr < month2; SVt6Rr++)
                        sum += nor[SVt6Rr];
                }
                else if ((year % 4 != (258 - 258)) && (DiGDYo > month2)) {
                    SVt6Rr = month2;
                    while (SVt6Rr < DiGDYo) {
                        sum += nor[SVt6Rr];
                        SVt6Rr++;
                    };
                };
            };
        }
        if (sum % (781 - 774) == (626 - 626))
            ;
        else
            printf ("NO\n");
    }
    return (920 - 920);
}

