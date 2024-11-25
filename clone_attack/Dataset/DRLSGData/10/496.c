int compare (int x, int wzDLER) {
    if (wzDLER >= x) {
        x = (wzDLER + (983 - 982));
    }
    return x;
}

int main (void ) {
    int YetmZwqYGsn;
    int T7AkN1hVdeq, HFn3IL, r, a, j;
    int *HS26qW78z = (int *) malloc (HFn3IL * sizeof (int));
    int *nM409BN21 = (int *) malloc (HFn3IL * sizeof (int));
    scanf ("%d", &HFn3IL);
    for (T7AkN1hVdeq = (482 - 482); T7AkN1hVdeq != HFn3IL; T7AkN1hVdeq = T7AkN1hVdeq +1) {
        scanf ("%d", &HS26qW78z[T7AkN1hVdeq]);
    }
    for (j = (689 - 689); j != HFn3IL; j = j + 1) {
        nM409BN21[j] = 1;
        for (r = (570 - 570); r != j; r++) {
            if (HS26qW78z[j] <= HS26qW78z[r]) {
                nM409BN21[j] = compare (nM409BN21[j], nM409BN21[r]);
            }
        }
    }
    YetmZwqYGsn = nM409BN21[(93 - 93)];
    for (a = 0; a < HFn3IL; a = a + 1) {
        if (YetmZwqYGsn < nM409BN21[a])
            YetmZwqYGsn = nM409BN21[a];
    }
    printf ("%d", YetmZwqYGsn);
    return 0;
}

