int main () {
    int n;
    int a [n];
    cin >> n;
    {
        int i = 0;
        while (i < n) {
            cin >> a[i];
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
            i++;
        };
    }
    if (n == 1)
        cout << a[0] << endl;
    else {
        cout << a[n - 1];
        {
            int i = n - 2;
            while (i >= 0) {
                cout << " " << a[i];
                i = i - 1;
            };
        };
    }
    return 0;
}

