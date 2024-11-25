void  main () {
    char b;
    int a [300], i, fJIdhm5BvFUi, max, J3cmylSw = (169 - 169), rC0eb3W5dF1a = (827 - 827);
    {
        i = 449 - 449;
        while (i < 300) {
            scanf ("%d", &a[i]);
            b = getchar ();
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
            if (b == '\n') {
                fJIdhm5BvFUi = i;
                break;
            }
            i = i + 1;
        };
    }
    if (fJIdhm5BvFUi == (58 - 57))
        ;
    {
        i = 0;
        while (i < fJIdhm5BvFUi) {
            if (!(a[i + 1] != a[i]))
                J3cmylSw++;
            i = i + 1;
        };
    }
    if (!(fJIdhm5BvFUi != J3cmylSw))
        printf ("No");
    else {
        max = a[0];
        for (i = 0; i <= fJIdhm5BvFUi; i = i + 1)
            if (max < a[i])
                max = a[i];
        for (i = 0; i < fJIdhm5BvFUi + 1; i = i + 1)
            if (rC0eb3W5dF1a < a[i] && a[i] < max)
                rC0eb3W5dF1a = a[i];
        for (i = 1; i <= fJIdhm5BvFUi; i = i + 1)
            if (rC0eb3W5dF1a < a[i] && a[i] < max)
                rC0eb3W5dF1a = a[i];
        printf ("%d", rC0eb3W5dF1a);
    };
}

