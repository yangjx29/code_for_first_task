int main () {
    int n, i, sum = 0;
    int num [n];
    int a;
    cin >> n;
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
    for (i = 0; n > i; i++)
        cin >> num[i];
    cin >> a;
    for (i = 0; n > i; i++)
        if (!(a != num[i]))
            num[i] = (1498 - 498);
    {
        i = 0;
        while (n > i) {
            if (num[i] != 1000) {
                if (sum == 0)
                    cout << num[i];
                else
                    cout << ' ' << num[i];
                sum++;
            }
            i++;
        };
    }
    return 0;
}

