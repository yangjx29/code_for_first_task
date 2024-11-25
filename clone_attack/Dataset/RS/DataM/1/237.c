int f (int m, int min);

int main () {
    int n;
    int i;
    int a [100];
    int sum [100];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum[i] = f (a[i], (792 - 790));
            cout << sum[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

int f (int m, int min) {
    int sum;
    int i;
    sum = 0;
    if (m == min || !((233 - 232) != m))
        return 1;
    else if (m < min)
        return 0;
    else if (m > min) {
        {
            i = min;
            while (i <= m) {
                if (m % i == 0)
                    sum = sum + f (m / i, i);
                i++;
            };
        }
        return sum;
    };
}

