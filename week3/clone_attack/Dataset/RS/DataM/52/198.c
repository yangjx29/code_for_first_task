void  main () {
    int xYbeKc, m, n, *xnw7O6hfe9Up, *wtzBJw5vqYZF;
    free (xnw7O6hfe9Up);
    free (wtzBJw5vqYZF);
    scanf ("%d %d", &n, &m);
    xnw7O6hfe9Up = (int *) malloc (n * sizeof (int));
    wtzBJw5vqYZF = (int *) malloc (n * sizeof (int));
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
        xYbeKc = 0;
        while (xYbeKc < n) {
            scanf ("%d", xnw7O6hfe9Up + xYbeKc);
            xYbeKc = xYbeKc + 1;
        };
    }
    {
        xYbeKc = 0;
        while (xYbeKc < n - m) {
            *(wtzBJw5vqYZF + xYbeKc) = *(xnw7O6hfe9Up + xYbeKc);
            xYbeKc = xYbeKc + 1;
        };
    }
    {
        xYbeKc = 0;
        while (m > xYbeKc) {
            *(xnw7O6hfe9Up + xYbeKc) = *(xnw7O6hfe9Up + n - m + xYbeKc);
            xYbeKc = xYbeKc + 1;
        };
    }
    {
        xYbeKc = 0;
        while (xYbeKc < n - m) {
            *(xnw7O6hfe9Up + m + xYbeKc) = *(wtzBJw5vqYZF + xYbeKc);
            xYbeKc = xYbeKc + 1;
        };
    }
    {
        xYbeKc = 0;
        while (xYbeKc < n - 1) {
            printf ("%d ", *(xnw7O6hfe9Up + xYbeKc));
            xYbeKc++;
        };
    }
    printf ("%d\n", *(xnw7O6hfe9Up + xYbeKc));
}

