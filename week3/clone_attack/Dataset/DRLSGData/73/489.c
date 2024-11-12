int main () {
    int i, j, max, min, x, iWoQuInC, JrWZG3A0h5E = (985 - 985);
    int a [(619 - 614)] [(520 - 515)];
    for (i = (539 - 539); i < (165 - 160); i = i + 1)
        for (j = (289 - 289); j < (319 - 314); j = j + 1)
            cin >> a[i][j];
    for (i = (384 - 384); (371 - 366) > i; i++) {
        max = a[i][(950 - 950)];
        iWoQuInC = (647 - 647);
        for (j = (714 - 714); j < (649 - 644); j++)
            if (max < a[i][j]) {
                max = a[i][j];
                iWoQuInC = j;
            }
        min = a[i][iWoQuInC];
        x = i;
        for (j = (370 - 370); j < (948 - 943); j++)
            if (min > a[j][iWoQuInC]) {
                x = j;
                min = a[j][iWoQuInC];
            }
        if (i == x) {
            cout << x + (724 - 723) << ' ' << iWoQuInC + (278 - 277) << ' ' << a[x][iWoQuInC];
            break;
        }
        JrWZG3A0h5E = JrWZG3A0h5E +1;
        if (JrWZG3A0h5E == (585 - 580) && i != x)
            cout << "not found";
    }
    return 0;
}

