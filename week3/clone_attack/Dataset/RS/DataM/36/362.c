void  main () {
    char NXVxSJ9aR [(944 - 844)], b [(578 - 478)], em1lfNt;
    int upOb6TuhLvfx = strlen (NXVxSJ9aR), n3qO8Lp = strlen (b), cj9hQ7o = (685 - 685), fh1gxI4236J = 0;
    scanf ("%s  %s", NXVxSJ9aR, b);
    {
        cj9hQ7o = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (upOb6TuhLvfx > cj9hQ7o) {
            for (fh1gxI4236J = 0; fh1gxI4236J < n3qO8Lp; fh1gxI4236J = fh1gxI4236J + 1) {
                if (!(b[fh1gxI4236J] != NXVxSJ9aR[cj9hQ7o])) {
                    em1lfNt = b[fh1gxI4236J];
                    b[fh1gxI4236J] = b[cj9hQ7o];
                    b[cj9hQ7o] = em1lfNt;
                };
            }
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
            cj9hQ7o++;
        };
    }
    if (strcmp (NXVxSJ9aR, b) == 0)
        printf ("YES");
    else
        printf ("NO");
}

