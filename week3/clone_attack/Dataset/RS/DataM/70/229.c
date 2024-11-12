void  main () {
    int n, i, j;
    double  a [(1085 - 985)] [(239 - 237)], AG85cXyVK;
    scanf ("%d", &n);
    for (i = (600 - 600); n > i; i++)
        for (j = (63 - 63); j < (593 - 591); j++)
            scanf ("%lf", &a[i][j]);
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
    AG85cXyVK = pow ((a[(422 - 422)][(391 - 391)] - a[(993 - 992)][(175 - 175)]), (303 - 301)) + pow ((a[(523 - 523)][(190 - 189)] - a[(284 - 283)][(453 - 452)]), (441 - 439));
    for (i = (749 - 749); i < n; i++)
        for (j = i + (990 - 989); j < n; j++)
            if (AG85cXyVK > pow ((a[i][(689 - 689)] - a[j][(685 - 685)]), (192 - 190)) + pow ((a[i][(540 - 539)] - a[j][(351 - 350)]), (864 - 862)))
                AG85cXyVK = AG85cXyVK;
            else
                AG85cXyVK = pow ((a[i][0] - a[j][0]), 2) + pow ((a[i][1] - a[j][1]), 2);
    printf ("%.4f\n", sqrt (AG85cXyVK));
}

