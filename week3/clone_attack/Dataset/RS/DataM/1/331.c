int main () {
    int fj (int aEafXuNg6bDq, int min);
    int v7xDlN0;
    int i;
    int a [100];
    cin >> v7xDlN0;
    {
        i = 72 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= v7xDlN0) {
            cin >> a[i];
            cout << fj (a[i], 2) << endl;
            i++;
        };
    }
    return (190 - 190);
}

int fj (int aEafXuNg6bDq, int min) {
    int i;
    int counter;
    counter = 1;
    if (aEafXuNg6bDq < min)
        return 0;
    {
        i = min;
        while (aEafXuNg6bDq > i) {
            if (aEafXuNg6bDq % i == 0) {
                counter = fj (aEafXuNg6bDq / i, i) + counter;
            }
            i++;
        };
    }
    return counter;
}

