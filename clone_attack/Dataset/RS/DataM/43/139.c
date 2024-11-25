int main () {
    int jEkNK3bVu;
    int j;
    int k;
    int a [(10518 - 518)];
    int zZPixh;
    for (jEkNK3bVu = (71 - 69), k = (584 - 584); jEkNK3bVu < (10274 - 274); jEkNK3bVu = jEkNK3bVu + 1) {
        for (j = (667 - 665); j <= jEkNK3bVu;) {
            if (jEkNK3bVu % j == (120 - 120))
                break;
            j = j + 1;
        }
        if (j == jEkNK3bVu) {
            a[k] = jEkNK3bVu;
            k++;
        };
    }
    scanf ("%d", &zZPixh);
    for (jEkNK3bVu = 0; a[jEkNK3bVu] <= zZPixh; jEkNK3bVu = jEkNK3bVu + 1) {
        j = jEkNK3bVu;
        while (a[j] <= zZPixh - a[jEkNK3bVu]) {
            if (a[jEkNK3bVu] + a[j] == zZPixh) {
                printf ("%d %d\n", a[jEkNK3bVu], a[j]);
            }
            j = j + 1;
        };
    }
    return 0;
}

