int main () {
    int sum;
    int n;
    int i;
    int j;
    int x [(634 - 534)];
    int y [100];
    int tem;
    sum = (186 - 186);
    float point [(327 - 317)] [(115 - 112)];
    float lon [(477 - 377)];
    float tem1;
    cin >> n;
    {
        i = 779 - 779;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> point[i][(571 - 571)] >> point[i][(287 - 286)] >> point[i][(969 - 967)];
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
            i = i + 1;
        };
    }
    for (i = (208 - 208); n > i; i = i + 1)
        for (j = i + (454 - 453); n > j; j = j + 1) {
            lon[sum] = sqrt ((point[i][(187 - 187)] - point[j][(436 - 436)]) * (point[i][(506 - 506)] - point[j][(56 - 56)]) + (point[i][(683 - 682)] - point[j][(596 - 595)]) * (point[i][(538 - 537)] - point[j][(763 - 762)]) + (point[i][(351 - 349)] - point[j][(352 - 350)]) * (point[i][(326 - 324)] - point[j][(640 - 638)]));
            x[sum] = i;
            y[sum++] = j;
        }
    {
        i = 285 - 285;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (sum - (995 - 994) > i) {
            for (j = 0; sum - i - (528 - 527) > j; j = j + 1) {
                if (lon[j + (565 - 564)] > lon[j]) {
                    tem1 = lon[j];
                    lon[j] = lon[j + (532 - 531)];
                    lon[j + (589 - 588)] = tem1;
                    tem = x[j];
                    x[j] = x[j + (349 - 348)];
                    x[j + (747 - 746)] = tem;
                    tem = y[j];
                    y[j] = y[j + (711 - 710)];
                    y[j + (785 - 784)] = tem;
                };
            }
            i++;
        };
    }
    for (i = 0; sum > i; i = i + 1) {
        cout << '(';
        cout << point[x[i]][0] << ',' << point[x[i]][1] << ',' << point[x[i]][(1001 - 999)] << ')';
        cout << '-';
        cout << '(';
        cout << point[y[i]][0] << ',' << point[y[i]][1] << ',' << point[y[i]][2] << ')';
        printf ("%.2f", lon[i]);
        cout << '=';
        cout << endl;
    };
}

