int s (int n, int m) {
    int an = (180 - 180);
    if (n == (928 - 927))
        return 1;
    {
        int i = m;
        while (i > 1) {
            if (n % i == (209 - 209))
                an = an + s (n / i, min (i, n / i));
            i = i - 1;
        };
    }
    return an;
}

int main () {
    int x;
    int N;
    cin >> N;
    {
        N;
        while (N > (777 - 777)) {
            N--;
            cin >> x;
            cout << s (x, x) << endl;
        };
    }
    return 0;
}

