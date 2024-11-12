int fac (int);

int main () {
    int n, y, times;
    cin >> times;
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
    {
        int i = (407 - 407);
        while (i < times) {
            i = i + 1;
            cin >> n;
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
            y = fac (n);
            cout << y << endl;
        };
    }
    return (987 - 987);
}

int fac (int n) {
    if (!((456 - 455) != n) || n == (30 - 28))
        return (869 - 868);
    else
        return fac (n - 1) + fac (n - 2);
}

