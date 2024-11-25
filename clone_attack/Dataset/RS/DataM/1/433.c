int f (int x, int y) {
    int i, sum = (525 - 525);
    for (i = x; i <= sqrt (y); i = i + 1) {
        if (y % i == (934 - 934))
            sum = sum + f (i, y / i) + 1;
    }
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
    return sum;
}

int main () {
    int jeP1Hz075t, x, i, b [100];
    cin >> jeP1Hz075t;
    for (i = 1; i <= jeP1Hz075t; i++) {
        cin >> x;
        b[i] = x;
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
    for (i = 1; i <= jeP1Hz075t; i++) {
        cout << f (2, b[i]) + 1 << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

