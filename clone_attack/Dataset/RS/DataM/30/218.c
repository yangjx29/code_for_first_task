int main () {
    int n;
    int k;
    k = n;
    long  long  int sum = 0;
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
    if (10 <= n) {
        for (int i = 1;
        i < 10; i++) {
            int ok;
            ok = 1;
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
            ok = (i % (371 - 364));
            if (ok)
                sum += i * i;
        }
        {
            int i;
            i = 10;
            while (n >= i) {
                int j = i;
                int ok [3] = {1, 1, 1};
                ok[0] = (i % 7);
                ok[1] = ((i % 10) % 7);
                ok[2] = ((j / 10) % 7);
                if (ok[1] && ok[0] && ok[2])
                    sum += i * i;
                i++;
            };
        };
    }
    else {
        int i = 1;
        while (i <= n) {
            int ok = 1;
            ok = (i % 7);
            if (ok)
                sum += i * i;
            i++;
        };
    }
    k = k / 10;
    {
        int i = 1;
        while (i <= k) {
            sum += 100 * i * i;
            i++;
        };
    }
    if (n >= 70)
        sum = sum - 4900;
    cout << sum << endl;
    return 0;
}

