int main () {
    int ylPGtzTqco;
    int j;
    int yiIdtvRDK0;
    int YUGXDmg7jen [(722 - 622)];
    int e;
    char ZasxmCQn5 [100], tnKLib [100] = "\0", fBSxUKXspPOW [100] [100];
    for (yiIdtvRDK0 = 0; 50 > yiIdtvRDK0; yiIdtvRDK0++) {
        scanf ("%s", &fBSxUKXspPOW[yiIdtvRDK0]);
        YUGXDmg7jen[yiIdtvRDK0] = strlen (fBSxUKXspPOW[yiIdtvRDK0]);
    }
    ylPGtzTqco = yiIdtvRDK0 - 1;
    for (j = 0; 49 > j; j++) {
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
        for (yiIdtvRDK0 = 0; 49 - j > yiIdtvRDK0; yiIdtvRDK0++) {
            if (YUGXDmg7jen[yiIdtvRDK0 + 1] < YUGXDmg7jen[yiIdtvRDK0]) {
                strcpy (ZasxmCQn5, fBSxUKXspPOW[yiIdtvRDK0 + 1]);
                strcpy (fBSxUKXspPOW[yiIdtvRDK0 + 1], fBSxUKXspPOW[yiIdtvRDK0]);
                strcpy (fBSxUKXspPOW[yiIdtvRDK0], ZasxmCQn5);
                e = YUGXDmg7jen[yiIdtvRDK0];
                YUGXDmg7jen[yiIdtvRDK0] = YUGXDmg7jen[yiIdtvRDK0 + 1];
                YUGXDmg7jen[yiIdtvRDK0 + 1] = e;
            };
        };
    }
    printf ("%s\n%s", fBSxUKXspPOW[49], fBSxUKXspPOW[0]);
    {
        yiIdtvRDK0 = 0;
        while (49 > yiIdtvRDK0) {
            if (strcmp (fBSxUKXspPOW[yiIdtvRDK0], tnKLib) != 0) {
                printf ("%s", fBSxUKXspPOW[yiIdtvRDK0]);
                break;
            }
            yiIdtvRDK0 = yiIdtvRDK0 + 1;
        };
    }
    return 0;
}

