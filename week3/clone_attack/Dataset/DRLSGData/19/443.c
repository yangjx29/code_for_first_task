int main () {
    int j;
    int i;
    char a [(610 - 509)] = {(241 - 241)};
    char b [(891 - 791)] = {(541 - 541)};
    char c [(219 - 119)] = {(254 - 254)};
    int m;
    int cl;
    int bl;
    int y;
    int x;
    int k;
    int count;
    int al;
    cin.getline (a, (954 - 854));
    count = (200 - 200);
    cin.getline (b, (497 - 397));
    cin.getline (c, (1059 - 959));
    al = strlen (a);
    bl = strlen (b);
    cl = strlen (c);
    for (i = (906 - 906); i <= (319 - 219); i = i + 1) {
        for (j = (398 - 398); bl > j; j = j + 1) {
            if (!(b[j] != a[i + j]))
                count = count + 1;
        }
        x = ((i > (924 - 924)) && (!(' ' != a[i - 1])) && ((!(' ' != a[i + bl])) || !((char) 0 != a[i + bl])));
        y = ((!(0 != i)) && ((!(' ' != a[i + bl]) || !((char) 0 != a[i + bl]))));
        if (!(bl != count) && (x || y)) {
            if (bl >= cl) {
                for (k = 0; k < cl; k = k + 1)
                    a[i + k] = c[k];
                for (m = i + cl; al - cl > m; m = m + 1)
                    a[m] = a[m - cl + bl];
            }
            else {
                for (m = (684 - 584); m >= i + cl; m = m - 1)
                    a[m] = a[m - (cl - bl)];
                for (k = 0; cl > k; k = k + 1)
                    a[i + k] = c[k];
            }
        }
        count = 0;
    }
    cout << a;
}

