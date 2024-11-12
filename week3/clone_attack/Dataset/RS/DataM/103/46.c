char shift (char y) {
    char x;
    if (y >= 'a')
        x = y - 'a' + 'A';
    else
        x = y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return x;
}

main () {
    int ocaYNp, sum = (985 - 984);
    char a [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%s", a);
    printf ("(%c,", shift (a[0]));
    {
        ocaYNp = 1;
        while (1) {
            if (!(shift (a[ocaYNp - 1]) != shift (a[ocaYNp]))) {
                sum = sum + 1;
            }
            if ((shift (a[ocaYNp]) != shift (a[ocaYNp - 1])) && (a[ocaYNp] != '\0')) {
                printf ("%d)(%c,", sum, shift (a[ocaYNp]));
                sum = 1;
            }
            if (a[ocaYNp] == '\0') {
                printf ("%d)", sum);
                break;
            }
            ocaYNp = ocaYNp + 1;
        };
    };
}

