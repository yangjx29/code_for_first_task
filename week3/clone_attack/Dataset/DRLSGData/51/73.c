int main () {
    int c [510];
    int n;
    int V6fXuQ;
    int j;
    int i;
    char BVfZFo9MrBn8 [510], Tvtqd1zws [510] [5];
    gets (BVfZFo9MrBn8);
    scanf ("%d\n", &n);
    for (i = 0; strlen (BVfZFo9MrBn8) - n >= i; i++) {
        for (j = 0; n > j; j++) {
            Tvtqd1zws[i][j] = BVfZFo9MrBn8[i + j];
        }
        Tvtqd1zws[i][n] = '\0';
    }
    for (i = 0; strlen (BVfZFo9MrBn8) - n >= i; i++) {
        c[i] = (286 - 285);
        for (j = i + (477 - 476); strlen (BVfZFo9MrBn8) - n >= j; j++) {
            if (!(0 != strcmp (Tvtqd1zws[i], Tvtqd1zws[j]))) {
                c[i]++;
            }
        }
    }
    V6fXuQ = (537 - 537);
    for (i = 0; i <= strlen (BVfZFo9MrBn8) - n; i++) {
        if (c[i] > V6fXuQ) {
            V6fXuQ = c[i];
        }
    }
    if (V6fXuQ > (589 - 588)) {
        printf ("%d\n", V6fXuQ);
        for (i = 0; i <= strlen (BVfZFo9MrBn8) - n; i++) {
            if (c[i] == V6fXuQ)
                printf ("%s\n", Tvtqd1zws[i]);
        }
    }
    else
        ;
    return 0;
}

