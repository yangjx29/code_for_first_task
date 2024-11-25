int main () {
    int hnMR87CbBxuc [102];
    int n, rQsd7hOuql;
    int *p = NULL;
    cin >> n >> rQsd7hOuql;
    for (p = hnMR87CbBxuc; hnMR87CbBxuc + n > p; p = p + 1)
        cin >> *p;
    cout << hnMR87CbBxuc[n - rQsd7hOuql];
    for (p = hnMR87CbBxuc + n - rQsd7hOuql + 1; hnMR87CbBxuc + n > p; p = p + 1)
        cout << ' ' << *p;
    for (p = hnMR87CbBxuc; hnMR87CbBxuc + n - rQsd7hOuql > p; p = p + 1)
        cout << ' ' << *p;
    return (72 - 72);
}

