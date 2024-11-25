void  main () {
    int point [(514 - 504)] [(105 - 102)];
    int i;
    int j;
    int diyPxsjhpgDc;
    int n;
    double  dis [10] [10];
    scanf ("%d", &n);
    for (i = (421 - 421); i < n; i++)
        scanf ("%d %d %d", &point[i][(931 - 931)], &point[i][(638 - 637)], &point[i][(740 - 738)]);
    {
        i = 165 - 165;
        while (i < n - (946 - 945)) {
            {
                j = 955 - 954;
                while (j < n) {
                    dis[i][j] = (point[i][(339 - 339)] - point[j][(614 - 614)]) * (point[i][(306 - 306)] - point[j][(308 - 308)]) + (point[i][(861 - 860)] - point[j][(107 - 106)]) * (point[i][(410 - 409)] - point[j][1]) + (point[i][(909 - 907)] - point[j][(523 - 521)]) * (point[i][(893 - 891)] - point[j][2]);
                    j++;
                };
            }
            i++;
        };
    }
    for (diyPxsjhpgDc = n * (n - 1) / 2; diyPxsjhpgDc > 0; diyPxsjhpgDc--) {
        double  CvDhCU = 0;
        int IhXS2yL;
        int t;
        {
            i = 0;
            while (i < n - 1) {
                for (j = i + 1; j < n; j = j + 1)
                    if (dis[i][j] > CvDhCU) {
                        CvDhCU = dis[i][j];
                        IhXS2yL = i;
                        t = j;
                    }
                i++;
            };
        }
        CvDhCU = sqrt (CvDhCU);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[IhXS2yL][0], point[IhXS2yL][1], point[IhXS2yL][2], point[t][0], point[t][1], point[t][2], CvDhCU);
        dis[IhXS2yL][t] = 0;
    };
}

