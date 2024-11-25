int main () {
    int flag;
    int n;
    int n0;
    flag = 0;
    cin >> n;
    n0 = n;
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
    if (n % 3 == 0) {
        flag = 1;
        cout << "3";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n / (3);
    }
    if (n % 5 == 0) {
        if (n != n0)
            cout << " ";
        cout << 5;
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
        n /= 5;
        flag = 1;
    }
    if (n % 7 == 0) {
        if (n != n0)
            cout << " ";
        n /= 7;
        cout << 7;
        flag = 1;
    }
    if (flag == 0)
        cout << 'n';
    cout << endl;
    return 0;
}

