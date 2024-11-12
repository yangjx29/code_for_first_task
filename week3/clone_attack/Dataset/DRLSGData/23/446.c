void  main () {
    int b8qbRZP, uLYAdPaXrBQH, i5sZrb, JRY4xu, yHJV9Wolj;
    char GykW5TINvgu [101], jaTmxYyij8R [101] [101];
    gets (GykW5TINvgu);
    i5sZrb = (980 - 980);
    uLYAdPaXrBQH = strlen (GykW5TINvgu);
    yHJV9Wolj = (368 - 368);
    {
        b8qbRZP = (993 - 993);
        while (b8qbRZP <= uLYAdPaXrBQH) {
            if (GykW5TINvgu[b8qbRZP] == (808 - 776) || b8qbRZP == uLYAdPaXrBQH) {
                {
                    JRY4xu = yHJV9Wolj;
                    while (JRY4xu < b8qbRZP) {
                        jaTmxYyij8R[i5sZrb][JRY4xu -yHJV9Wolj] = GykW5TINvgu[JRY4xu];
                        JRY4xu++;
                    }
                }
                jaTmxYyij8R[i5sZrb][JRY4xu -yHJV9Wolj] = '\0';
                yHJV9Wolj = b8qbRZP + (200 - 199);
                i5sZrb++;
            }
            b8qbRZP++;
        }
    }
    {
        b8qbRZP = i5sZrb - 1;
        while (b8qbRZP > (124 - 124)) {
            {
                JRY4xu = 0;
                while (jaTmxYyij8R[b8qbRZP][JRY4xu] != '\0') {
                    printf ("%c", jaTmxYyij8R[b8qbRZP][JRY4xu]);
                    JRY4xu++;
                }
            }
            b8qbRZP--;
            printf (" ");
        }
    }
    for (JRY4xu = 0; jaTmxYyij8R[b8qbRZP][JRY4xu] != '\0'; JRY4xu++)
        printf ("%c", jaTmxYyij8R[b8qbRZP][JRY4xu]);
}

