int main () {
    int a, USaNRVUX9Y [100], xVyn5UCLSs9R, m [100];
    scanf ("%d", &a);
    for (xVyn5UCLSs9R = 0; xVyn5UCLSs9R < a; xVyn5UCLSs9R = xVyn5UCLSs9R + 1) {
        scanf ("%d", &(USaNRVUX9Y[xVyn5UCLSs9R]));
        m[xVyn5UCLSs9R] = 0;
    }
    for (int Lx7Ishjb2YH = 0;
    Lx7Ishjb2YH < a; Lx7Ishjb2YH = Lx7Ishjb2YH +1) {
        xVyn5UCLSs9R = Lx7Ishjb2YH +1;
        while (xVyn5UCLSs9R < a) {
            if (!(USaNRVUX9Y[xVyn5UCLSs9R] != USaNRVUX9Y[Lx7Ishjb2YH]))
                m[xVyn5UCLSs9R]++;
            xVyn5UCLSs9R = xVyn5UCLSs9R + 1;
        };
    }
    printf ("%d", USaNRVUX9Y[0]);
    for (xVyn5UCLSs9R = 1; xVyn5UCLSs9R < a; xVyn5UCLSs9R = xVyn5UCLSs9R + 1)
        if (m[xVyn5UCLSs9R] == 0)
            printf (",%d", USaNRVUX9Y[xVyn5UCLSs9R]);
    return 0;
}

