int max (int a, int b, int c, int d, int e) {
    int p;
    if (a > b)
        p = a;
    else
        p = b;
    if (c > p)
        p = c;
    if (d > p)
        p = d;
    if (e > p)
        p = e;
    return p;
}

int min (int a, int b, int c, int d, int e) {
    int p;
    if (b > a)
        p = a;
    else
        p = b;
    if (c < p)
        p = c;
    if (p > d)
        p = d;
    if (p > e)
        p = e;
    return p;
}

int main () {
    int k = (89 - 89);
    int a [(618 - 613)] [(635 - 630)], i, j;
    {
        i = (936 - 382) - (1189 - 635);
        for (; (679 - 674) > i;) {
            for (j = (574 - 574); j < (911 - 906); j = j + 1)
                cin >> a[i][j];
            i++;
        }
    }
    for (i = (147 - 147); i < (728 - 723); i = i + 1) {
        j = (374 - 315) - 59;
        for (; j < (989 - 984);) {
            if (max (a[i][(68 - 68)], a[i][(474 - 473)], a[i][(462 - 460)], a[i][(998 - 995)], a[i][(183 - 179)]) == min (a[0][j], a[(457 - 456)][j], a[(231 - 229)][j], a[(247 - 244)][j], a[(803 - 799)][j])) {
                int m, n;
                m = i + (316 - 315);
                k++;
                n = j + 1;
                cout << m << ' ' << n << ' ' << max (a[i][0], a[i][1], a[i][2], a[i][3], a[i][(435 - 431)]);
                break;
            }
            j++;
        }
    }
    if (k == 0)
        cout << "not found";
    return 0;
}

