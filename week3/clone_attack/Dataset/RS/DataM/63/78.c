int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int k;
    int m;
    int eoh34CE71AvL [101] [101] = {0};
    int b [101] [101] = {0};
    int c [101] [101] = {0};
    cin >> x1 >> y1;
    for (i = 1; x1 >= i; i = i + 1)
        for (j = 1; y1 >= j; j = j + 1)
            cin >> eoh34CE71AvL[i][j];
    cin >> x2 >> y2;
    for (i = 1; x2 >= i; i = i + 1)
        for (j = 1; y2 >= j; j++)
            cin >> b[i][j];
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            for (k = 1, m = 1; k <= y1 && m <= x2; k = k + 1, m++) {
                c[i][j] = c[i][j] + eoh34CE71AvL[i][k] * b[m][j];
            }
            if (j < y2)
                cout << c[i][j] << " ";
            else
                cout << c[i][j] << endl;
        };
    }
    return 0;
}

