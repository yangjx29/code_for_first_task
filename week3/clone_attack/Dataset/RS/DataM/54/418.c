int main () {
    int n, k, m, num, c = 0;
    cin >> n >> k;
    {
        int i = 1;
        while (1) {
            num = n * i + k;
            {
                int j = 1;
                while (j < n) {
                    if ((num * n) % (n - 1) != 0)
                        break;
                    else {
                        num = num * n / (n - 1) + k;
                        if (j == n - 1) {
                            c = c + 1;
                            cout << num << endl;
                            break;
                        };
                    }
                    j = j + 1;
                };
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
            if (c == 1)
                break;
            i++;
        };
    }
    return 0;
}

