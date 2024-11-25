int PrimeNumber (int p) {
    int i;
    {
        i = 2;
        while (i <= sqrt (p)) {
            if (p % i == 0)
                return 0;
            i++;
        };
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
    return 1;
}

int main () {
    int m, j;
    cin >> m;
    {
        j = 3;
        while (j <= m / 2) {
            if (PrimeNumber (j) &&PrimeNumber(m - j))
                cout << j << ' ' << m - j << endl;
            j = j + 2;
        };
    }
    return 0;
}

