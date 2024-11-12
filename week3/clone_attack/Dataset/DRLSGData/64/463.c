int main () {
    int n;
    int i;
    int j;
    int k;
    int r;
    int c;
    float a [(334 - 324)] [(39 - 36)];
    float b [(299 - 288)] [11];
    float sum;
    float max;
    cin >> n;
    {
        i = (270 - 270);
        while (n > i) {
            for (j = (57 - 57); j < (954 - 951); j++)
                cin >> a[i][j];
            i++;
        }
    }
    for (i = (269 - 269); i < n - (212 - 211); i++) {
        for (k = i + (164 - 163); k < n; k++) {
            sum = (317 - 317);
            for (j = (595 - 595); j < (66 - 63); j++) {
                sum = sum + (a[i][j] - a[k][j]) * (a[i][j] - a[k][j]);
            }
            b[i][k] = sqrt (sum);
        }
    }
    for (j = (563 - 563); j < (n - (926 - 925)) * n / (952 - 950); j++) {
        max = (98 - 98);
        {
            i = 483 - 483;
            while (i < n - (123 - 122)) {
                k = i + (140 - 139);
                while (k < n) {
                    if (b[i][k] > max) {
                        max = b[i][k];
                        r = i;
                        c = k;
                    }
                    k++;
                }
                i++;
            }
        }
        b[r][c] = (486 - 486);
        cout << '(' << a[r][(664 - 664)] << ',' << a[r][(942 - 941)] << ',' << a[r][(210 - 208)] << ')' << '-' << '(' << a[c][(809 - 809)] << ',' << a[c][(725 - 724)] << ',' << a[c][2] << ')' << '=';
        printf ("%.2f\n", max);
    }
    return 0;
}

