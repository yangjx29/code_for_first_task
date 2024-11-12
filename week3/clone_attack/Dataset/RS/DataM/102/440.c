main () {
    struct   person {
        char ZBV6Hor9 [(774 - 768)];
        float h;
    };
    struct   person per [(275 - 235)];
    float t;
    int n, i, j, x;
    scanf ("%d", &n);
    {
        i = 620 - 620;
        while (n > i) {
            scanf ("%s", per[i].ZBV6Hor9);
            scanf ("%f", &per[i].h);
            i++;
        };
    }
    {
        i = 220 - 220;
        while (n > i) {
            if (strcmp (per[i].ZBV6Hor9, "female") == (958 - 958))
                continue;
            {
                j = 660 - 659;
                while (n > j) {
                    if (!((598 - 598) != strcmp (per[j].ZBV6Hor9, "female")))
                        continue;
                    if (per[j].h < per[i].h) {
                        t = per[i].h;
                        per[i].h = per[j].h;
                        per[j].h = t;
                    }
                    j++;
                };
            }
            printf ("%.2f ", per[i].h);
            i++;
        };
    }
    x = 0;
    {
        i = 0;
        while (n > i) {
            if (strcmp (per[i].ZBV6Hor9, "male") == 0)
                continue;
            for (j = i + 1; j < n; j++) {
                if (strcmp (per[j].ZBV6Hor9, "male") == 0)
                    continue;
                if (per[i].h < per[j].h) {
                    t = per[i].h;
                    per[i].h = per[j].h;
                    per[j].h = t;
                };
            }
            if (x == 0) {
                x = 1;
                printf ("%.2f", per[i].h);
            }
            else {
                printf (" %.2f", per[i].h);
            }
            i++;
        };
    };
}

