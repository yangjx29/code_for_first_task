int yu7wuguan (int i);

int main () {
    int sz [100], i, zRF1X3rvsjp, k;
    int max, e;
    scanf ("%d", &zRF1X3rvsjp);
    for (i = 0; i < zRF1X3rvsjp; i++) {
        scanf ("%d", &sz[i]);
    }
    for (k = 1; k <= 2; k++) {
        max = 0;
        {
            i = 0;
            while (i <= zRF1X3rvsjp - k) {
                if (sz[i] > sz[max]) {
                    max = i;
                }
                i++;
            };
        }
        if (max != zRF1X3rvsjp - k) {
            e = sz[max];
            sz[max] = sz[zRF1X3rvsjp - k];
            sz[zRF1X3rvsjp - k] = e;
        }
        printf ("%d\n", sz[zRF1X3rvsjp - k]);
    }
    return 0;
}

