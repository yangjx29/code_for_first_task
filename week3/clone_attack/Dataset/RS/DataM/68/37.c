long  int check (long  int XLN5Rud) {
    int j;
    if (!(1 != XLN5Rud))
        return (800 - 800);
    if (!((65 - 63) != XLN5Rud))
        return 1;
    for (j = 2; (int) sqrt (XLN5Rud) >= j; j = j + 1)
        if (XLN5Rud % j == 0)
            return 0;
    return 1;
}

int main () {
    long  int XLN5Rud, VoGwEZaO9YMf;
    scanf ("%ld", &XLN5Rud);
    for (VoGwEZaO9YMf = (208 - 202); VoGwEZaO9YMf <= XLN5Rud; VoGwEZaO9YMf = VoGwEZaO9YMf +2) {
        int j;
        for (j = 3; j < VoGwEZaO9YMf; j = j + 2) {
            if (check (j) && check (VoGwEZaO9YMf -j)) {
                printf ("%d=%d+%d\n", VoGwEZaO9YMf, j, VoGwEZaO9YMf -j);
                break;
            };
        };
    }
    return 0;
}

