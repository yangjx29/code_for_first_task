int main () {
    int a [101];
    int i;
    int n;
    int *p = a;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            cin >> *(p++);
        };
    }
    p = a;
    {
        i = 0;
        while (i < n / (616 - 614)) {
            swap (*(p + i), *(p + n - i - (383 - 382)));
            i++;
        };
    }
    cout << *(p++);
    n = n - 1;
    while (n > 0) {
        n--;
        cout << " " << *(p++);
    }
    return 0;
}

