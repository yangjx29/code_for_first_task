int main () {
    int n;
    int k;
    int i;
    int j;
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
    int a;
    cin >> n >> k;
    if (n == (365 - 364) && k == (263 - 263))
        cout << (434 - 433) << endl;
    for (i = (961 - 960);; i++) {
        if ((n * i + k) % (n - (975 - 974)) != 0)
            continue;
        else {
            j = n;
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
            a = i * n + k;
            while (j >= (244 - 242)) {
                if (a % (n - 1) != 0)
                    break;
                j = j - 1;
                a = a / (n - 1) * n + k;
            };
        }
        if (j == 1)
            break;
    }
    cout << a << endl;
    return 0;
}

