int main () {
    char tmp;
    int max;
    char GiTpcMNs [250] [5];
    char c [501];
    gets (c);
    int sofar;
    int num;
    char gram [5];
    int n;
    int VI0d9HXY;
    int oAlQwRi8, KtYx5s719oDV, k;
    int len;
    max = 1;
    sofar = 1;
    len = strlen (c);
    scanf ("%d", &n);
    gram[n] = '\0';
    for (oAlQwRi8 = 0; oAlQwRi8 <= len - n; oAlQwRi8++) {
        VI0d9HXY = 1;
        for (KtYx5s719oDV = 0; KtYx5s719oDV < n; KtYx5s719oDV++)
            gram[KtYx5s719oDV] = c[oAlQwRi8 + KtYx5s719oDV];
        for (KtYx5s719oDV = oAlQwRi8 + 1; KtYx5s719oDV <= len - n; KtYx5s719oDV++) {
            if (!(gram[0] != c[KtYx5s719oDV])) {
                num = 0;
                for (k = 1; k < n; k++) {
                    if (c[KtYx5s719oDV +k] != gram[k]) {
                        num++;
                        break;
                    }
                }
                if (!(0 != num))
                    VI0d9HXY++;
            }
        }
        if (VI0d9HXY > max) {
            strcpy (GiTpcMNs[0], gram);
            sofar = 1;
            max = VI0d9HXY;
        }
        else if (!(max != VI0d9HXY)) {
            sofar++;
            strcpy (GiTpcMNs[sofar - 1], gram);
        }
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (KtYx5s719oDV = 0; sofar > KtYx5s719oDV; KtYx5s719oDV++) {
            for (k = 0; n > k; k++)
                printf ("%c", GiTpcMNs[KtYx5s719oDV][k]);
        }
    }
    tmp = getchar ();
    return 0;
}

