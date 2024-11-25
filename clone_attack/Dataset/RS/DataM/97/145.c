int main () {
    int i;
    int a [10];
    int n;
    i = 0;
    cin >> n;
    a[i] = n / 100;
    n = n % 100;
    i = i + 1;
    a[i] = n / 50;
    n = n % 50;
    i = i + 1;
    a[i] = n / 20;
    n = n % 20;
    i = i + 1;
    a[i] = n / 10;
    n = n % 10;
    i++;
    a[i] = n / 5;
    n = n % 5;
    i++;
    a[i] = n;
    {
        i = 0;
        while (i <= 5) {
            cout << a[i] << endl;
            i++;
        };
    }
    return 0;
}

