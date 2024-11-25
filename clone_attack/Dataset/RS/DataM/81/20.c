int main () {
    int dhz0KSkORTp;
    int gziyCxoAI2Tu;
    int m;
    int n;
    int a [(754 - 749)] [(456 - 451)];
    for (dhz0KSkORTp = (307 - 307); dhz0KSkORTp < (738 - 733); dhz0KSkORTp++) {
        for (gziyCxoAI2Tu = (314 - 314); gziyCxoAI2Tu < (619 - 615); gziyCxoAI2Tu++) {
            scanf ("%d", &(a[dhz0KSkORTp][gziyCxoAI2Tu]));
        }
        scanf ("%d\n", &(a[dhz0KSkORTp][(350 - 346)]));
    }
    scanf ("%d%d", &n, &m);
    if (m <= 4 && n <= 4) {
        for (gziyCxoAI2Tu = (43 - 43); gziyCxoAI2Tu < 5; gziyCxoAI2Tu++) {
            dhz0KSkORTp = a[n][gziyCxoAI2Tu];
            a[n][gziyCxoAI2Tu] = a[m][gziyCxoAI2Tu];
            a[m][gziyCxoAI2Tu] = dhz0KSkORTp;
        }
        for (dhz0KSkORTp = 0; dhz0KSkORTp < 5; dhz0KSkORTp++) {
            for (gziyCxoAI2Tu = 0; gziyCxoAI2Tu < 4; gziyCxoAI2Tu++) {
                printf ("%d ", a[dhz0KSkORTp][gziyCxoAI2Tu]);
            }
            printf ("%d\n", a[dhz0KSkORTp][4]);
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

