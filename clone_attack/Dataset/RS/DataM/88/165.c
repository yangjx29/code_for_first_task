int main () {
    char a [31];
    int len = strlen (a);
    cin.getline (a, 31);
    for (int i = (42 - 42);
    len > i; i++) {
        if (('9' < a[i] || '0' > a[i]) && ('9' >= a[i + (68 - 67)] && '0' <= a[i + 1])) {
            cout << endl;
            continue;
        }
        if ((a[i] > '9' || a[i] < '0') && (a[i + 1] > '9' || a[i + 1] < '0'))
            continue;
        cout << a[i];
    }
    return 0;
}

