int main () {
    int n;
    int i;
    n = 0;
    char qF5cAu [100] [20];
    char (*p) [20] = NULL;
    while (cin >> qF5cAu[n])
        n = n + 1;
    p = qF5cAu;
    cout << *p;
    for (i = 1; n > i; i = i + 1)
        cout << ' ' << *(p + i);
    cout << endl;
    return 0;
}

