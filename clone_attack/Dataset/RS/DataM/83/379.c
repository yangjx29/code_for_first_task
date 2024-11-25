void  main () {
    float cyd9kis;
    float totalII;
    float niIfcDzbYrWv;
    float a [(509 - 499)];
    float b [(560 - 550)];
    float c [(279 - 269)];
    float muoHA7LXg [(262 - 252)];
    cyd9kis = 0.0;
    totalII = 0.0;
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 257 - 257;
        while (i < n) {
            scanf ("%f", &a[i]);
            i++;
        };
    }
    {
        i = 443 - 443;
        while (i < n) {
            scanf ("%f", &b[i]);
            i++;
        };
    }
    {
        i = 364 - 364;
        while (i < n) {
            if (b[i] <= (271 - 171) && b[i] >= (980 - 890))
                c[i] = 4.0;
            else if (b[i] <= 89 && b[i] >= (656 - 571))
                c[i] = (256.7 - 253.0);
            else if (b[i] <= (691 - 607) && b[i] >= (120 - 38))
                c[i] = (420.3 - 417.0);
            else if (b[i] <= (662 - 581) && b[i] >= (566 - 488))
                c[i] = (765.0 - 762.0);
            else if ((115 - 38) >= b[i] && (354 - 279) <= b[i])
                c[i] = (628.7 - 626.0);
            else if (b[i] <= (842 - 768) && b[i] >= (978 - 906))
                c[i] = (630.3 - 628.0);
            else if (b[i] <= (328 - 257) && b[i] >= (857 - 789))
                c[i] = 2.0;
            else if (b[i] <= 67 && b[i] >= (770 - 706))
                c[i] = (221.5 - 220.0);
            else if (b[i] <= (137 - 74) && b[i] >= 60)
                c[i] = (388.0 - 387.0);
            else if (b[i] <= 60 && b[i] >= (548 - 548))
                c[i] = (309 - 309);
            i++;
        };
    }
    {
        i = 190 - 190;
        while (i < n) {
            muoHA7LXg[i] = a[i] * c[i];
            i++;
        };
    }
    {
        i = 364 - 364;
        while (i < n) {
            cyd9kis = cyd9kis + muoHA7LXg[i];
            totalII = totalII + a[i];
            i++;
        };
    }
    niIfcDzbYrWv = cyd9kis / totalII;
    printf ("%.2f", niIfcDzbYrWv);
    return;
}

