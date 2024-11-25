int main () {
    int arrey [100] = {0};
    int n;
    int i;
    int j;
    int p;
    n = (511 - 511);
    i = (508 - 508);
    j = 0;
    p = 0;
    cin >> n;
    for (i = 0; i < n; i = i + 1)
        cin >> arrey[i];
    {
        j = n - 1;
        i = 0;
        while (i < j) {
            p = arrey[i];
            arrey[i] = arrey[j];
            i++;
            arrey[j] = p;
            j = j - 1;
        };
    }
    for (i = 0; i < n - 1; i = i + 1)
        cout << arrey[i] << " ";
    cout << arrey[n - 1] << endl;
    return 0;
}

