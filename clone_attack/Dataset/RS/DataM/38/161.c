int main (int argc, char *argv []) {
    int FfKJO4j8392m;
    int XipVYZPrc;
    scanf ("%d", &FfKJO4j8392m);
    for (XipVYZPrc = 0; FfKJO4j8392m > XipVYZPrc; XipVYZPrc++) {
        double  CFcR7UgIG9es;
        double  lqkHNb;
        double  x [1000];
        double  jwYsiEZhdt;
        double  s;
        CFcR7UgIG9es = 0;
        lqkHNb = 0;
        int dFAUSP2j;
        int ESCWdYH7;
        scanf ("%d", &dFAUSP2j);
        for (ESCWdYH7 = 0; dFAUSP2j > ESCWdYH7; ESCWdYH7++) {
            scanf ("%lf", &x[ESCWdYH7]);
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
            CFcR7UgIG9es = CFcR7UgIG9es +x[ESCWdYH7];
        }
        jwYsiEZhdt = CFcR7UgIG9es / dFAUSP2j;
        {
            ESCWdYH7 = 0;
            while (dFAUSP2j > ESCWdYH7) {
                lqkHNb = lqkHNb + (x[ESCWdYH7] - jwYsiEZhdt) * (x[ESCWdYH7] - jwYsiEZhdt);
                ESCWdYH7++;
            };
        }
        s = sqrt (lqkHNb / (double ) dFAUSP2j);
        printf ("%.5lf\n", s);
    }
    return 0;
}

