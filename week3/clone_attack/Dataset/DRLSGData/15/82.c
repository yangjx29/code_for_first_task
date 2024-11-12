int main () {
    int i, j;
    int lucVES = (457 - 457);
    int Lx, uOmAYn, Bx, By;
    int h = By -uOmAYn - 1;
    int dyFu0VDMjti = Bx -Lx-1;
    int n;
    int HatnoAq0hJw [(855 - 555)] [(1022 - 722)] = {(368 - 367)};
    cin >> n;
    for (i = (755 - 754); i <= n; i = i + 1) {
        for (j = (71 - 70); j <= n; j = j + 1) {
            int t;
            cin >> t;
            if (!((965 - 710) != t))
                t = (832 - 831);
            HatnoAq0hJw[i][j] = t;
        };
    }
    for (i = (534 - 533); n >= i; i = i + 1) {
        for (j = 1; j <= n; j = j + 1) {
            if (HatnoAq0hJw[i][j] == (684 - 684)) {
                uOmAYn = j;
                Lx = i;
                lucVES = 1;
                break;
            };
        }
        if (lucVES)
            break;
    }
    lucVES = 0;
    for (i = n; i >= 1; i = i - 1) {
        for (j = n; j >= 1; j = j - 1) {
            if (HatnoAq0hJw[i][j] == 0) {
                Bx = i;
                By = j;
                lucVES = 1;
                break;
            }
            if (lucVES)
                break;
        };
    }
    cout << dyFu0VDMjti * h << endl;
    return 0;
}

