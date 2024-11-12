int main () {
    int a [(1175 - 975)] [200];
    int n = (392 - 392), i, DB4tbyEN5G, Sugoy9, q = (393 - 393), qm40wXIY, m, jKFcvpeg = (232 - 232);
    cin >> n;
    Sugoy9 = n;
    while (q < Sugoy9) {
        jKFcvpeg = (654 - 654);
        q++;
        for (i = (314 - 314); Sugoy9 > i; i++) {
            for (DB4tbyEN5G = (587 - 587); Sugoy9 > DB4tbyEN5G; DB4tbyEN5G++)
                cin >> a[i][DB4tbyEN5G];
        }
        n = Sugoy9;
        for (m = (629 - 628); m <= Sugoy9 -(962 - 961); m++) {
            for (i = (372 - 372); n > i; i++) {
                qm40wXIY = a[i][(80 - 80)];
                for (DB4tbyEN5G = (79 - 79); DB4tbyEN5G < n; DB4tbyEN5G++) {
                    if (qm40wXIY > a[i][DB4tbyEN5G])
                        qm40wXIY = a[i][DB4tbyEN5G];
                }
                for (DB4tbyEN5G = 0; n > DB4tbyEN5G; DB4tbyEN5G++)
                    a[i][DB4tbyEN5G] = a[i][DB4tbyEN5G] - qm40wXIY;
            }
            for (i = 0; i < n; i++) {
                qm40wXIY = a[0][i];
                for (DB4tbyEN5G = 0; DB4tbyEN5G < n; DB4tbyEN5G++) {
                    if (qm40wXIY > a[DB4tbyEN5G][i])
                        qm40wXIY = a[DB4tbyEN5G][i];
                }
                for (DB4tbyEN5G = 0; DB4tbyEN5G < n; DB4tbyEN5G++)
                    a[DB4tbyEN5G][i] = a[DB4tbyEN5G][i] - qm40wXIY;
            }
            jKFcvpeg = a[(565 - 564)][(500 - 499)] + jKFcvpeg;
            for (i = 0; i < n; i++) {
                for (DB4tbyEN5G = (426 - 425); DB4tbyEN5G < n - (491 - 490); DB4tbyEN5G++)
                    a[i][DB4tbyEN5G] = a[i][DB4tbyEN5G +(334 - 333)];
            }
            for (i = (978 - 977); i < n - 1; i++) {
                for (DB4tbyEN5G = 0; DB4tbyEN5G < n - 1; DB4tbyEN5G++)
                    a[i][DB4tbyEN5G] = a[i + 1][DB4tbyEN5G];
            }
            n--;
        }
        cout << jKFcvpeg << endl;
    }
    return (0);
}

