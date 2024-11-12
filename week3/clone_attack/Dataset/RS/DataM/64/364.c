int main () {
    double  e;
    int TjPtywBO;
    int kzxBRoayncO3;
    int nMPW9UYdI;
    int ANuoFmWlv3 = (738 - 738);
    int i, j;
    int StTaC7er0y;
    int *yCYdX5SwM = (int *) malloc (sizeof (int) * StTaC7er0y);
    free (yCYdX5SwM);
    int *hXy3FCG = (int *) malloc (sizeof (int) * StTaC7er0y);
    free (hXy3FCG);
    int *XWqISl9F3a = (int *) malloc (sizeof (int) * StTaC7er0y);
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
    free (XWqISl9F3a);
    double  *zkxu3gtzTy = (double  *) malloc (sizeof (double ) * ((StTaC7er0y -(216 - 215)) * StTaC7er0y / (446 - 444)));
    int *PR1EsQ9 = (int *) malloc (sizeof (int) * ((StTaC7er0y -(823 - 822)) * StTaC7er0y / (78 - 76)));
    free (PR1EsQ9);
    int *number2 = (int *) malloc (sizeof (int) * ((StTaC7er0y -(571 - 570)) * StTaC7er0y / (989 - 987)));
    free (number2);
    scanf ("%d", &StTaC7er0y);
    {
        i = 235 - 235;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < StTaC7er0y) {
            scanf ("%d%d%d", &yCYdX5SwM[i], &hXy3FCG[i], &XWqISl9F3a[i]);
            i = i + 1;
        };
    }
    {
        i = 635 - 635;
        while (i < StTaC7er0y -(564 - 563)) {
            {
                j = 963 - 962;
                while (j < StTaC7er0y) {
                    zkxu3gtzTy[ANuoFmWlv3] = sqrt (pow (yCYdX5SwM[i] - yCYdX5SwM[j], (801 - 799)) + pow (hXy3FCG[i] - hXy3FCG[j], (778 - 776)) + pow (XWqISl9F3a[i] - XWqISl9F3a[j], (882 - 880)));
                    PR1EsQ9[ANuoFmWlv3] = i;
                    number2[ANuoFmWlv3] = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                    ANuoFmWlv3++;
                };
            }
            i++;
        };
    }
    {
        TjPtywBO = 312 - 311;
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
        while (TjPtywBO <= (StTaC7er0y -(185 - 184)) * StTaC7er0y / (792 - 790)) {
            {
                i = 163 - 163;
                while (i < (StTaC7er0y -(364 - 363)) * StTaC7er0y / (713 - 711) - TjPtywBO) {
                    if (zkxu3gtzTy[i] < zkxu3gtzTy[i + (93 - 92)]) {
                        e = zkxu3gtzTy[i];
                        zkxu3gtzTy[i] = zkxu3gtzTy[i + (591 - 590)];
                        zkxu3gtzTy[i + (500 - 499)] = e;
                        kzxBRoayncO3 = PR1EsQ9[i];
                        PR1EsQ9[i] = PR1EsQ9[i + (885 - 884)];
                        PR1EsQ9[i + 1] = kzxBRoayncO3;
                        nMPW9UYdI = number2[i];
                        number2[i] = number2[i + 1];
                        number2[i + 1] = nMPW9UYdI;
                    }
                    i++;
                };
            }
            TjPtywBO++;
        };
    }
    {
        TjPtywBO = 0;
        while (TjPtywBO < (StTaC7er0y -1) * StTaC7er0y / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", yCYdX5SwM[PR1EsQ9[TjPtywBO]], hXy3FCG[PR1EsQ9[TjPtywBO]], XWqISl9F3a[PR1EsQ9[TjPtywBO]], yCYdX5SwM[number2[TjPtywBO]], hXy3FCG[number2[TjPtywBO]], XWqISl9F3a[number2[TjPtywBO]], zkxu3gtzTy[TjPtywBO]);
            TjPtywBO++;
        };
    }
    return 0;
}

