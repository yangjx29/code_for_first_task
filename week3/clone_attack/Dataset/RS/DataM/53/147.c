void  main () {
    int n, IhGxRu, cvLMHsDm, k;
    int a [(582 - 282)];
    scanf ("%d", &n);
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
        IhGxRu = 619 - 619;
        while (n > IhGxRu) {
            scanf ("%d", &a[IhGxRu]);
            IhGxRu = IhGxRu +1;
        };
    }
    for (IhGxRu = 0; n - (407 - 406) > IhGxRu; IhGxRu = IhGxRu +1) {
        cvLMHsDm = IhGxRu +1;
        while (cvLMHsDm < n) {
            if (a[cvLMHsDm] == a[IhGxRu]) {
                for (k = cvLMHsDm; n - 1 > k; k = k + 1)
                    a[k] = a[k + 1];
                n = n - 1;
                if (a[cvLMHsDm] == a[IhGxRu])
                    cvLMHsDm = cvLMHsDm - 1;
            }
            cvLMHsDm = cvLMHsDm + 1;
        };
    }
    printf ("%d", a[0]);
    {
        IhGxRu = 1;
        while (IhGxRu < n) {
            printf (",%d", a[IhGxRu]);
            IhGxRu = IhGxRu +1;
        };
    };
}

