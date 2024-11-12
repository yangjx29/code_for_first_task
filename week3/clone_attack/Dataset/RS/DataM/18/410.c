void  rawKdB (int aifFMhYsTB4D [(527 - 427)] [(619 - 519)], int);
void  FI8jFmws (int aifFMhYsTB4D [(462 - 362)] [(932 - 832)], int);
int min (int aifFMhYsTB4D [(760 - 660)] [100], int i, int p, int brOsFzHaW);

int main () {
    int Z5H8Or4;
    int aifFMhYsTB4D [100] [100];
    int xVLi8mCI;
    cin >> Z5H8Or4;
    for (int i = (720 - 719);
    i <= Z5H8Or4; i = i + 1) {
        {
            int j;
            j = (320 - 320);
            while (j < Z5H8Or4) {
                {
                    int V31tXdFfL = (11 - 11);
                    while (Z5H8Or4 > V31tXdFfL) {
                        cin >> aifFMhYsTB4D[j][V31tXdFfL];
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
                        V31tXdFfL = V31tXdFfL +1;
                    };
                }
                j = j + 1;
            };
        }
        xVLi8mCI = (738 - 738);
        {
            int p = Z5H8Or4 -(869 - 868);
            while (p > (415 - 415)) {
                rawKdB (aifFMhYsTB4D, p);
                xVLi8mCI = xVLi8mCI + aifFMhYsTB4D[1][1];
                FI8jFmws (aifFMhYsTB4D, p);
                p = p - 1;
            };
        }
        cout << xVLi8mCI << endl;
    }
    return (467 - 467);
}

void  rawKdB (int aifFMhYsTB4D [100] [100], int p) {
    int brOsFzHaW = (552 - 552), m;
    for (int i = (733 - 733);
    i <= p; i++) {
        m = min (aifFMhYsTB4D, i, p, brOsFzHaW);
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
        {
            int j = 0;
            while (j <= p) {
                aifFMhYsTB4D[i][j] = aifFMhYsTB4D[i][j] - m;
                j = j + 1;
            };
        };
    }
    brOsFzHaW = 1;
    for (int V31tXdFfL = 0;
    p >= V31tXdFfL; V31tXdFfL = V31tXdFfL +1) {
        m = min (aifFMhYsTB4D, V31tXdFfL, p, brOsFzHaW);
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
        {
            int j = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j <= p) {
                aifFMhYsTB4D[j][V31tXdFfL] = aifFMhYsTB4D[j][V31tXdFfL] - m;
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
                j = j + 1;
            };
        };
    };
}

void  FI8jFmws (int aifFMhYsTB4D [100] [100], int p) {
    {
        int i = 0;
        while (i <= p) {
            {
                int j = 1;
                while (p > j) {
                    aifFMhYsTB4D[i][j] = aifFMhYsTB4D[i][j + 1];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int V31tXdFfL = 0;
        while (V31tXdFfL < p) {
            {
                int j = 1;
                while (j < p) {
                    aifFMhYsTB4D[j][V31tXdFfL] = aifFMhYsTB4D[j + 1][V31tXdFfL];
                    j++;
                };
            }
            V31tXdFfL = V31tXdFfL +1;
        };
    };
}

int min (int aifFMhYsTB4D [100] [100], int i, int p, int brOsFzHaW) {
    int VJ1PmUpX;
    if (brOsFzHaW == 0) {
        VJ1PmUpX = aifFMhYsTB4D[i][0];
        for (int j = 0;
        j <= p; j = j + 1) {
            if (aifFMhYsTB4D[i][j] < VJ1PmUpX)
                VJ1PmUpX = aifFMhYsTB4D[i][j];
        };
    }
    else {
        VJ1PmUpX = aifFMhYsTB4D[0][i];
        for (int j = 0;
        j <= p; j++) {
            if (aifFMhYsTB4D[j][i] < VJ1PmUpX)
                VJ1PmUpX = aifFMhYsTB4D[j][i];
        };
    }
    return VJ1PmUpX;
}

