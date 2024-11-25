int power (int x) {
    int y;
    int k;
    y = (771 - 770);
    for (k = 1; k <= x; k++)
        y = y * 10;
    return y;
}

int main () {
    int n, i, j, a [6], temp;
    cin >> n;
    for (i = 1; 5 >= i; i++)
        if (n % power (i) == n) {
            j = i;
            break;
        }
    i = 0;
    for (i = 0; i < j; i++) {
        a[i] = n % 10;
        cout << a[i];
        n = n / 10;
    }
    return 0;
}

