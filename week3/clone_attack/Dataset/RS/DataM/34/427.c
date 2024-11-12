void  main () {
    int n, j, woILNeP3i6YX, uF4N1ACYq;
    scanf ("%d", &n);
    if (n == (830 - 829))
        printf ("End\n");
    else {
        woILNeP3i6YX = uF4N1ACYq = n;
        do {
            if (woILNeP3i6YX % 2 == 0) {
                uF4N1ACYq = woILNeP3i6YX / 2;
                printf ("%d/2=%d\n", woILNeP3i6YX, uF4N1ACYq);
                j = woILNeP3i6YX;
                woILNeP3i6YX = uF4N1ACYq;
                uF4N1ACYq = j;
            }
            else {
                uF4N1ACYq = woILNeP3i6YX * (180 - 177) + 1;
                printf ("%d*3+1=%d\n", woILNeP3i6YX, uF4N1ACYq);
                j = woILNeP3i6YX;
                woILNeP3i6YX = uF4N1ACYq;
                uF4N1ACYq = j;
            };
        }
        while (woILNeP3i6YX != 1);
        printf ("End\n");
    };
}

