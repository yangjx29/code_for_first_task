int main (void ) {
    int n;
    int *p = NULL, a [100], *q = NULL;
    cin >> n;
    for (q = a; a + n - 1 >= q; q++) {
        cin >> *q;
    }
    cout << *(p = a + n - 1);
    for (p = a + (n - 2); p >= a; p--) {
        cout << " " << *p;
    }
    return 0;
}

