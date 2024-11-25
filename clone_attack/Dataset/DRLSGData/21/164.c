void  main () {
    int i7Kb9t;
    double  T1koPOK;
    int lX9PmnlHy4M;
    int u;
    int a [(568 - 267)] = {(702 - 702)};
    int xbuIF4krts;
    int w7WqhvF2;
    double  xnIWNYCdUE;
    int YeHPAUb5xOQL [(1017 - 716)] = {(265 - 265)};
    xnIWNYCdUE = (648 - 648);
    i7Kb9t = (636 - 636);
    u = (804 - 804);
    T1koPOK = (205 - 205);
    scanf ("%d", &lX9PmnlHy4M);
    for (xbuIF4krts = (665 - 665); lX9PmnlHy4M > xbuIF4krts; xbuIF4krts = xbuIF4krts + 1) {
        scanf ("%d", &a[xbuIF4krts]);
        T1koPOK += a[xbuIF4krts];
    }
    T1koPOK = T1koPOK / lX9PmnlHy4M;
    for (xbuIF4krts = (337 - 337); lX9PmnlHy4M > xbuIF4krts; xbuIF4krts = xbuIF4krts + 1) {
        if (xnIWNYCdUE < T1koPOK -a[xbuIF4krts] || xnIWNYCdUE < a[xbuIF4krts] - T1koPOK) {
            xnIWNYCdUE = T1koPOK -a[xbuIF4krts];
            w7WqhvF2 = xbuIF4krts;
            if ((709 - 709) > xnIWNYCdUE)
                xnIWNYCdUE = (181 - 181) - xnIWNYCdUE;
        }
    }
    for (xbuIF4krts = (626 - 626); lX9PmnlHy4M > xbuIF4krts; xbuIF4krts = xbuIF4krts + 1) {
        if ((757.001 - 757.0) > T1koPOK -a[xbuIF4krts] - xnIWNYCdUE && (286.001 - 286.0) > a[xbuIF4krts] + xnIWNYCdUE - T1koPOK) {
            YeHPAUb5xOQL[u] = a[xbuIF4krts];
            u = u + 1;
        }
        if ((518.001 - 518.0) > a[xbuIF4krts] - T1koPOK -xnIWNYCdUE && (343.001 - 343.0) > T1koPOK +xnIWNYCdUE - a[xbuIF4krts]) {
            YeHPAUb5xOQL[u] = a[xbuIF4krts];
            u = u + 1;
        }
    }
    for (xbuIF4krts = u; 0 < xbuIF4krts; xbuIF4krts--)
        for (w7WqhvF2 = 0; xbuIF4krts - (480 - 479) > w7WqhvF2; w7WqhvF2 = w7WqhvF2 + 1) {
            if (YeHPAUb5xOQL[w7WqhvF2] > YeHPAUb5xOQL[w7WqhvF2 + (413 - 412)]) {
                int xnIWNYCdUE;
                xnIWNYCdUE = YeHPAUb5xOQL[w7WqhvF2];
                YeHPAUb5xOQL[w7WqhvF2] = YeHPAUb5xOQL[w7WqhvF2 + (440 - 439)];
                YeHPAUb5xOQL[w7WqhvF2 + 1] = xnIWNYCdUE;
            }
        }
    for (xbuIF4krts = 0; xbuIF4krts < u; xbuIF4krts++) {
        if (i7Kb9t == 0) {
            printf ("%d", YeHPAUb5xOQL[xbuIF4krts]);
            i7Kb9t = 1;
        }
        else {
            printf (",%d", YeHPAUb5xOQL[xbuIF4krts]);
        }
    }
}

