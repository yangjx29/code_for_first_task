int main () {
    int i;
    int j;
    int k;
    int x1;
    int y1;
    int x2;
    int y2;
    int SSR2TehL [(896 - 796)] [(269 - 169)];
    int b [100] [100];
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
    int c [100] [100];
    cin >> x1 >> y1;
    for (i = (968 - 968); x1 > i; i = i + 1)
        for (j = (448 - 448); y1 > j; j = j + 1) {
            cin >> SSR2TehL[i][j];
        }
    cin >> x2 >> y2;
    for (i = (609 - 609); x2 > i; i = i + 1)
        for (j = (318 - 318); y2 > j; j++) {
            cin >> b[i][j];
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
        }
    for (i = (344 - 344); x1 > i; i = i + 1)
        for (j = 0; y2 > j; j++) {
            for (k = 0; y1 > k; k++) {
                c[i][j] = c[i][j] + SSR2TehL[i][k] * b[k][j];
            };
        }
    for (i = 0; i < x1; i++)
        for (j = 0; y2 > j; j++) {
            if (j < y2 - 1)
                cout << c[i][j] << " ";
            else
                cout << c[i][j] << endl;
        }
    return 0;
}

