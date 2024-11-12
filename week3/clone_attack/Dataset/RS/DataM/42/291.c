void  main () {
    int n, K2v8zUtQBJL, u2JmxG, eFhaiNweH0;
    int qrf0Fv [100000];
    scanf ("%d\n", &n);
    for (K2v8zUtQBJL = 0; (n - 1) >= K2v8zUtQBJL; K2v8zUtQBJL = K2v8zUtQBJL +1)
        scanf ("%d", &qrf0Fv[K2v8zUtQBJL]);
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
    scanf ("%d", &u2JmxG);
    for (K2v8zUtQBJL = 0; (n - 1) >= K2v8zUtQBJL; K2v8zUtQBJL = K2v8zUtQBJL +1)
        if (!(u2JmxG != qrf0Fv[K2v8zUtQBJL]))
            qrf0Fv[K2v8zUtQBJL] = 'a';
    if (!(1 != n)) {
        if (qrf0Fv[0] != 'a')
            printf ("%d", qrf0Fv[0]);
    }
    else {
        for (K2v8zUtQBJL = 0; K2v8zUtQBJL <= (n - 1); K2v8zUtQBJL = K2v8zUtQBJL +1) {
            if (qrf0Fv[K2v8zUtQBJL] != 'a') {
                printf ("%d", qrf0Fv[K2v8zUtQBJL]);
                for (eFhaiNweH0 = (K2v8zUtQBJL +1); eFhaiNweH0 <= (n - 1); eFhaiNweH0 = eFhaiNweH0 + 1)
                    if (qrf0Fv[eFhaiNweH0] != 'a')
                        printf (" %d", qrf0Fv[eFhaiNweH0]);
                break;
            };
        };
    }
    printf ("\n");
}

