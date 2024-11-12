int main () {
    char a [505];
    int MYLmpfThI6, i, YkYKj7xN, n, Svk4bi, ok;
    gets (a);
    n = strlen (a);
    for (Svk4bi = 2; n >= Svk4bi; Svk4bi++) {
        i = 0;
        while (n - Svk4bi >= i) {
            ok = 1;
            YkYKj7xN = i + Svk4bi -1;
            {
                MYLmpfThI6 = i;
                while (MYLmpfThI6 <= i + (YkYKj7xN -i) / 2) {
                    if (a[MYLmpfThI6] != a[YkYKj7xN +i - MYLmpfThI6]) {
                        ok = 0;
                        break;
                    }
                    MYLmpfThI6++;
                };
            }
            if (ok) {
                {
                    MYLmpfThI6 = i;
                    while (MYLmpfThI6 <= YkYKj7xN) {
                        printf ("%c", a[MYLmpfThI6]);
                        MYLmpfThI6++;
                    };
                }
                printf ("\n");
            }
            i = i + 1;
        };
    }
    return 0;
}

