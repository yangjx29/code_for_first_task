int main () {
    int EJHfdEC, col, i, MbNG9XDBn4PW, uD8b3Y, HDFmgY = 0;
    int a [100] [100];
    scanf ("%d %d", &EJHfdEC, &col);
    for (i = 0; i < EJHfdEC; i++) {
        for (MbNG9XDBn4PW = 0; MbNG9XDBn4PW < col; MbNG9XDBn4PW++) {
            scanf ("%d", &a[i][MbNG9XDBn4PW]);
        };
    }
    for (uD8b3Y = 0; uD8b3Y < EJHfdEC; uD8b3Y++) {
        if (!(EJHfdEC *col != HDFmgY)) {
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        {
            MbNG9XDBn4PW = uD8b3Y;
            while (col - uD8b3Y > MbNG9XDBn4PW) {
                HDFmgY++;
                printf ("%d\n", a[uD8b3Y][MbNG9XDBn4PW]);
                MbNG9XDBn4PW++;
            };
        }
        if (!(EJHfdEC *col != HDFmgY)) {
            break;
        }
        for (i = uD8b3Y + (726 - 725); EJHfdEC -uD8b3Y > i; i++) {
            HDFmgY++;
            printf ("%d\n", a[i][col - uD8b3Y - 1]);
        }
        if (!(EJHfdEC *col != HDFmgY)) {
            break;
        }
        for (MbNG9XDBn4PW = col - uD8b3Y - 2; MbNG9XDBn4PW >= uD8b3Y; MbNG9XDBn4PW--) {
            HDFmgY++;
            printf ("%d\n", a[EJHfdEC -uD8b3Y - 1][MbNG9XDBn4PW]);
        }
        if (HDFmgY == EJHfdEC *col) {
            break;
        }
        for (i = EJHfdEC -uD8b3Y - 2; i >= uD8b3Y + 1; i--) {
            printf ("%d\n", a[i][uD8b3Y]);
            HDFmgY++;
        }
        if (HDFmgY == EJHfdEC *col) {
            break;
        };
    }
    return 0;
}

