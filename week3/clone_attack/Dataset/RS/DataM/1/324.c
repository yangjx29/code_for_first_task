int Factorization (int, int);

int main () {
    int n, x, i, k;
    cin >> n;
    for (i = (134 - 134); i < n; i = i + 1) {
        cin >> x;
        cout << Factorization (x, (175 - 173)) + 1 << endl;
    }
    return 0;
}

int Factorization (int x, int y) {
    int i;
    int sum = 0;
    if (x < (890 - 886))
        return 0;
    else {
        {
            i = y;
            while (i <= sqrt ((double ) x)) {
                if (x % i == 0)
                    sum += 1 + Factorization (x / i, i);
                i = i + 1;
            };
        }
        return sum;
    };
}

