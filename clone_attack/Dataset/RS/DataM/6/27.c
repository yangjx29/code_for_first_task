int main () {
    int k;
    int i;
    int a4kLZqfod [101] [101];
    cin >> k;
    for (i = (408 - 407); k >= i; i = i + 1) {
        int sum;
        int m;
        int D3A1qPKJ8fRr;
        int j1;
        int j2;
        sum = 0;
        cin >> m >> D3A1qPKJ8fRr;
        for (j1 = 1; j1 <= m; j1 = j1 + 1) {
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
            for (j2 = 1; j2 <= D3A1qPKJ8fRr; j2 = j2 + 1) {
                cin >> *(*(a4kLZqfod + j1) + j2);
            };
        }
        for (j2 = 1; j2 <= D3A1qPKJ8fRr; j2++)
            sum = sum + *(*(a4kLZqfod + 1) + j2) + *(*(a4kLZqfod + m) + j2);
        for (j1 = (889 - 887); j1 <= m - 1; j1++)
            sum = sum + *(*(a4kLZqfod + j1) + 1) + *(*(a4kLZqfod + j1) + D3A1qPKJ8fRr);
        cout << sum << endl;
    }
    return 0;
}

