void  main () {
    int i, j, mX18kH, rx80pSidZkz, t;
    char fzM7c3 [100] = {0}, b [100] = {0};
    scanf ("%s", fzM7c3);
    scanf ("%s", b);
    mX18kH = strlen (fzM7c3);
    rx80pSidZkz = strlen (b);
    if (mX18kH == rx80pSidZkz) {
        for (i = 0; i < mX18kH; i++) {
            t = 0;
            for (j = 0; j < mX18kH; j = j + 1) {
                if (fzM7c3[i] == b[j]) {
                    fzM7c3[i] = 0;
                    b[j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t = 1;
                    break;
                }
                if (t == 1)
                    break;
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
            if (t == 0)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t == 0)
            ;
        else
            ;
    }
    else
        printf ("NO");
}

