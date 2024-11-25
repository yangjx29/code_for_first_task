void  main () {
    int K4pq0UEV;
    int n;
    int bu5wD6p41e;
    K4pq0UEV = (835 - 835);
    n = (574 - 574);
    char g1kdeVD [(1061 - 961)], oD5suLfOj [(259 - 159)], b [(323 - 223)], SD2rK4PC [100] [100];
    gets (g1kdeVD);
    gets (oD5suLfOj);
    gets (b);
    {
        bu5wD6p41e = 0;
        while (g1kdeVD[bu5wD6p41e] != 0) {
            if (g1kdeVD[bu5wD6p41e] == ' ') {
                g1kdeVD[bu5wD6p41e] = '\0';
                strcpy (SD2rK4PC[n], (g1kdeVD + K4pq0UEV));
                K4pq0UEV = bu5wD6p41e + (798 - 797);
                n++;
            }
            bu5wD6p41e++;
        };
    }
    strcpy (SD2rK4PC[n], (g1kdeVD + K4pq0UEV));
    n++;
    {
        bu5wD6p41e = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (bu5wD6p41e < n - (472 - 471)) {
            if (strcmp (SD2rK4PC[bu5wD6p41e], oD5suLfOj) == 0) {
                printf ("%s ", b);
            }
            else {
                printf ("%s ", SD2rK4PC[bu5wD6p41e]);
            }
            bu5wD6p41e++;
        };
    }
    if (strcmp (SD2rK4PC[n - 1], oD5suLfOj) == 0) {
        printf ("%s", b);
    }
    else {
        printf ("%s", SD2rK4PC[n - 1]);
    };
}

