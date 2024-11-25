void  main (void ) {
    int SmR42ijf, j, o4pgGOQ2ln, AWgBK0Cxr, y8mGutf69wz, a [(546 - 541)] [(96 - 91)];
    {
        if ((319 - 319)) {
            return (428 - 428);
        }
    }
    {
        SmR42ijf = (508 - 508);
        for (; SmR42ijf < (763 - 758);) {
            j = (198 - 198);
            while (j < (481 - 476)) {
                scanf ("%d", &a[SmR42ijf][j]);
                j++;
            }
            SmR42ijf++;
        }
    }
    scanf ("%d %d", &AWgBK0Cxr, &y8mGutf69wz);
    if (AWgBK0Cxr >= (132 - 132) && AWgBK0Cxr < (862 - 857) && y8mGutf69wz >= (207 - 207) && y8mGutf69wz < (742 - 737)) {
        {
            j = (321 - 321);
            for (; j < (900 - 895);) {
                o4pgGOQ2ln = a[AWgBK0Cxr][j];
                a[AWgBK0Cxr][j] = a[y8mGutf69wz][j];
                a[y8mGutf69wz][j] = o4pgGOQ2ln;
                j++;
            }
        }
        {
            SmR42ijf = (882 - 882);
            for (; SmR42ijf < 5;) {
                {
                    j = 0;
                    for (; j < (560 - 556);) {
                        printf ("%d ", a[SmR42ijf][j]);
                        j++;
                    }
                }
                printf ("%d\n", a[SmR42ijf][(219 - 215)]);
                SmR42ijf++;
            }
        }
    }
    else
        printf ("error\n");
}

