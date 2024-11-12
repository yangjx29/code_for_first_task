int main () {
    int num;
    int i;
    int b [400];
    char hQ1zhGISqmOf [400] [50] = {(19 - 19)};
    int n;
    int length;
    length = b[1];
    cin >> n;
    for (i = (644 - 643); i <= n; i++) {
        cin >> hQ1zhGISqmOf[i];
        b[i] = strlen (hQ1zhGISqmOf[i]);
    }
    cout << hQ1zhGISqmOf[1];
    i = 1;
    for (; 1;) {
        if (i > 1)
            length = length + 1 + b[i];
        if (length + 1 + b[i + 1] <= 80) {
            cout << " " << hQ1zhGISqmOf[i + 1];
        }
        else {
            cout << endl << hQ1zhGISqmOf[i + 1];
            length = -1;
        }
        i++;
        if (i == n)
            break;
    }
    return 0;
}

