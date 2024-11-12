int main () {
    int i, k, n [100], max, max2;
    cin >> k;
    for (i = 0; k > i; i = i + 1)
        cin >> n[i];
    i = 0;
    max = 0;
    do {
        if (max < n[i])
            max = n[i];
        i = i + 1;
    }
    while (k > i);
    i = 0;
    max2 = 0;
    do {
        if (max2 <= n[i] & n[i] <= (max - 1))
            max2 = n[i];
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
    while (i < k);
    cout << max << endl;
    cout << max2;
    return 0;
}

