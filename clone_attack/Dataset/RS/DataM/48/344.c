int main () {
    int i;
    int mtbf8eMhGq;
    int R2AFg5f;
    int m;
    int a [11] [11] = {0};
    int xVtoORy [11] [11] = {0};
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
    cin >> m >> R2AFg5f;
    a[5][5] = m;
    xVtoORy[5][5] = m;
    for (; R2AFg5f;) {
        {
            i = 1;
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
            while (i < 10) {
                for (mtbf8eMhGq = 1; mtbf8eMhGq < 10; mtbf8eMhGq++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (a[i][mtbf8eMhGq] > 0) {
                        xVtoORy[i][mtbf8eMhGq] += a[i][mtbf8eMhGq];
                        xVtoORy[i + 1][mtbf8eMhGq] = xVtoORy[i + 1][mtbf8eMhGq] + 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i][mtbf8eMhGq + 1] += 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i - 1][mtbf8eMhGq] = xVtoORy[i - 1][mtbf8eMhGq] + 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i][mtbf8eMhGq - 1] = xVtoORy[i][mtbf8eMhGq - 1] + 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i + 1][mtbf8eMhGq + 1] += 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i + 1][mtbf8eMhGq - 1] += 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i - 1][mtbf8eMhGq + 1] = xVtoORy[i - 1][mtbf8eMhGq + 1] + 1 * a[i][mtbf8eMhGq];
                        xVtoORy[i - 1][mtbf8eMhGq - 1] = xVtoORy[i - 1][mtbf8eMhGq - 1] + 1 * a[i][mtbf8eMhGq];
                    };
                }
                i++;
            };
        }
        R2AFg5f--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 1; i < 10; i++)
            for (mtbf8eMhGq = 1; mtbf8eMhGq < 10; mtbf8eMhGq++)
                a[i][mtbf8eMhGq] = xVtoORy[i][mtbf8eMhGq];
    }
    for (i = 1; i < 10; i++) {
        {
            mtbf8eMhGq = 1;
            while (mtbf8eMhGq < 9) {
                cout << a[i][mtbf8eMhGq] << " ";
                mtbf8eMhGq = mtbf8eMhGq + 1;
            };
        }
        cout << a[i][9] << endl;
    }
    return 0;
}

