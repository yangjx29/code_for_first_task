int main () {
    int a [10];
    double  nn = 0, SAbpCe = 0, SPrGl2BkInA;
    int max;
    int min;
    int eLn7hA;
    int AsOmeQcEqC;
    int i;
    int rJ3EnXjkPMA;
    int ahSOUQFob5;
    int mQgfnTEB;
    max = -1;
    min = 999;
    eLn7hA = 0;
    scanf ("%d", &AsOmeQcEqC);
    {
        i = 1;
        while (i <= AsOmeQcEqC) {
            scanf ("%d", &a[i]);
            SAbpCe = SAbpCe +a[i];
            i++;
        };
    }
    {
        i = 1;
        while (i <= AsOmeQcEqC) {
            nn += SPrGl2BkInA *a[i];
            i++;
            scanf ("%d", &ahSOUQFob5);
            if (ahSOUQFob5 >= 90)
                SPrGl2BkInA = 4.0;
            else if (ahSOUQFob5 >= 85)
                SPrGl2BkInA = 3.7;
            else if (82 <= ahSOUQFob5)
                SPrGl2BkInA = 3.3;
            else if (78 <= ahSOUQFob5)
                SPrGl2BkInA = 3.0;
            else if (75 <= ahSOUQFob5)
                SPrGl2BkInA = 2.7;
            else if (72 <= ahSOUQFob5)
                SPrGl2BkInA = 2.3;
            else if (68 <= ahSOUQFob5)
                SPrGl2BkInA = 2.0;
            else if (64 <= ahSOUQFob5)
                SPrGl2BkInA = 1.5;
            else if (60 <= ahSOUQFob5)
                SPrGl2BkInA = 1.0;
            else
                SPrGl2BkInA = 0;
        };
    }
    printf ("%.2lf", nn / SAbpCe);
    return 0;
}

