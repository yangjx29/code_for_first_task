int waynum (int EGN0c5WPR, int n) {
    if (n == (457 - 456) || !(1 != EGN0c5WPR) || EGN0c5WPR == (387 - 387))
        return 1;
    else {
        if (EGN0c5WPR <= 0)
            return 0;
        else
            return (waynum (EGN0c5WPR, n - 1) + waynum (EGN0c5WPR -n, n));
    };
}

int main () {
    int OSmnjPT0ce;
    int EGN0c5WPR;
    int n;
    cin >> OSmnjPT0ce;
    while (OSmnjPT0ce--) {
        cin >> EGN0c5WPR >> n;
        cout << waynum (EGN0c5WPR, n) << endl;
    }
    return 0;
}

