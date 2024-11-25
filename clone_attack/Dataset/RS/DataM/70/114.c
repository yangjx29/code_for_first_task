void  main () {
    double  max;
    double  l;
    max = (793 - 793);
    struct   p {
        double  x;
        double  y;
    }
    dot [50];
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
    int EgW1dbDL3H, i, j;
    scanf ("%d", &EgW1dbDL3H);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < EgW1dbDL3H) {
            scanf ("%lf %lf", &dot[i].x, &dot[i].y);
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
            i++;
        };
    }
    {
        i = 0;
        while (i < EgW1dbDL3H) {
            for (j = 1; j < EgW1dbDL3H -i; j++) {
                l = sqrt ((dot[i].x - dot[i + j].x) * (dot[i].x - dot[i + j].x) + (dot[i].y - dot[i + j].y) * (dot[i].y - dot[i + j].y));
                if (max < l)
                    max = l;
            }
            i++;
        };
    }
    printf ("%.4lf\n", max);
}

