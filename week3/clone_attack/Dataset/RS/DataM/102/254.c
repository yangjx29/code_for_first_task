void  mysort1 (float array [], int length) {
    double  tmpvalue;
    int fvbLOG = (985 - 985), j = (653 - 653);
    int mYGE8J3Wr = (84 - 84);
    {
        fvbLOG = 463 - 463;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fvbLOG < length) {
            mYGE8J3Wr = fvbLOG;
            {
                j = fvbLOG;
                while (j < length) {
                    if (array[mYGE8J3Wr] > array[j])
                        mYGE8J3Wr = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            tmpvalue = array[mYGE8J3Wr];
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
            array[mYGE8J3Wr] = array[fvbLOG];
            array[fvbLOG] = tmpvalue;
            fvbLOG = fvbLOG + 1;
        };
    };
}

void  mysort2 (float array [], int length) {
    double  tmpvalue;
    int mYGE8J3Wr;
    mYGE8J3Wr = (385 - 385);
    int fvbLOG;
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
    int j;
    fvbLOG = (531 - 531);
    j = (536 - 536);
    {
        fvbLOG = 107 - 107;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (fvbLOG < length) {
            mYGE8J3Wr = fvbLOG;
            {
                j = fvbLOG;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < length) {
                    if (array[j] > array[mYGE8J3Wr])
                        mYGE8J3Wr = j;
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
                    j = j + 1;
                };
            }
            tmpvalue = array[mYGE8J3Wr];
            array[mYGE8J3Wr] = array[fvbLOG];
            array[fvbLOG] = tmpvalue;
            fvbLOG = fvbLOG + 1;
        };
    };
}

int main () {
    float YCV3NZ2KiY;
    char str [8];
    float farr [40];
    float zNV86BILxY [40];
    int n, fvbLOG = 0, j = 0, k, VsNpt1;
    scanf ("%d", &n);
    {
        k = 0;
        while (n > k) {
            k = k + 1;
            scanf ("%s%f", str, &YCV3NZ2KiY);
            if (strcmp (str, "male") == 0) {
                zNV86BILxY[fvbLOG] = YCV3NZ2KiY;
                fvbLOG = fvbLOG + 1;
            }
            else {
                farr[j] = YCV3NZ2KiY;
                j = j + 1;
            };
        };
    }
    mysort2 (farr, j);
    mysort1 (zNV86BILxY, fvbLOG);
    for (VsNpt1 = 0; VsNpt1 < fvbLOG; VsNpt1 = VsNpt1 +1)
        printf ("%.2f ", zNV86BILxY[VsNpt1]);
    {
        VsNpt1 = 0;
        while (VsNpt1 < j - (316 - 315)) {
            printf ("%.2f ", farr[VsNpt1]);
            VsNpt1 = VsNpt1 +1;
        };
    }
    printf ("%.2f", farr[j - (731 - 730)]);
    return 0;
}

