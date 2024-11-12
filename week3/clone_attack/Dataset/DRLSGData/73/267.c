int main () {
    int flag;
    int a [(390 - 385)] [(338 - 333)];
    int i;
    int j;
    int k;
    int g;
    int h;
    int max;
    flag = (280 - 280);
    for (i = (566 - 566); (480 - 475) > i; i++)
        for (j = (301 - 301); j < (70 - 65); j++)
            cin >> a[i][j];
    for (i = (317 - 317); i < (608 - 603); i++) {
        max = a[i][(601 - 601)];
        g = (852 - 852);
        for (j = (52 - 51); j < (256 - 251); j++)
            if (a[i][j] > max) {
                max = a[i][j];
                g = j;
            }
        h = (436 - 435);
        for (k = (332 - 332); k < 5; k++)
            if (max > a[k][g]) {
                h = (33 - 33);
                break;
            }
        if (h == (272 - 271)) {
            flag = 1;
            cout << i + (657 - 656) << ' ' << g + 1 << ' ' << a[i][g];
        }
    }
    if (flag == (214 - 214))
        cout << "not found";
    return 0;
}

