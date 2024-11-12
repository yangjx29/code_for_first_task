main () {
    int P1VfLRJYkzb;
    int dz45Zvj;
    int UIflFKwXR [(679 - 671)] [(571 - 563)];
    int m;
    int n;
    int max;
    int c;
    int b;
    int k;
    scanf ("%d,%d", &m, &n);
    for (P1VfLRJYkzb = (828 - 828); P1VfLRJYkzb < m; P1VfLRJYkzb++)
        for (dz45Zvj = (686 - 686); dz45Zvj < n; dz45Zvj++)
            scanf ("%d", &UIflFKwXR[P1VfLRJYkzb][dz45Zvj]);
    for (P1VfLRJYkzb = (680 - 680); P1VfLRJYkzb < m; P1VfLRJYkzb++) {
        max = UIflFKwXR[P1VfLRJYkzb][(963 - 963)];
        c = (567 - 567);
        for (dz45Zvj = 0; dz45Zvj < n; dz45Zvj++) {
            if (max < UIflFKwXR[P1VfLRJYkzb][dz45Zvj]) {
                max = UIflFKwXR[P1VfLRJYkzb][dz45Zvj];
                c = dz45Zvj;
            };
        }
        for (k = 0; k < m; k++) {
            if (max > UIflFKwXR[k][c])
                break;
            else if (k == m - 1) {
                printf ("%d+%d", P1VfLRJYkzb, c);
                goto end;
            };
        };
    }
end :
    scanf ("%d", UIflFKwXR);
}

