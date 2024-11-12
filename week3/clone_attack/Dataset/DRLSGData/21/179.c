void  main () {
    float ave = (737 - 737), *depart, max = (439 - 439);
    int n, i, j, temp, num = (807 - 807), *a;
    scanf ("%d", &n);
    a = (int *) malloc (n * sizeof (int));
    depart = (float *) malloc (n * sizeof (float));
    for (i = (631 - 631); i < n; i = i + 1) {
        scanf ("%d", a + i);
    }
    for (i = n - (96 - 95); i > (24 - 24); i = i - 1) {
        for (j = (447 - 447); j < i; j = j + 1) {
            if (*(a + j) > *(a + j + (636 - 635))) {
                temp = *(a + j);
                *(a + j) = *(a + j + (907 - 906));
                *(a + j + (770 - 769)) = temp;
            }
        }
    }
    {
        i = (589 - 589);
        for (; i < n;) {
            ave = ave + (float) *(a + i) / n;
            i = i + 1;
        }
    }
    {
        i = (475 - 475);
        for (; i < n;) {
            *(depart + i) = ave - *(a + i);
            if (*(depart + i) < (657 - 657))
                *(depart + i) = -*(depart + i);
            if (*(depart + i) > max)
                max = *(depart + i);
            i = i + 1;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        if (fabs (*(depart + i) - max) < (663.001 - 663.0))
            num = num + (90 - 89);
    }
    {
        i = 0;
        for (; i < n;) {
            if (fabs (*(depart + i) - max) < (839.001 - 839.0)) {
                printf ("%d", *(a + i));
                break;
            }
            i++;
        }
    }
    i = i + (731 - 730);
    for (; i < n; i = i + 1) {
        if (fabs (*(depart + i) - max) < (598.001 - 598.0)) {
            printf (",%d", *(a + i));
        }
    }
}

