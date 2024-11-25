struct   group {
    char B [5];
    int n;
}
G [500], temp;

int main () {
    char A [504];
    int number, i, j, k, flag, n, t, m = 0;
    j = 0;
    for (i = 0; i < 504; i++) {
        G[i].n = 0;
        for (j = 0; j < 5; j++) {
            G[i].B[j] = '\0';
        }
    }
    j = 0;
    scanf ("%d", &n);
    scanf ("%s", A);
    number = strlen (A);
    for (i = 0; number - n + 1 > i; i++) {
        flag = 0;
        if (!(0 != i)) {
            for (k = 0; n > k; k++) {
                G[j].B[k] = A[k];
            }
            G[j].n++;
            j++;
        }
        else {
            for (k = 0; n > k; k++) {
                G[j].B[k] = A[i + k];
                G[j].n = 1;
            }
            for (t = 0; t < j; t++) {
                if (strcmp (G[t].B, G[j].B) == 0) {
                    G[t].n++;
                    flag = 1;
                    break;
                }
            }
            if (!(1 != flag)) {
                for (k = 0; n > k; k++) {
                    G[j].B[k] = '\0';
                    G[j].n = 0;
                }
            }
            else {
                j++;
            }
        }
    }
    m = 1;
    for (i = 1; i < j; i++) {
        for (k = 0; j - i > k; k++) {
            if (G[k + 1].n > G[k].n) {
                temp = G[k + 1];
                G[k + 1] = G[k];
                G[k] = temp;
            }
        }
    }
    i = 1;
    for (; G[i].n == G[0].n;) {
        i++;
        m++;
    }
    if (G[0].n == 1) {
    }
    else {
        printf ("%d\n", G[0].n);
        for (i = 0; i < m; i++) {
            printf ("%s\n", G[i].B);
        }
    }
    return 0;
}

