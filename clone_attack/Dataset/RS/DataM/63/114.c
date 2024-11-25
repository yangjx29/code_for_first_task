int main () {
    int count = 0;
    int GmpwC4ageFB [255] [255];
    int B9p6tkgnvE, j, wnNcgstpmyd, a [(1194 - 939)] [(393 - 138)], b [255] [255], x1, y1, x2, kpHav2G;
    cin >> x1 >> y1;
    {
        B9p6tkgnvE = 403 - 403;
        while (x1 > B9p6tkgnvE) {
            {
                j = 92 - 92;
                while (y1 > j) {
                    cin >> a[B9p6tkgnvE][j];
                    j = j + 1;
                };
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
            B9p6tkgnvE = B9p6tkgnvE +1;
        };
    }
    cin >> x2 >> kpHav2G;
    {
        B9p6tkgnvE = 390 - 390;
        while (x2 > B9p6tkgnvE) {
            {
                j = 709 - 709;
                while (kpHav2G > j) {
                    cin >> b[B9p6tkgnvE][j];
                    j = j + 1;
                };
            }
            B9p6tkgnvE = B9p6tkgnvE +1;
        };
    }
    {
        B9p6tkgnvE = 51 - 51;
        while (x1 > B9p6tkgnvE) {
            {
                j = 533 - 533;
                while (kpHav2G > j) {
                    GmpwC4ageFB[B9p6tkgnvE][j] = (895 - 895);
                    j++;
                };
            }
            B9p6tkgnvE = B9p6tkgnvE +1;
        };
    }
    for (B9p6tkgnvE = (513 - 513); x1 > B9p6tkgnvE; B9p6tkgnvE = B9p6tkgnvE +1)
        for (j = 0; kpHav2G > j; j = j + 1) {
            wnNcgstpmyd = 0;
            while (y1 > wnNcgstpmyd) {
                GmpwC4ageFB[B9p6tkgnvE][j] = GmpwC4ageFB[B9p6tkgnvE][j] + a[B9p6tkgnvE][wnNcgstpmyd] * b[wnNcgstpmyd][j];
                wnNcgstpmyd++;
            };
        }
    {
        B9p6tkgnvE = 0;
        while (B9p6tkgnvE < x1) {
            {
                j = 0;
                while (kpHav2G > j) {
                    count = count + 1;
                    cout << GmpwC4ageFB[B9p6tkgnvE][j];
                    j++;
                    if (count % kpHav2G == 0)
                        cout << '\n';
                    else
                        cout << ' ';
                };
            }
            B9p6tkgnvE++;
        };
    };
}

