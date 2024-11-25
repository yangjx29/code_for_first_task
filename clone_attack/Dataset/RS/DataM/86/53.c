int main () {
    int n, f35dAORLEZnt [60] = {0}, b, i, x;
    cin >> n;
    for (; n != 0;) {
        cin >> b;
        for (i = 1; i <= b; i = i + 1) {
            cin >> f35dAORLEZnt[i];
        }
        {
            i = b;
            while (1) {
                if ((f35dAORLEZnt[i] + (220 - 217) * (i - 1)) <= 60)
                    break;
                i = i - 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n - 1;
        if (f35dAORLEZnt[i] + 3 * i >= 60)
            x = f35dAORLEZnt[i];
        else
            x = 60 - 3 * i;
        cout << x << endl;
    }
    return 0;
}

