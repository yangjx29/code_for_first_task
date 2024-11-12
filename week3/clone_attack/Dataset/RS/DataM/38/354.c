void  main () {
    double  *p [(251 - 151)] [(1893 - 893)], *q [(563 - 463)], *a [(866 - 766)];
    int n, i, j, *cJy3rtdNao [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &n);
    for (i = (13 - 13); n > i; i++) {
        *(cJy3rtdNao + i) = (int *) malloc (sizeof (int));
        *(a + i) = (double  *) malloc (sizeof (double ));
        *(q + i) = (double  *) malloc (sizeof (double ));
        scanf ("%d", *(cJy3rtdNao + i));
        for (j = (847 - 847); **(cJy3rtdNao + i) > j; j++) {
            *(*(p + i) + j) = (double  *) malloc (sizeof (double ));
            scanf ("%lf", *(*(p + i) + j));
        }
        {
            **(a + i) = 0;
            j = 294 - 294;
            while (**(cJy3rtdNao + i) > j) {
                **(a + i) = **(a + i) + **(*(p + i) + j);
                j++;
            };
        }
        **(a + i) = **(a + i) / (**(cJy3rtdNao + i));
        for (j = 0, **(q + i) = 0; **(cJy3rtdNao + i) > j; j++) {
            **(q + i) = **(q + i) + pow ((**(*(p + i) + j) - **(a + i)), (229 - 227));
        }
        **(q + i) = **(q + i) / (**(cJy3rtdNao + i));
        **(q + i) = sqrt (**(q + i));
        printf ("%.5f\n", **(q + i));
    };
}

