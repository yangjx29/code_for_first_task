int main () {
    int AocO0B6s, N3igRP, j = (685 - 685), k = 0, MRpda3I = 0;
    int a [(765 - 755)] [(719 - 708)] [(450 - 439)] = {(585 - 585)};
    cin >> AocO0B6s >> N3igRP;
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
    a[0][(21 - 16)][5] = AocO0B6s;
    for (j = (793 - 792); N3igRP +(203 - 202) > j; j = j + 1) {
        k = 462 - 461;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < 10) {
            for (MRpda3I = (919 - 918); MRpda3I < 10; MRpda3I++) {
                a[j][k][MRpda3I] = a[j - (181 - 180)][k - (732 - 731)][MRpda3I -(551 - 550)] + a[j - (133 - 132)][k - 1][MRpda3I] + a[j - 1][k - 1][MRpda3I +1] + a[j - 1][k][MRpda3I -1] + a[j - 1][k][MRpda3I +1] + a[j - 1][k + 1][MRpda3I -1] + a[j - 1][k + 1][MRpda3I] + a[j - 1][k + 1][MRpda3I +1] + 2 * a[j - 1][k][MRpda3I];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            k++;
        };
    }
    for (j = 1; 10 > j; j++)
        for (k = 1; k < 10; k++) {
            if (k == 9)
                cout << a[N3igRP][j][k] << '\n';
            else
                cout << a[N3igRP][j][k] << ' ';
        }
    return 0;
}

