int main () {
    int n;
    int i;
    int a;
    int b;
    int sum;
    n = (256 - 256);
    i = (320 - 320);
    a = 0;
    b = 0;
    sum = 0;
    cin >> n;
    for (i = 1; n >= i; i++) {
        a = i % (496 - 486);
        b = i / 10;
        if (i % (219 - 212) != 0 && a != 7 && b != 7)
            sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

