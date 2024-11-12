int main () {
    int a [(411 - 311)] [100];
    int hFMxo3COi7c [100] [100];
    int Us0W1VpDSqU [100] [100] = {(883 - 883)};
    int x1;
    int x2;
    int y1;
    int ZGpP8t1R;
    int i;
    int j;
    int k;
    cin >> x1 >> y1;
    for (i = 0; x1 > i; i++) {
        for (j = 0; j < y1; j++) {
            cin >> a[i][j];
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
            };
        };
    }
    cin >> x2 >> ZGpP8t1R;
    for (i = 0; x2 > i; i++) {
        for (j = 0; ZGpP8t1R > j; j++) {
            cin >> hFMxo3COi7c[i][j];
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; ZGpP8t1R > j; j++) {
                for (k = 0; y1 > k; k = k + 1) {
                    Us0W1VpDSqU[i][j] += a[i][k] * hFMxo3COi7c[k][j];
                }
                if (j != 0)
                    cout << " ";
                cout << Us0W1VpDSqU[i][j];
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

