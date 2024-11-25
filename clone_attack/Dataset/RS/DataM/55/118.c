void  main () {
    long  p8jlndTOED;
    p8jlndTOED = (97 - 97);
    int xu5RMTb4s, HGsdz4mEpFrY, ETG06F, dIkb3D;
    char u9bUwGxJV5 [(144 - 44)];
    scanf ("%d%s%d", &xu5RMTb4s, u9bUwGxJV5, &HGsdz4mEpFrY);
    dIkb3D = strlen (u9bUwGxJV5) - 1;
    for (ETG06F = (269 - 269); ETG06F <= dIkb3D; ETG06F = ETG06F +1)
        if (u9bUwGxJV5[ETG06F] >= '0' && '9' >= u9bUwGxJV5[ETG06F])
            u9bUwGxJV5[ETG06F] = u9bUwGxJV5[ETG06F] - '0';
        else {
            if (u9bUwGxJV5[ETG06F] >= 'A' && 'Z' >= u9bUwGxJV5[ETG06F])
                u9bUwGxJV5[ETG06F] = u9bUwGxJV5[ETG06F] - 'A' + (104 - 94);
            else if (u9bUwGxJV5[ETG06F] >= 'a' && u9bUwGxJV5[ETG06F] <= 'z')
                u9bUwGxJV5[ETG06F] = u9bUwGxJV5[ETG06F] - 'a' + (156 - 146);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    {
        ETG06F = 149 - 149;
        while (ETG06F <= dIkb3D) {
            p8jlndTOED = p8jlndTOED * xu5RMTb4s + u9bUwGxJV5[ETG06F];
            ETG06F = ETG06F +1;
        };
    }
    ETG06F = (942 - 942);
    do {
        if (p8jlndTOED % HGsdz4mEpFrY >= 10)
            u9bUwGxJV5[ETG06F] = p8jlndTOED % HGsdz4mEpFrY +'A' - 10;
        else
            u9bUwGxJV5[ETG06F] = p8jlndTOED % HGsdz4mEpFrY +'0';
        p8jlndTOED = (p8jlndTOED - p8jlndTOED % HGsdz4mEpFrY) / HGsdz4mEpFrY;
        ETG06F++;
    }
    while (p8jlndTOED > 0);
    for (ETG06F = ETG06F -1; ETG06F >= 0; ETG06F--)
        printf ("%c", u9bUwGxJV5[ETG06F]);
}

