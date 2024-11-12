int main () {
    int num, n = 0;
    cin >> num;
    cin.get ();
    cin.get ();
    if (!(num % 3)) {
        cout << 3;
        n = (31 - 30);
    }
    if (!(num % 5)) {
        if (n)
            cout << ' ';
        cout << 5;
        n = 1;
    }
    if (!(num % 7)) {
        if (n)
            cout << ' ';
        cout << 7;
        n = 1;
    }
    if (!n)
        cout << 'n';
    return 0;
}

