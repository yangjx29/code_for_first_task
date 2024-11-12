int main () {
    char a [81];
    gets (a);
    int n, i, l, RixpL5PStQE1, PrZlqUD3V21P;
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        gets (a);
        l = strlen (a);
        PrZlqUD3V21P = 1;
        if (a[(147 - 147)] != '_' && ('a' > a[0] || a[0] > 'z') && ('A' > a[0] || 'Z' < a[0])) {
            cout << "0" << endl;
            PrZlqUD3V21P = 0;
        }
        for (RixpL5PStQE1 = 1; l > RixpL5PStQE1; RixpL5PStQE1++)
            if (a[RixpL5PStQE1] != '_' && ('a' > a[RixpL5PStQE1] || a[RixpL5PStQE1] > 'z') && (a[RixpL5PStQE1] < 'A' || a[RixpL5PStQE1] > 'Z') && (a[RixpL5PStQE1] < '0' || a[RixpL5PStQE1] > '9')) {
                if (PrZlqUD3V21P)
                    cout << "0" << endl;
                PrZlqUD3V21P = 0;
                break;
            }
        if (PrZlqUD3V21P)
            cout << "1" << endl;
    }
    return 0;
}

