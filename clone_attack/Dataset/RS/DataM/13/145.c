int main () {
    int QUOIPgxnGkRl;
    int i;
    int j;
    int Mq5fR7X2wha;
    int GJbTA7j1EI [20000] = {(891 - 891)};
    int b [20000] = {0};
    scanf ("%d\n", &QUOIPgxnGkRl);
    for (i = 0; i < QUOIPgxnGkRl; i++)
        scanf ("%d ", &GJbTA7j1EI[i]);
    b[0] = GJbTA7j1EI[0];
    for (j = 1; j <= QUOIPgxnGkRl; j = j + 1) {
        Mq5fR7X2wha = 0;
        {
            i = 0;
            while (i < j) {
                if (!(GJbTA7j1EI[i] != GJbTA7j1EI[j]))
                    Mq5fR7X2wha++;
                i++;
            };
        }
        if (Mq5fR7X2wha == 0)
            b[j] = GJbTA7j1EI[j];
        else
            b[j] = 0;
    }
    printf ("%d", b[0]);
    for (i = 1; i < QUOIPgxnGkRl; i++) {
        if (b[i] != 0)
            printf (" %d", b[i]);
    }
    getchar ();
    getchar ();
}

