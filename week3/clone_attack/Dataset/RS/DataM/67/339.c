int main () {
    int n, jJR7Tw8H0qo3, cOLIhl;
    float iUkKHL4BRu [1000], some [1000];
    scanf ("%d", &n);
    {
        jJR7Tw8H0qo3 = 843 - 843;
        while (jJR7Tw8H0qo3 < n) {
            scanf ("%f %f", &iUkKHL4BRu[jJR7Tw8H0qo3], &some[jJR7Tw8H0qo3]);
            jJR7Tw8H0qo3 = jJR7Tw8H0qo3 + 1;
        };
    }
    {
        cOLIhl = 1;
        while (n > cOLIhl) {
            if (0.05 < ((some[cOLIhl] / iUkKHL4BRu[cOLIhl]) - (some[0] / iUkKHL4BRu[0]))) {
                printf ("better\n");
            }
            else if (((some[0] / iUkKHL4BRu[0]) - (some[cOLIhl] / iUkKHL4BRu[cOLIhl])) > 0.05) {
                printf ("worse\n");
            }
            else {
                printf ("same\n");
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cOLIhl = cOLIhl + 1;
        };
    }
    return 0;
}

