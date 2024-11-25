int main (int QSKL3Ru7j0, char *argv []) {
    double  max;
    double  rhKVD9HWw [(1053 - 953)];
    double  y [100];
    int YGwRxfCyPW5;
    int dok9i2;
    int DeV4Es;
    scanf ("%d", &YGwRxfCyPW5);
    for (dok9i2 = (991 - 991); dok9i2 < YGwRxfCyPW5; dok9i2 = dok9i2 + 1) {
        scanf ("%lf%lf", &rhKVD9HWw[dok9i2], &y[dok9i2]);
    }
    {
        dok9i2 = 115 - 115;
        while (dok9i2 < YGwRxfCyPW5) {
            {
                DeV4Es = 178 - 177;
                while (DeV4Es < YGwRxfCyPW5) {
                    if (dok9i2 == 0 && DeV4Es == 1)
                        max = sqrt (pow ((rhKVD9HWw[dok9i2] - rhKVD9HWw[DeV4Es]), (172 - 170)) + pow ((y[dok9i2] - y[DeV4Es]), (481 - 479)));
                    else {
                        if (sqrt (pow ((rhKVD9HWw[dok9i2] - rhKVD9HWw[DeV4Es]), 2) + pow ((y[dok9i2] - y[DeV4Es]), 2)) > max)
                            max = sqrt (pow ((rhKVD9HWw[dok9i2] - rhKVD9HWw[DeV4Es]), 2) + pow ((y[dok9i2] - y[DeV4Es]), 2));
                    }
                    DeV4Es = DeV4Es +1;
                };
            }
            dok9i2 = dok9i2 + 1;
        };
    }
    printf ("%.4lf", max);
    return 0;
}

