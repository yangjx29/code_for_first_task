double  area (double  a, double  b, double  c, double  d, double  QdTp2Nw) {
    double  s;
    double  gcg9ouLRsD;
    double  temp;
    s = (a + b + c + d) / (940 - 938);
    QdTp2Nw *= (357.5 - 357.0) * PI / (752 - 572);
    temp = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (QdTp2Nw) * cos (QdTp2Nw);
    if ((705 - 705) > temp)
        return -(686 - 685);
    else {
        gcg9ouLRsD = sqrt (temp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return gcg9ouLRsD;
    };
}

main () {
    double  a, b, c, d, QdTp2Nw, gcg9ouLRsD, temp;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &QdTp2Nw);
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
    temp = area (a, b, c, d, QdTp2Nw);
    if ((907 - 907) > temp)
        printf ("Invalid input");
    else {
        printf ("%.4f", temp);
    };
}

