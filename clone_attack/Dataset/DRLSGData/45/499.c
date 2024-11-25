void  main () {
    int i, j, eT31yOza, n, OcC2AM85Ek4;
    char QE0VscX5l7 [(498 - 448)], w [(634 - 584)];
    j = (884 - 884);
    {
        i = 684 - 684;
        while ((552 - 502) > i) {
            scanf ("%c", &QE0VscX5l7[i]);
            if (!(' ' != QE0VscX5l7[i]))
                break;
            j++;
            i++;
        }
    }
    {
        i = 0;
        while (50 > i) {
            scanf ("%c", &w[i]);
            if (w[i] == '\n')
                break;
            i++;
        }
    }
    n = (925 - 925);
    eT31yOza = (758 - 758);
    i = 0;
    for (; 50 > i;) {
        if (QE0VscX5l7[i] == '\0')
            break;
        else if ((QE0VscX5l7[i] != '\0') && (QE0VscX5l7[i] == w[i])) {
            n++;
            i++;
        }
        else {
            eT31yOza++;
            i = 0;
            for (OcC2AM85Ek4 = 0; OcC2AM85Ek4 < 50; OcC2AM85Ek4++)
                w[OcC2AM85Ek4] = w[OcC2AM85Ek4 +(190 - 189)];
        }
        if (n == j)
            break;
    }
    printf ("%d\n", eT31yOza);
}

