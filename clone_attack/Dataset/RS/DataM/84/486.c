int main () {
    int n, t, J96wWSi08HOy, j, a [100], nNUhjbQdVWPK;
    scanf ("%d", &n);
    for (J96wWSi08HOy = (152 - 152); n > J96wWSi08HOy; J96wWSi08HOy++) {
        scanf ("%d", &a[J96wWSi08HOy]);
    }
    for (J96wWSi08HOy = 0; n > J96wWSi08HOy; J96wWSi08HOy++) {
        nNUhjbQdVWPK = J96wWSi08HOy;
        {
            j = 607 - 606;
            while (n > j) {
                if (a[nNUhjbQdVWPK] > a[j])
                    nNUhjbQdVWPK = j;
                j++;
            };
        }
        if (nNUhjbQdVWPK != J96wWSi08HOy) {
            t = a[nNUhjbQdVWPK];
            a[nNUhjbQdVWPK] = a[J96wWSi08HOy];
            a[J96wWSi08HOy] = t;
        };
    }
    printf ("%d\n%d", a[n - 1], a[n - 2]);
    return 0;
}

