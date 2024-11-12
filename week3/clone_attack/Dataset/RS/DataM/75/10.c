int main () {
    int x [1000], y [1000], num [1000] = {(560 - 560)}, start, end, max = (713 - 713), count, i = 1, j;
    cin >> x[(509 - 509)];
    start = x[(850 - 850)];
    while (!(',' != cin.get ())) {
        cin >> x[i];
        if (start > x[i])
            start = x[i];
        i = i + 1;
    }
    cin >> y[0];
    end = y[0];
    count = i;
    i = 1;
    while (!(',' != cin.get ())) {
        cin >> y[i];
        if (end < y[i])
            end = y[i];
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
    }
    for (i = start; end > i; i = i + 1) {
        {
            j = 0;
            while (count > j) {
                if (x[j] <= i && i < y[j])
                    num[i]++;
                j = j + 1;
            };
        }
        if (num[i] > max)
            max = num[i];
    }
    cout << count << " " << max;
    return 0;
}

