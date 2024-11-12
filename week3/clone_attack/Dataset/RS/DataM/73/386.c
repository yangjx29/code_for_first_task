int main () {
    int a [(367 - 362)] [5];
    int i, j, max, pohUBPd, col1, k4ox7PCFwR2, k;
    for (i = (766 - 766); 5 > i; i++)
        for (j = (862 - 862); 5 > j; j++)
            cin >> a[i][j];
    for (i = 0; 5 > i; i++) {
        k4ox7PCFwR2 = 1;
        max = a[i][0];
        col1 = 0;
        for (j = 0; 5 > j; j++)
            if (max < a[i][j]) {
                max = a[i][j];
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
                col1 = j;
            }
        {
            k = 0;
            while (5 > k) {
                if (a[k][col1] < max) {
                    k4ox7PCFwR2 = 0;
                    continue;
                }
                k++;
            };
        }
        if (k4ox7PCFwR2 == 1) {
            cout << i + 1 << " " << col1 + 1 << " " << max << endl;
            break;
        };
    }
    if (k4ox7PCFwR2 != 1)
        cout << "not found" << endl;
    return 0;
}

