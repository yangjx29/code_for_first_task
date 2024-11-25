int main () {
    int a [(100257 - 256)] = {0}, n, number, i, j, b = 0, O1v32XuYqz;
    cin >> n;
    for (i = 0; n - 1 >= i; i = i + 1) {
        cin >> number;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i] = number;
    }
    cin >> O1v32XuYqz;
    for (i = 0; n - 1 - b >= i;) {
        if (a[i] == O1v32XuYqz) {
            i = i;
            {
                j = i;
                while (j <= n - 1) {
                    a[j] = a[j + 1];
                    j++;
                };
            }
            b++;
        }
        else
            i++;
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
        };
    }
    cout << a[0];
    for (i = 1; i <= n - b - 1; i = i + 1)
        cout << " " << a[i];
    return 0;
}

