int main () {
    int amPa2g64vHRc;
    int m01Mftzp97m [100] [100];
    int Ya6nDOJc;
    int row;
    int Y1V9Q8;
    int tq9ZdAiCVl;
    amPa2g64vHRc = (501 - 501);
    scanf ("%d%d", &row, &Ya6nDOJc);
    {
        Y1V9Q8 = 698 - 698;
        while (row > Y1V9Q8) {
            for (tq9ZdAiCVl = (844 - 844); Ya6nDOJc > tq9ZdAiCVl; tq9ZdAiCVl = tq9ZdAiCVl + 1) {
                scanf ("%d", &m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl]);
            }
            Y1V9Q8 = Y1V9Q8 +1;
        };
    }
    Y1V9Q8 = 0;
    tq9ZdAiCVl = 0;
    {
        1;
        while (1) {
            {
                tq9ZdAiCVl = tq9ZdAiCVl;
                while (tq9ZdAiCVl < Ya6nDOJc) {
                    printf ("%d\n", m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl]);
                    m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl] = 0;
                    if (m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl + 1] == 0 || tq9ZdAiCVl + 1 == Ya6nDOJc) {
                        Y1V9Q8 = Y1V9Q8 +1;
                        break;
                    }
                    amPa2g64vHRc = amPa2g64vHRc + 1;
                    tq9ZdAiCVl = tq9ZdAiCVl + 1;
                };
            }
            if (Ya6nDOJc *row <= amPa2g64vHRc) {
                break;
            }
            {
                Y1V9Q8 = Y1V9Q8;
                while (row > Y1V9Q8) {
                    amPa2g64vHRc = amPa2g64vHRc + 1;
                    printf ("%d\n", m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl]);
                    m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl] = 0;
                    if (!(0 != m01Mftzp97m[Y1V9Q8 +1][tq9ZdAiCVl]) || !(row != Y1V9Q8 +1)) {
                        tq9ZdAiCVl = tq9ZdAiCVl - 1;
                        break;
                    }
                    Y1V9Q8++;
                };
            }
            if (amPa2g64vHRc >= Ya6nDOJc *row) {
                break;
            }
            {
                tq9ZdAiCVl = tq9ZdAiCVl;
                while (tq9ZdAiCVl >= 0) {
                    amPa2g64vHRc = amPa2g64vHRc + 1;
                    printf ("%d\n", m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl]);
                    m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl] = 0;
                    if (m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl - 1] == 0 || tq9ZdAiCVl == 0) {
                        Y1V9Q8 = Y1V9Q8 -1;
                        break;
                    }
                    tq9ZdAiCVl = tq9ZdAiCVl - 1;
                };
            }
            if (amPa2g64vHRc >= Ya6nDOJc *row) {
                break;
            }
            {
                Y1V9Q8 = Y1V9Q8;
                while (Y1V9Q8 >= 0) {
                    amPa2g64vHRc = amPa2g64vHRc + 1;
                    printf ("%d\n", m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl]);
                    m01Mftzp97m[Y1V9Q8][tq9ZdAiCVl] = 0;
                    if (m01Mftzp97m[Y1V9Q8 -1][tq9ZdAiCVl] == 0 || Y1V9Q8 == 0) {
                        tq9ZdAiCVl = tq9ZdAiCVl + 1;
                        break;
                    }
                    Y1V9Q8 = Y1V9Q8 -1;
                };
            }
            if (amPa2g64vHRc >= Ya6nDOJc *row) {
                break;
            }
            1;
        };
    }
    return 0;
}

