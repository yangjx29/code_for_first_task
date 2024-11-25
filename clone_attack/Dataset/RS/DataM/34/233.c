void  main () {
    int l12N5hs, b;
    scanf ("%d", &l12N5hs);
    for (l12N5hs = l12N5hs; !(1 == l12N5hs);) {
        if (!(0 != l12N5hs % 2)) {
            b = l12N5hs / 2;
            printf ("%d/2=%d\n", l12N5hs, b);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            l12N5hs = b;
        }
        else {
            if (l12N5hs % 2 != 0) {
                b = l12N5hs * 3 + 1;
                printf ("%d*3+1=%d\n", l12N5hs, b);
                l12N5hs = b;
            };
        };
    }
    if (l12N5hs == 1)
        printf ("End");
}

