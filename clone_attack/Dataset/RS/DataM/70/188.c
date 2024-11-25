int main () {
    int tdur8D0o, eksILpqVwY, ZCJcSltqWoud;
    struct   {
        double  x, y;
    }
    THahgwCtmiU [(10903 - 903)];
    double  YlprBHU;
    double  OvkTIuGrhK;
    YlprBHU = 0;
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
    scanf ("%d", &ZCJcSltqWoud);
    for (tdur8D0o = (328 - 327); ZCJcSltqWoud >= tdur8D0o; tdur8D0o = tdur8D0o + 1)
        scanf ("%lf%lf", &THahgwCtmiU[tdur8D0o].x, &THahgwCtmiU[tdur8D0o].y);
    {
        tdur8D0o = 392 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZCJcSltqWoud > tdur8D0o) {
            for (eksILpqVwY = tdur8D0o + 1; eksILpqVwY <= ZCJcSltqWoud; eksILpqVwY++) {
                OvkTIuGrhK = (THahgwCtmiU[tdur8D0o].x - THahgwCtmiU[eksILpqVwY].x) * (THahgwCtmiU[tdur8D0o].x - THahgwCtmiU[eksILpqVwY].x) + (THahgwCtmiU[tdur8D0o].y - THahgwCtmiU[eksILpqVwY].y) * (THahgwCtmiU[tdur8D0o].y - THahgwCtmiU[eksILpqVwY].y);
                if (OvkTIuGrhK > YlprBHU)
                    YlprBHU = OvkTIuGrhK;
            }
            tdur8D0o = tdur8D0o + 1;
        };
    }
    YlprBHU = sqrt (YlprBHU);
    printf ("%.4lf", YlprBHU);
    return 0;
}

