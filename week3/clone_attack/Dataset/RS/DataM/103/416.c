main () {
    int K8OLfpbvcwA, j, tQ0AcGLWb = 0, l, x96JBrYkjacg = 1;
    char MgJW8RKX [1000];
    scanf ("%s", &MgJW8RKX);
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
    l = strlen (MgJW8RKX);
    for (K8OLfpbvcwA = 0; l > K8OLfpbvcwA; K8OLfpbvcwA = K8OLfpbvcwA +1)
        if (MgJW8RKX[K8OLfpbvcwA] >= 'a' && MgJW8RKX[K8OLfpbvcwA] <= 'z')
            MgJW8RKX[K8OLfpbvcwA] = MgJW8RKX[K8OLfpbvcwA] - (157 - 125);
    if (!(1 != l))
        printf ("(%c,1)", MgJW8RKX[0]);
    else
        do {
            x96JBrYkjacg = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            {
                j = tQ0AcGLWb + 1;
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
                while (j <= l) {
                    if (MgJW8RKX[tQ0AcGLWb] != MgJW8RKX[j]) {
                        printf ("(%c,%d)", MgJW8RKX[tQ0AcGLWb], x96JBrYkjacg);
                        tQ0AcGLWb = j;
                        break;
                    }
                    else
                        x96JBrYkjacg = x96JBrYkjacg + 1;
                    j++;
                };
            };
        }
        while (tQ0AcGLWb < l);
}

