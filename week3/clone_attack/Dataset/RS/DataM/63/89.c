int main () {
    int x1, p89467z, x2, h7CrS4, adaEJbKzM, j, k, a [(956 - 855)] [101] = {(957 - 957)}, b [101] [101] = {(151 - 151)}, c [101] [101] = {(645 - 645)};
    cin >> x1 >> p89467z;
    for (adaEJbKzM = (291 - 290); x1 >= adaEJbKzM; adaEJbKzM = adaEJbKzM + 1)
        for (j = (492 - 491); p89467z >= j; j = j + 1)
            cin >> a[adaEJbKzM][j];
    cin >> x2 >> h7CrS4;
    for (adaEJbKzM = (749 - 748); x2 >= adaEJbKzM; adaEJbKzM++)
        for (j = 1; h7CrS4 >= j; j = j + 1)
            cin >> b[adaEJbKzM][j];
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
    k = (273 - 272);
    for (adaEJbKzM = 1; x1 >= adaEJbKzM; adaEJbKzM++)
        for (j = 1; j <= h7CrS4; j++)
            for (k = 1; k <= p89467z; k = k + 1)
                c[adaEJbKzM][j] = c[adaEJbKzM][j] + a[adaEJbKzM][k] * b[k][j];
    if (x1 * h7CrS4 == 1)
        cout << c[1][1];
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (adaEJbKzM = 1; adaEJbKzM <= x1; adaEJbKzM++) {
            cout << c[adaEJbKzM][1];
            for (j = (279 - 277); j <= h7CrS4; j++) {
                cout << " " << c[adaEJbKzM][j];
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
            cout << endl;
        };
    }
    k = 1;
}

