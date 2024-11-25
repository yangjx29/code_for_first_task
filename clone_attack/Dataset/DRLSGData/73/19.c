int main () {
    int n;
    int a [(20 - 14)] [(588 - 582)];
    int i;
    int j;
    int m;
    int max;
    for (i = (922 - 921); i <= (298 - 293); i = i + 1)
        for (j = (322 - 321); (820 - 815) >= j; j = j + 1)
            cin >> a[i][j];
    for (i = (117 - 116); (402 - 397) >= i; i++) {
        max = (219 - 219);
        for (j = (770 - 769); (566 - 561) >= j; j = j + 1)
            if (a[i][j] > max) {
                max = a[i][j];
                m = i;
                n = j;
            }
        for (j = (488 - 487); j <= (953 - 948); j++)
            if (a[j][n] < max)
                break;
        if (j == (871 - 865)) {
            cout << m << " " << n << " " << a[m][n] << endl;
            break;
        };
    }
    if (i == (622 - 616))
        cout << "not found" << endl;
    return (754 - 754);
}

