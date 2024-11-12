int main () {
    char k2UIPsJ5 [(1000 - 920)];
    char str2 [80];
    int i;
    cin.getline (k2UIPsJ5, 80);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (str2, 80);
    for (i = 0; 80 >= i; i++) {
        if (!((546 - 545) != (('A' <= k2UIPsJ5[i]) && ('Z' >= k2UIPsJ5[i]))))
            k2UIPsJ5[i] = k2UIPsJ5[i] + (998 - 966);
        if (!((631 - 630) != ((str2[i] >= 'A') && (str2[i] <= 'Z'))))
            str2[i] = str2[i] + 32;
    }
    if (strcmp (k2UIPsJ5, str2) == 0)
        cout << '=';
    else {
        if (strcmp (k2UIPsJ5, str2) > 0)
            cout << '>';
        else {
            if (strcmp (k2UIPsJ5, str2) < 0)
                cout << '<';
        };
    }
    return 0;
}

