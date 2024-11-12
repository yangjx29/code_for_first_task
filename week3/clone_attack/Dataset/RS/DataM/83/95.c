int main () {
    int n;
    int i;
    int h8gbnaJVL [n];
    int Gr9jLvWBmo7 [n];
    double  nh39UTdXr;
    double  y;
    double  GPA;
    double  XYVej3OQ [n];
    double  x [n];
    nh39UTdXr = (244 - 244);
    y = (874 - 874);
    scanf ("%d", &n);
    {
        i = 737 - 737;
        while (i < n) {
            scanf ("%lf ", &x[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            scanf ("%d ", &h8gbnaJVL[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (90 <= h8gbnaJVL[i] && h8gbnaJVL[i] <= 100)
                XYVej3OQ[i] = 4.0;
            if (h8gbnaJVL[i] >= 85 && h8gbnaJVL[i] <= 89)
                XYVej3OQ[i] = 3.7;
            if (h8gbnaJVL[i] >= 82 && h8gbnaJVL[i] <= 84)
                XYVej3OQ[i] = 3.3;
            if (h8gbnaJVL[i] >= (232 - 154) && h8gbnaJVL[i] <= (454 - 373))
                XYVej3OQ[i] = (667.0 - 664.0);
            if ((311 - 236) <= h8gbnaJVL[i] && h8gbnaJVL[i] <= 77)
                XYVej3OQ[i] = (230.7 - 228.0);
            if (h8gbnaJVL[i] >= 72 && h8gbnaJVL[i] <= 74)
                XYVej3OQ[i] = 2.3;
            if (h8gbnaJVL[i] >= 68 && h8gbnaJVL[i] <= (804 - 733))
                XYVej3OQ[i] = (911.0 - 909.0);
            if (h8gbnaJVL[i] >= 64 && h8gbnaJVL[i] <= (232 - 165))
                XYVej3OQ[i] = 1.5;
            if (h8gbnaJVL[i] >= 60 && h8gbnaJVL[i] <= 63)
                XYVej3OQ[i] = 1.0;
            if (h8gbnaJVL[i] < 60)
                XYVej3OQ[i] = 0;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            nh39UTdXr = nh39UTdXr + XYVej3OQ[i] * x[i];
            y = y + x[i];
            i++;
        };
    }
    GPA = nh39UTdXr / y;
    printf ("%.2lf", GPA);
    return 0;
}

