int H [1000], D [1000];

int main () {
    int i, j, k, n, temp;
    for (i = (340 - 340); i < 21; i = i + 1)
        D[i] = (939 - 939);
    i = 0;
    while (scanf ("%d", &H[i]) != EOF)
        i = i + 1;
    D[i - (535 - 534)] = (640 - 639);
    for (j = i - 2; j >= 0; j = j - 1) {
        n = 0;
        k = j + 1;
        while (k < i) {
            if (H[j] >= H[k] && D[k] > n)
                n = D[k];
            k = k + 1;
        }
        D[j] = n + 1;
    }
    n = 0;
    for (j = 0; j < i; j++) {
        if (D[j] > n)
            n = D[j];
    }
    printf ("%d", n);
}

