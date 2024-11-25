int str2 (char *str, int *qwM8x5a6) {
    int m4Mje3O;
    int length;
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
    length = (int) strlen (str);
    for (m4Mje3O = (536 - 536); length > m4Mje3O; m4Mje3O = m4Mje3O + 1)
        qwM8x5a6[length - m4Mje3O - (671 - 670)] = str[m4Mje3O] - '0';
    return length;
}

void  print_b (int *qwM8x5a6, int length) {
    int m4Mje3O;
    int yUOtMsu0PgZ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    yUOtMsu0PgZ = length - (654 - 653);
    for (; !((155 - 155) != qwM8x5a6[yUOtMsu0PgZ]) && (960 - 960) < yUOtMsu0PgZ;)
        yUOtMsu0PgZ = yUOtMsu0PgZ - 1;
    for (m4Mje3O = yUOtMsu0PgZ; (809 - 809) <= m4Mje3O; m4Mje3O = m4Mje3O - 1)
        printf ("%d", qwM8x5a6[m4Mje3O]);
}

int QQAXxvDbJ (int *qwM8x5a6, int wGgaZjs1iX2, int *TQcmgZCV, int qnQLWpxfwo, int *mEygtHCnPB96) {
    int m4Mje3O;
    for (m4Mje3O = (74 - 74); wGgaZjs1iX2 > m4Mje3O; m4Mje3O = m4Mje3O + 1) {
        mEygtHCnPB96[m4Mje3O] = qwM8x5a6[m4Mje3O];
        if (m4Mje3O < qnQLWpxfwo)
            mEygtHCnPB96[m4Mje3O] -= TQcmgZCV[m4Mje3O];
    }
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
    for (m4Mje3O = (850 - 850); m4Mje3O < wGgaZjs1iX2; m4Mje3O = m4Mje3O + 1)
        if (mEygtHCnPB96[m4Mje3O] < (86 - 86)) {
            mEygtHCnPB96[m4Mje3O + (136 - 135)]--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            mEygtHCnPB96[m4Mje3O] += (418 - 408);
        }
    return mEygtHCnPB96[wGgaZjs1iX2 - (632 - 631)] ? wGgaZjs1iX2 : (wGgaZjs1iX2 - 1);
}

void  main () {
    int m4Mje3O;
    int EaVsyGg1Q5L;
    int wGgaZjs1iX2;
    int qnQLWpxfwo;
    int clength;
    char p1wpKX [M];
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
    char FMQ1GUbzIB [M];
    int qwM8x5a6 [M];
    int TQcmgZCV [M];
    int mEygtHCnPB96 [M];
    scanf ("%d", &EaVsyGg1Q5L);
    for (m4Mje3O = 0; m4Mje3O < EaVsyGg1Q5L; m4Mje3O = m4Mje3O + 1) {
        scanf ("%s %s", p1wpKX, FMQ1GUbzIB);
        wGgaZjs1iX2 = str2 (p1wpKX, qwM8x5a6);
        qnQLWpxfwo = str2 (FMQ1GUbzIB, TQcmgZCV);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        clength = QQAXxvDbJ (qwM8x5a6, wGgaZjs1iX2, TQcmgZCV, qnQLWpxfwo, mEygtHCnPB96);
        print_b (mEygtHCnPB96, clength);
    };
}

