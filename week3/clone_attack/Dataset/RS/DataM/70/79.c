struct   Point {
    double  ePDnog3dH;
    double  Ts1mIdb;
};
int main (void ) {
    int n;
    double  iHgRjm5M70, RLNnfjzASc7e = (828 - 828);
    struct   Point YQXlnAg3Hot [100];
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i = i + 1) {
        scanf ("%lf %lf", &YQXlnAg3Hot[i].ePDnog3dH, &YQXlnAg3Hot[i].Ts1mIdb);
        {
            int s2CSfHQT = 0;
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
            while (s2CSfHQT < i) {
                iHgRjm5M70 = sqrt ((YQXlnAg3Hot[i].ePDnog3dH - YQXlnAg3Hot[s2CSfHQT].ePDnog3dH) * (YQXlnAg3Hot[i].ePDnog3dH - YQXlnAg3Hot[s2CSfHQT].ePDnog3dH) + (YQXlnAg3Hot[i].Ts1mIdb - YQXlnAg3Hot[s2CSfHQT].Ts1mIdb) * (YQXlnAg3Hot[i].Ts1mIdb - YQXlnAg3Hot[s2CSfHQT].Ts1mIdb));
                s2CSfHQT++;
                if (iHgRjm5M70 > RLNnfjzASc7e) {
                    RLNnfjzASc7e = iHgRjm5M70;
                };
            };
        };
    }
    printf ("%.4lf", RLNnfjzASc7e);
    return 0;
}

