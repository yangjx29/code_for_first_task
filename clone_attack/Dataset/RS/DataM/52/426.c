void  main () {
    int UYx0mX7;
    int PyZQXAj;
    int CBSEhrK8Aag;
    int a [100];
    scanf ("%d%d", &CBSEhrK8Aag, &PyZQXAj);
    for (UYx0mX7 = (845 - 845); UYx0mX7 < CBSEhrK8Aag; UYx0mX7++) {
        scanf ("%d", &a[UYx0mX7]);
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
        UYx0mX7 = 0;
        while (PyZQXAj > UYx0mX7) {
            out[UYx0mX7] = &a[CBSEhrK8Aag -PyZQXAj+UYx0mX7];
            UYx0mX7++;
        };
    }
    for (UYx0mX7 = PyZQXAj; UYx0mX7 < CBSEhrK8Aag; UYx0mX7++) {
        out[UYx0mX7] = &a[UYx0mX7 -PyZQXAj];
    }
    {
        UYx0mX7 = 0;
        while (CBSEhrK8Aag -1 > UYx0mX7) {
            printf ("%d ", *out[UYx0mX7]);
            UYx0mX7++;
        };
    }
    printf ("%d", *out[CBSEhrK8Aag -1]);
}

