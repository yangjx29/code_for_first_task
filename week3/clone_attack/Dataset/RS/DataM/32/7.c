int main () {
    int n, i = 0, A [50] [105] = {0}, B [50] [105] = {0}, k, j;
    char a [50] [105];
    char b [50] [105];
    cin >> n;
    while (i < n) {
        k = 0;
        cin.get ();
        cin >> a[i];
        cin.get ();
        cin >> b[i];
        cin.get ();
        j = 0;
        for (k = strlen (a[i]) - 1; 0 <= k; k--) {
            A[i][j] = a[i][k] - '0';
            j++;
        }
        j = 0;
        {
            k = i;
            while (0 <= k) {
                B[i][j] = b[i][k] - '0';
                k--;
                j++;
            };
        }
        for (j = 0; 105 > j; j++) {
            A[i][j] = A[i][j] - B[i][j];
            if (0 > A[i][j]) {
                A[i][j] = A[i][j] + 10;
                A[i][j + 1] = A[i][j + 1] - 1;
            };
        }
        j = 104;
        while (A[i][j] == 0)
            j = j - 1;
        for (k = j; k >= 0; k--)
            cout << A[i][k];
        cout << endl;
        i++;
    }
    return 0;
}

