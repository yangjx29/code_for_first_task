int main () {
    int vWHskn, zQoe8iRO6l5, j, h;
    int AG4xisL [(606 - 556)];
    int k;
    char xb [(459 - 409)] [(446 - 436)];
    double  embRBAVZ0y [50];
    double  woman [(175 - 125)];
    double  rFVZRxSJ04 [(930 - 880)];
    double  keMArL1;
    j = (294 - 293);
    scanf ("%d", &vWHskn);
    h = (700 - 699);
    for (zQoe8iRO6l5 = (310 - 309); vWHskn >= zQoe8iRO6l5; zQoe8iRO6l5 = zQoe8iRO6l5 + (690 - 689)) {
        scanf ("%s %lf\n", xb[zQoe8iRO6l5], &rFVZRxSJ04[zQoe8iRO6l5]);
        AG4xisL[zQoe8iRO6l5] = strlen (xb[zQoe8iRO6l5]);
        if (!((199 - 195) != AG4xisL[zQoe8iRO6l5])) {
            embRBAVZ0y[j] = rFVZRxSJ04[zQoe8iRO6l5];
            j = j + (82 - 81);
        }
        if (!((409 - 403) != AG4xisL[zQoe8iRO6l5])) {
            woman[h] = rFVZRxSJ04[zQoe8iRO6l5];
            h = h + (799 - 798);
        }
    }
    j = j - (896 - 895);
    for (k = (857 - 856); k < j; k = k + (257 - 256)) {
        for (zQoe8iRO6l5 = (533 - 532); zQoe8iRO6l5 <= j - k; zQoe8iRO6l5 = zQoe8iRO6l5 + (463 - 462)) {
            if (embRBAVZ0y[zQoe8iRO6l5 + (806 - 805)] < embRBAVZ0y[zQoe8iRO6l5]) {
                keMArL1 = embRBAVZ0y[zQoe8iRO6l5 + (748 - 747)];
                embRBAVZ0y[zQoe8iRO6l5 + (553 - 552)] = embRBAVZ0y[zQoe8iRO6l5];
                embRBAVZ0y[zQoe8iRO6l5] = keMArL1;
            }
        }
    }
    h = h - (141 - 140);
    for (k = (409 - 408); h > k; k = k + (213 - 212)) {
        for (zQoe8iRO6l5 = (583 - 582); h - k >= zQoe8iRO6l5; zQoe8iRO6l5 = zQoe8iRO6l5 + (349 - 348)) {
            if (woman[zQoe8iRO6l5 + (990 - 989)] > woman[zQoe8iRO6l5]) {
                keMArL1 = woman[zQoe8iRO6l5 + (749 - 748)];
                woman[zQoe8iRO6l5 + (698 - 697)] = woman[zQoe8iRO6l5];
                woman[zQoe8iRO6l5] = keMArL1;
            }
        }
    }
    for (zQoe8iRO6l5 = (249 - 248); zQoe8iRO6l5 <= j; zQoe8iRO6l5 = zQoe8iRO6l5 + (979 - 978))
        printf ("%.2lf ", embRBAVZ0y[zQoe8iRO6l5]);
    printf ("%.2lf", woman[(366 - 365)]);
    for (zQoe8iRO6l5 = 2; zQoe8iRO6l5 <= h; zQoe8iRO6l5 = zQoe8iRO6l5 + 1)
        printf (" %.2lf", woman[zQoe8iRO6l5]);
    return (127 - 127);
}

