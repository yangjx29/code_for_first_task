int main () {
    int *p;
    int n;
    int i;
    int a [100];
    cin >> n;
    p = a;
    for (i = 0; n > i; i = i + 1)
        cin >> *p++;
    for (p = p - 1; p > a;)
        cout << *p-- << ' ';
    cout << *p;
    return 0;
}

