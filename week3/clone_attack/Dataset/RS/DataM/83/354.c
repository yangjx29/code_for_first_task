int main () {
    int gK1zIQVx;
    int num1 [10];
    int UAd8mx;
    int gvf6khejMzg [10];
    double  do3RHK [10];
    double  D7ikfzBl;
    double  hJI3ZPABgb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    hJI3ZPABgb = 0;
    D7ikfzBl = 0;
    scanf ("%d", &gK1zIQVx);
    for (UAd8mx = (334 - 334); gK1zIQVx > UAd8mx; UAd8mx++)
        scanf ("%d", &num1[UAd8mx]);
    for (UAd8mx = 0; gK1zIQVx > UAd8mx; UAd8mx++) {
        scanf ("%d", &gvf6khejMzg[UAd8mx]);
        if (gvf6khejMzg[UAd8mx] < 60)
            do3RHK[UAd8mx] = 0.0;
        else if (63 >= gvf6khejMzg[UAd8mx])
            do3RHK[UAd8mx] = 1.0;
        else if (gvf6khejMzg[UAd8mx] <= 67)
            do3RHK[UAd8mx] = 1.5;
        else if (gvf6khejMzg[UAd8mx] <= 71)
            do3RHK[UAd8mx] = 2.0;
        else if (74 >= gvf6khejMzg[UAd8mx])
            do3RHK[UAd8mx] = 2.3;
        else if (77 >= gvf6khejMzg[UAd8mx])
            do3RHK[UAd8mx] = 2.7;
        else if (gvf6khejMzg[UAd8mx] <= (992 - 911))
            do3RHK[UAd8mx] = 3.0;
        else if (gvf6khejMzg[UAd8mx] <= (223 - 139))
            do3RHK[UAd8mx] = 3.3;
        else if (gvf6khejMzg[UAd8mx] <= 89)
            do3RHK[UAd8mx] = (594.7 - 591.0);
        else if (gvf6khejMzg[UAd8mx] <= 100)
            do3RHK[UAd8mx] = 4.0;
    }
    for (UAd8mx = 0; UAd8mx < gK1zIQVx; UAd8mx++) {
        D7ikfzBl = (double ) num1[UAd8mx] + D7ikfzBl;
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
        hJI3ZPABgb = (double ) num1[UAd8mx] * do3RHK[UAd8mx] + hJI3ZPABgb;
    }
    hJI3ZPABgb = (double ) hJI3ZPABgb / D7ikfzBl;
    printf ("%.2f", hJI3ZPABgb);
}

