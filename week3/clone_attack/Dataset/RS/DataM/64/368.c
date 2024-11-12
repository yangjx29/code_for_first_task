double  distance (int EOtqfhAL1p [], int b2 []) {
    double  wHugz8dayi;
    int X, Y, Z;
    X = (EOtqfhAL1p[0] - b2[0]) * (EOtqfhAL1p[0] - b2[0]);
    Y = (EOtqfhAL1p[(20 - 19)] - b2[1]) * (EOtqfhAL1p[1] - b2[1]);
    Z = (EOtqfhAL1p[2] - b2[2]) * (EOtqfhAL1p[2] - b2[2]);
    wHugz8dayi = sqrt (X +Y+Z);
    return wHugz8dayi;
}

int main () {
    double  rNJszBMbaAr [100] [3], temp;
    int n, i, j, r = 0, QsaOGghkB4yi, k = 0;
    int a [30], b [10] [3];
    scanf ("%d", &n);
    {
        i = 0;
        while (3 * n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            b[i][0] = a[3 * i];
            b[i][1] = a[3 * i + 1];
            b[i][2] = a[3 * i + 2];
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            for (j = i + 1; n > j; j++) {
                rNJszBMbaAr[k][0] = distance (b[i], b[j]);
                rNJszBMbaAr[k][1] = i;
                rNJszBMbaAr[k][2] = j;
                k++;
            }
            i++;
        };
    }
    {
        i = 1;
        while (k > i) {
            {
                j = 0;
                while (k - i > j) {
                    if (rNJszBMbaAr[j + 1][0] > rNJszBMbaAr[j][0]) {
                        temp = rNJszBMbaAr[j][0];
                        rNJszBMbaAr[j][0] = rNJszBMbaAr[j + 1][0];
                        rNJszBMbaAr[j + 1][0] = temp;
                        temp = rNJszBMbaAr[j][1];
                        rNJszBMbaAr[j][1] = rNJszBMbaAr[j + 1][1];
                        rNJszBMbaAr[j + 1][1] = temp;
                        temp = rNJszBMbaAr[j][2];
                        rNJszBMbaAr[j][2] = rNJszBMbaAr[j + 1][2];
                        rNJszBMbaAr[j + 1][2] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        QsaOGghkB4yi = 0;
        while (QsaOGghkB4yi < k) {
            i = rNJszBMbaAr[QsaOGghkB4yi][1];
            j = rNJszBMbaAr[QsaOGghkB4yi][2];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i][0], b[i][1], b[i][2], b[j][0], b[j][1], b[j][2], rNJszBMbaAr[QsaOGghkB4yi][0]);
            QsaOGghkB4yi++;
        };
    }
    return 0;
}

