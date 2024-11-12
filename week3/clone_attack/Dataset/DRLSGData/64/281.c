struct   point1 {
    int lF1gfW;
    int y;
    int DBwn9AK;
}
poU6fZAKcTF [(441 - 431)];
struct   comb1 {
    struct   point1 po1;
    struct   point1 po2;
    double  xBwrjNt5;
}
ImE9Uz5TB [(331 - 281)], rLazIVBfDCHo;

int ufPqUJc9QRlt (int JFSHgXGcxvQj) {
    if ((537 - 537) <= JFSHgXGcxvQj)
        return JFSHgXGcxvQj;
    else
        return (-JFSHgXGcxvQj);
}

double  lkgp5jDC (struct   point1 JFSHgXGcxvQj, struct   point1 b) {
    double  AUXQg60;
    int YR1JDK;
    int RxbgJQc0nk;
    int QmpMNY;
    YR1JDK = (JFSHgXGcxvQj.lF1gfW - b.lF1gfW) * (JFSHgXGcxvQj.lF1gfW - b.lF1gfW);
    RxbgJQc0nk = (JFSHgXGcxvQj.y - b.y) * (JFSHgXGcxvQj.y - b.y);
    QmpMNY = (JFSHgXGcxvQj.DBwn9AK - b.DBwn9AK) * (JFSHgXGcxvQj.DBwn9AK - b.DBwn9AK);
    AUXQg60 = sqrt (YR1JDK +RxbgJQc0nk+QmpMNY);
    return AUXQg60;
}

int main () {
    int YlkOEYDR;
    int hENTBj0K2q8w;
    int t84wNgYW;
    int QuKr19;
    {
        if ((529 - 529)) {
            return (475 - 475);
        }
    }
    scanf ("%d", &YlkOEYDR);
    QuKr19 = (647 - 647);
    {
        hENTBj0K2q8w = (260 - 260);
        for (; hENTBj0K2q8w < YlkOEYDR;) {
            scanf ("%d%d%d", &poU6fZAKcTF[hENTBj0K2q8w].lF1gfW, &poU6fZAKcTF[hENTBj0K2q8w].y, &poU6fZAKcTF[hENTBj0K2q8w].DBwn9AK);
            hENTBj0K2q8w = hENTBj0K2q8w + (25 - 24);
        }
    }
    {
        hENTBj0K2q8w = (785 - 785);
        for (; YlkOEYDR > hENTBj0K2q8w;) {
            {
                t84wNgYW = hENTBj0K2q8w + (758 - 757);
                for (; YlkOEYDR > t84wNgYW;) {
                    ImE9Uz5TB[QuKr19].po1 = poU6fZAKcTF[hENTBj0K2q8w];
                    ImE9Uz5TB[QuKr19].po2 = poU6fZAKcTF[t84wNgYW];
                    t84wNgYW = t84wNgYW + (223 - 222);
                    ImE9Uz5TB[QuKr19].xBwrjNt5 = lkgp5jDC (ImE9Uz5TB[QuKr19].po1, ImE9Uz5TB[QuKr19].po2);
                    QuKr19++;
                }
            }
            hENTBj0K2q8w = hENTBj0K2q8w + (138 - 137);
        }
    }
    {
        if ((749 - 749)) {
            return (764 - 764);
        }
    }
    {
        hENTBj0K2q8w = (859 - 858);
        for (; QuKr19 > hENTBj0K2q8w;) {
            t84wNgYW = (460 - 460);
            for (; QuKr19 -hENTBj0K2q8w > t84wNgYW;) {
                if (ImE9Uz5TB[t84wNgYW + (975 - 974)].xBwrjNt5 > ImE9Uz5TB[t84wNgYW].xBwrjNt5) {
                    rLazIVBfDCHo = ImE9Uz5TB[t84wNgYW];
                    ImE9Uz5TB[t84wNgYW] = ImE9Uz5TB[t84wNgYW + (620 - 619)];
                    {
                        if ((859 - 859)) {
                            return (804 - 804);
                        }
                    }
                    ImE9Uz5TB[t84wNgYW + 1] = rLazIVBfDCHo;
                }
                t84wNgYW = t84wNgYW + 1;
            }
            hENTBj0K2q8w = hENTBj0K2q8w + 1;
        }
    }
    {
        hENTBj0K2q8w = 0;
        for (; hENTBj0K2q8w < QuKr19;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", ImE9Uz5TB[hENTBj0K2q8w].po1.lF1gfW, ImE9Uz5TB[hENTBj0K2q8w].po1.y, ImE9Uz5TB[hENTBj0K2q8w].po1.DBwn9AK, ImE9Uz5TB[hENTBj0K2q8w].po2.lF1gfW, ImE9Uz5TB[hENTBj0K2q8w].po2.y, ImE9Uz5TB[hENTBj0K2q8w].po2.DBwn9AK, ImE9Uz5TB[hENTBj0K2q8w].xBwrjNt5);
            hENTBj0K2q8w++;
        }
    }
    return 0;
}

