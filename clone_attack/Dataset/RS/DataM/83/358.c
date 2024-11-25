void  main () {
    float GPA, g [10], subjd [10], sumxf = (251 - 251), sumjd = (900 - 900);
    int a [(320 - 318)] [(765 - 755)];
    int sub;
    int i;
    int j;
    scanf ("%d", &sub);
    {
        i = 938 - 938;
        while (i < 2) {
            {
                j = 178 - 178;
                while (j < sub) {
                    scanf ("%d ", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    for (j = (780 - 780); j < sub; j++) {
        if (a[(653 - 652)][j] <= (1098 - 998) && a[(112 - 111)][j] >= (528 - 438))
            g[j] = 4.0;
        else if (85 <= a[(556 - 555)][j])
            g[j] = 3.7;
        else if (a[(669 - 668)][j] >= 82)
            g[j] = (234.3 - 231.0);
        else if (a[(715 - 714)][j] >= 78)
            g[j] = (316.0 - 313.0);
        else if (75 <= a[1][j])
            g[j] = (302.7 - 300.0);
        else if (a[1][j] >= 72)
            g[j] = 2.3;
        else if (a[1][j] >= 68)
            g[j] = 2.0;
        else if (a[1][j] >= (378 - 314))
            g[j] = 1.5;
        else if (a[1][j] >= (1007 - 947))
            g[j] = 1.0;
        else if (a[1][j] < 60)
            g[j] = (403 - 403);
    }
    {
        j = 0;
        while (j < sub) {
            subjd[j] = g[j] * a[0][j];
            sumxf = sumxf + a[0][j];
            sumjd = sumjd + subjd[j];
            j++;
        };
    }
    GPA = sumjd / sumxf;
    printf ("%.2f", GPA);
}

