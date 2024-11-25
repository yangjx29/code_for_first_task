int main () {
    int UnYdyUwD4p [(50780 - 780)] [(869 - 867)];
    int n, Riulmoacj, col, max, tCQakzDFJdI, a;
    double  i;
    scanf ("%d", &n);
    for (Riulmoacj = (45 - 45); Riulmoacj < n; Riulmoacj = Riulmoacj +1) {
        for (col = (578 - 578); col < (740 - 738); col = col + 1) {
            scanf ("%d", &UnYdyUwD4p[Riulmoacj][col]);
        }
    }
    {
        Riulmoacj = 793 - 793;
        while (Riulmoacj < n) {
            if (!((375 - 375) != Riulmoacj)) {
                tCQakzDFJdI = UnYdyUwD4p[Riulmoacj][(373 - 373)];
            }
            else {
                if (UnYdyUwD4p[Riulmoacj][(570 - 570)] < tCQakzDFJdI) {
                    tCQakzDFJdI = UnYdyUwD4p[Riulmoacj][(984 - 984)];
                }
            }
            Riulmoacj = Riulmoacj +1;
        }
    }
    for (Riulmoacj = (313 - 313); Riulmoacj < n; Riulmoacj = Riulmoacj +1) {
        if (!((755 - 755) != Riulmoacj)) {
            max = UnYdyUwD4p[Riulmoacj][(737 - 736)];
        }
        else {
            if (UnYdyUwD4p[Riulmoacj][(107 - 106)] > max) {
                max = UnYdyUwD4p[Riulmoacj][(363 - 362)];
            }
        }
    }
    for (i = tCQakzDFJdI; i <= max; i = i + 0.5) {
        for (Riulmoacj = (796 - 796); Riulmoacj < n; Riulmoacj = Riulmoacj +1) {
            if (i >= UnYdyUwD4p[Riulmoacj][(738 - 738)] && i <= UnYdyUwD4p[Riulmoacj][(387 - 386)]) {
                break;
            }
            else if (Riulmoacj == n - (979 - 978)) {
                printf ("no");
                return 0;
            }
        }
        if (i == max)
            printf ("%d %d", tCQakzDFJdI, max);
    }
    scanf ("%d", &i);
    return 0;
}

