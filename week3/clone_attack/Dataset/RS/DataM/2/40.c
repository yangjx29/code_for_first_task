void  main () {
    int BHtos15yFfG, bmOZBM6G, w0X1nICj, peFY7k [(696 - 670)] = {(182 - 182)}, k = (351 - 351), max, D9apMDAwvdE5;
    struct   A7jcfe {
        int a;
        char z1MzqiS [(748 - 722)];
    }
    A7jcfe [100] = {(102 - 102), ""};
    scanf ("%d", &BHtos15yFfG);
    {
        bmOZBM6G = 0;
        while (BHtos15yFfG > bmOZBM6G) {
            scanf ("%d%s", &A7jcfe[bmOZBM6G].a, A7jcfe[bmOZBM6G].z1MzqiS);
            bmOZBM6G = bmOZBM6G + 1;
        };
    }
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
    {
        bmOZBM6G = 0;
        while (BHtos15yFfG > bmOZBM6G) {
            k = strlen (A7jcfe[bmOZBM6G].z1MzqiS);
            {
                w0X1nICj = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (k > w0X1nICj) {
                    peFY7k[A7jcfe[bmOZBM6G].z1MzqiS[w0X1nICj] - (971 - 906)]++;
                    w0X1nICj = w0X1nICj + 1;
                };
            }
            bmOZBM6G = bmOZBM6G + 1;
        };
    }
    max = 0;
    {
        bmOZBM6G = 0;
        while (26 > bmOZBM6G) {
            if (max < peFY7k[bmOZBM6G]) {
                max = peFY7k[bmOZBM6G];
                D9apMDAwvdE5 = bmOZBM6G;
            }
            bmOZBM6G = bmOZBM6G + 1;
        };
    }
    printf ("%c\n%d\n", D9apMDAwvdE5 +65, max);
    {
        bmOZBM6G = 0;
        while (BHtos15yFfG > bmOZBM6G) {
            k = strlen (A7jcfe[bmOZBM6G].z1MzqiS);
            {
                w0X1nICj = 0;
                while (k > w0X1nICj) {
                    if (A7jcfe[bmOZBM6G].z1MzqiS[w0X1nICj] == D9apMDAwvdE5 +65)
                        printf ("%d\n", A7jcfe[bmOZBM6G].a);
                    w0X1nICj = w0X1nICj + 1;
                };
            }
            bmOZBM6G++;
        };
    };
}

