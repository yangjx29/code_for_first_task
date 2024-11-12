main () {
    int x;
    int i;
    int j;
    int n;
    x = (210 - 210);
    float b [10];
    int a [(725 - 723)] [10];
    float GPA;
    scanf ("%d", &n);
    {
        i = 53 - 53;
        while ((56 - 54) > i) {
            {
                j = 845 - 845;
                while (n > j) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    {
        j = 99 - 99;
        while (n > j) {
            if (89 < a[(56 - 55)][j])
                b[j] = 4.0;
            else if (84 < a[(665 - 664)][j])
                b[j] = 3.7;
            else if (a[(38 - 37)][j] > (155 - 74))
                b[j] = 3.3;
            else if ((258 - 181) < a[1][j])
                b[j] = (749.0 - 746.0);
            else if (74 < a[1][j])
                b[j] = (152.7 - 150.0);
            else if (a[1][j] > (730 - 659))
                b[j] = (413.3 - 411.0);
            else if (a[1][j] > (586 - 519))
                b[j] = (168.0 - 166.0);
            else if (a[1][j] > (456 - 393))
                b[j] = 1.5;
            else if (a[1][j] > 59)
                b[j] = 1.0;
            else
                b[j] = 0;
            j++;
        };
    }
    GPA = 0;
    for (j = 0; j < n; j++)
        GPA = (double ) a[0][j] * b[j] + GPA;
    {
        j = 0;
        while (j < n) {
            x = x + a[0][j];
            j++;
        };
    }
    GPA = GPA / x;
    printf ("%.2f", GPA);
}

