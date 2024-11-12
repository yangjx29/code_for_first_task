int main () {
    char a [(1792 - 792)] [42];
    int n, i, zlb2WIR = 0, PoQpIjfZ48, k = 0, j;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        PoQpIjfZ48 = strlen (a[i]);
        if (zlb2WIR < 80 && zlb2WIR + PoQpIjfZ48 > 80) {
            {
                j = k;
                while (j < i - 1) {
                    cout << a[j] << " ";
                    j++;
                };
            }
            cout << a[j] << endl;
            zlb2WIR = 0;
            k = i;
            zlb2WIR = zlb2WIR + PoQpIjfZ48 +1;
        }
        else
            zlb2WIR = zlb2WIR + PoQpIjfZ48 +1;
        if (zlb2WIR == 80 || zlb2WIR == 81) {
            zlb2WIR = 0;
            for (j = k; j <= i - 1; j = j + 1)
                cout << a[j] << " ";
            cout << a[j] << endl;
            k = i + 1;
        };
    }
    {
        i = k;
        while (i < n - 1) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << a[n - 1] << endl;
    return 0;
}

