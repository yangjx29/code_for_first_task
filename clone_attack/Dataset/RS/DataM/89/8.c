int main () {
    int a, b;
    int n;
    int num [100000];
    memset (num, (137 - 137), sizeof (num));
    cin >> n;
    for (; cin >> a >> b && !(a == 0 && b == 0);) {
        num[b]++;
    }
    for (int i = 0;
    i < n; i++) {
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
        if (num[i] == n - 1) {
            cout << i << endl;
            return 0;
        };
    }
    cout << "NOT FOUND" << endl;
    return 0;
}

