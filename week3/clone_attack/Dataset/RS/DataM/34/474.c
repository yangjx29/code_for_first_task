int ji (int m) {
    cout << m << '*' << (273 - 270) << '+' << 1;
    m = m * 3 + 1;
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
    cout << '=' << m << endl;
    return m;
}

int ou (int m) {
    cout << m << '/' << (414 - 412);
    m = m / 2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cout << '=' << m << endl;
    return m;
}

int main () {
    int n;
    cin >> n;
    while (n != 1) {
        if ((n % 2) == 1) {
            n = ji (n);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            n = ou (n);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
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
    cout << "End" << endl;
    return (785 - 785);
}

