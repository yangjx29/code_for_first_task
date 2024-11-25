int main () {
    int jvWUQo, b, i, j, Jagr9dqAQC [(127 - 119)] [(128 - 120)], g, XS4QXq9, q, k, o = (391 - 391), n = (792 - 792);
    char l;
    cin >> jvWUQo >> l >> b;
    {
        i = 468 - 468;
        while (jvWUQo > i) {
            {
                j = 75 - 75;
                while (b > j) {
                    cin >> Jagr9dqAQC[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 876 - 876;
        while (jvWUQo > i) {
            g = Jagr9dqAQC[i][0];
            for (j = 0; b > j; j = j + 1) {
                if (g <= Jagr9dqAQC[i][j]) {
                    g = Jagr9dqAQC[i][j];
                    XS4QXq9 = i;
                    q = j;
                };
            }
            i++;
            for (k = 0; jvWUQo > k; k = k + 1) {
                if (Jagr9dqAQC[k][q] < Jagr9dqAQC[XS4QXq9][q])
                    n++;
            }
            if (n == 0) {
                o = o + 1;
                cout << XS4QXq9 << '+' << q << endl;
            };
        };
    }
    if (o == 0)
        cout << "No";
    return 0;
}

