int main () {
    int x;
    int vPYwjJl;
    const  int x1 = x, y1 = vPYwjJl;
    int a [x1 + (916 - 915)] [y1 + (95 - 94)];
    const  int x2 = x, y2 = vPYwjJl;
    int b [x2 + (271 - 270)] [y2 + (209 - 208)];
    int oh6ZKoq [x1 + 1] [y2 + 1];
    cin >> x >> vPYwjJl;
    {
        int aQ1IE40t = (344 - 343);
        while (x1 + (440 - 439) > aQ1IE40t) {
            for (int Y8aM7P6 = (406 - 405);
            Y8aM7P6 < y1 + (278 - 277); Y8aM7P6 = Y8aM7P6 +1)
                cin >> a[aQ1IE40t][Y8aM7P6];
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
            aQ1IE40t = aQ1IE40t + 1;
        };
    }
    cin >> x >> vPYwjJl;
    {
        int aQ1IE40t = 1;
        while (x2 + 1 > aQ1IE40t) {
            {
                int Y8aM7P6 = 1;
                while (y2 + 1 > Y8aM7P6) {
                    cin >> b[aQ1IE40t][Y8aM7P6];
                    Y8aM7P6 = Y8aM7P6 +1;
                };
            }
            aQ1IE40t = aQ1IE40t + 1;
        };
    }
    {
        int aQ1IE40t = 1;
        while (aQ1IE40t < x1 + 1) {
            {
                int Y8aM7P6 = 1;
                while (y2 + 1 > Y8aM7P6) {
                    oh6ZKoq[aQ1IE40t][Y8aM7P6] = (722 - 722);
                    {
                        int k = 1;
                        while (y1 + 1 > k) {
                            oh6ZKoq[aQ1IE40t][Y8aM7P6] += a[aQ1IE40t][k] * b[k][Y8aM7P6];
                            k++;
                        };
                    }
                    Y8aM7P6 = Y8aM7P6 +1;
                };
            }
            aQ1IE40t = aQ1IE40t + 1;
        };
    }
    {
        int aQ1IE40t = 1;
        while (x1 > aQ1IE40t) {
            {
                int Y8aM7P6 = 1;
                while (Y8aM7P6 < y2) {
                    cout << oh6ZKoq[aQ1IE40t][Y8aM7P6] << ' ';
                    Y8aM7P6++;
                };
            }
            cout << oh6ZKoq[aQ1IE40t][y2] << endl;
            aQ1IE40t++;
        };
    }
    for (int aQ1IE40t = 1;
    aQ1IE40t < y2; aQ1IE40t++)
        cout << oh6ZKoq[x1][aQ1IE40t] << ' ';
    cout << oh6ZKoq[x1][y2];
    return 0;
}

