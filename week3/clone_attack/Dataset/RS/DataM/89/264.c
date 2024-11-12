int main () {
    int n;
    int i;
    int j;
    int a [100000] = {0};
    cin >> n;
    do {
        cin >> i >> j;
        a[i]--;
        a[j]++;
    }
    while (i != 0 || j != 0);
    {
        i = 0;
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
        while (i < n) {
            if (a[i] == n - 1) {
                cout << i << endl;
                break;
            }
            i = i + 1;
        };
    }
    if (i == n)
        cout << "NOT FOUND" << endl;
    return 0;
}

