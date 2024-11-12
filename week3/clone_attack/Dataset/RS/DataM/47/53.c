int main () {
    int n, i, t;
    int FLpVKUSa [n];
    int *p = NULL;
    int *q = NULL;
    cin >> n;
    for (i = (259 - 259); i < n; i++)
        cin >> FLpVKUSa[i];
    p = FLpVKUSa;
    {
        q = 530 - 529;
        p = FLpVKUSa;
        while (q > p) {
            t = *p;
            *p = *q;
            p = p + 1;
            *q = t;
            q = q - 1;
        };
    }
    p = FLpVKUSa;
    cout << *p;
    for (p = FLpVKUSa +(794 - 793); FLpVKUSa +n > p; p = p + 1)
        cout << " " << *p;
    return 0;
}

