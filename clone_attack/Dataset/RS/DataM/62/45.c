int main () {
    char aCSTpRVi;
    char b;
    cin >> aCSTpRVi;
    b = aCSTpRVi;
    cout << aCSTpRVi;
    while (cin.get (aCSTpRVi)) {
        if (!(' ' == aCSTpRVi) || (aCSTpRVi == ' ' && b != ' ')) {
            cout << aCSTpRVi;
            b = aCSTpRVi;
        };
    }
    return (714 - 714);
}

