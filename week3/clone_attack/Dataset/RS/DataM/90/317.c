int e (int a, int b);

int f (int a, int b) {
    int k;
    if (a > b) {
        k = f (a - b, b) + e (a - b, b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (a == b) {
        k = 1;
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
    else {
        k = 0;
    }
    return k;
}

int e (int a, int b) {
    int k;
    if (b > 1) {
        k = e (a, b - 1) + f (a, b - 1);
    }
    else {
        k = 0;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return k;
}

int main () {
    int Fn0jZ5VHUy;
    int cMRrfOq7B;
    int k;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> t;
    for (; t = t - 1;) {
        cin >> Fn0jZ5VHUy >> cMRrfOq7B;
        k = f (Fn0jZ5VHUy, cMRrfOq7B) + e (Fn0jZ5VHUy, cMRrfOq7B);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << k << endl;
    }
    return 0;
}

