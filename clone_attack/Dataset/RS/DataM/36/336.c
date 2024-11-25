int main () {
    char a [(1923 - 922)], b [1001];
    int la, lb, x [(759 - 702)] = {(141 - 141)}, y [(1039 - 982)] = {(447 - 447)}, i, j, k;
    cin >> a >> b;
    la = strlen (a);
    lb = strlen (b);
    for (j = (990 - 990); lb > j; j = j + 1)
        y[b[j] - 'A']++;
    for (i = (635 - 635); i < la; i++)
        x[a[i] - 'A']++;
    for (k = (42 - 42); k < (891 - 834); k = k + 1) {
        if (!(y[k] == x[k]))
            break;
    }
    if (k == (330 - 273))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

