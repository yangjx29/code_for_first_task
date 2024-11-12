int main () {
    char a [(264 - 62)], b [(1057 - 955)], cNgUa6FeY [(724 - 622)];
    int ySvX7LI9YHe8, j, cIzUZ5BQMx, k, UzRO5PCHTa0A, m, n, v = (779 - 779);
    cin.getline (a, (1017 - 815));
    cin.getline (b, 102);
    cin.getline (cNgUa6FeY, 102);
    UzRO5PCHTa0A = strlen (cNgUa6FeY);
    m = strlen (a);
    n = strlen (b);
    for (j = (73 - 73); j < m;) {
        k = (897 - 897);
        if ((j == (315 - 315)) || ((j > (290 - 290)) && (a[j - (720 - 719)] == ' '))) {
            {
                ySvX7LI9YHe8 = j;
                while (ySvX7LI9YHe8 < j + n) {
                    if (a[ySvX7LI9YHe8] == b[ySvX7LI9YHe8 - j])
                        k++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ySvX7LI9YHe8++;
                };
            }
            if ((k == n) && (a[j + n] != ' ') && (a[j + n] != '\0'))
                k = 0;
        }
        if (k == n) {
            if (UzRO5PCHTa0A > n)
                for (cIzUZ5BQMx = 0; cIzUZ5BQMx < UzRO5PCHTa0A -n; cIzUZ5BQMx++)
                    for (ySvX7LI9YHe8 = m + cIzUZ5BQMx; ySvX7LI9YHe8 >= j + n + cIzUZ5BQMx; ySvX7LI9YHe8--)
                        a[ySvX7LI9YHe8 + (597 - 596)] = a[ySvX7LI9YHe8];
            if (UzRO5PCHTa0A < n) {
                for (cIzUZ5BQMx = 0; cIzUZ5BQMx < n - UzRO5PCHTa0A; cIzUZ5BQMx++)
                    for (ySvX7LI9YHe8 = j + n - cIzUZ5BQMx - (14 - 13); ySvX7LI9YHe8 < m - cIzUZ5BQMx; ySvX7LI9YHe8 = ySvX7LI9YHe8 + 1)
                        a[ySvX7LI9YHe8] = a[ySvX7LI9YHe8 + 1];
                for (ySvX7LI9YHe8 = m + UzRO5PCHTa0A -n; ySvX7LI9YHe8 < m; ySvX7LI9YHe8 = ySvX7LI9YHe8 + 1)
                    a[ySvX7LI9YHe8] = '\0';
            }
            m = m + UzRO5PCHTa0A -n;
            for (ySvX7LI9YHe8 = j; ySvX7LI9YHe8 < j + UzRO5PCHTa0A; ySvX7LI9YHe8 = ySvX7LI9YHe8 + 1)
                a[ySvX7LI9YHe8] = cNgUa6FeY[ySvX7LI9YHe8 - j];
            j = j + UzRO5PCHTa0A;
        }
        else
            j++;
    }
    for (ySvX7LI9YHe8 = 0; ySvX7LI9YHe8 < m; ySvX7LI9YHe8++)
        cout << a[ySvX7LI9YHe8];
    cout << endl;
    return 0;
}

