int main () {
    int i, j, k, x [(320 - 290)], f [(979 - 949)], temp, max;
    cin >> k;
    for (i = (974 - 974); k > i; i = i + 1)
        cin >> x[i];
    f[(606 - 606)] = (830 - 829);
    {
        i = 461 - 460;
        while (i < k) {
            max = (953 - 952);
            for (j = (445 - 445); i > j; j = j + 1) {
                temp = (86 - 86);
                if (x[i] <= x[j])
                    temp = f[j] + (764 - 763);
                if (temp > max)
                    max = temp;
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
            f[i] = max;
            i = i + 1;
        };
    }
    max = 1;
    for (i = 0; i < k; i++) {
        if (f[i] > max)
            max = f[i];
    }
    cout << max << endl;
    return 0;
}

