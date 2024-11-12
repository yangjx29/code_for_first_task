int main () {
    char a [(935 - 854)];
    int hm9saKur, k, n;
    cin >> n;
    cin.get ();
    for (k = 1; k <= n; k = k + 1) {
        memset (a, (831 - 831), sizeof (a));
        cin.getline (a, sizeof (a));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((a[(268 - 268)] == '_') || (a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z')) {
            for (hm9saKur = 1; a[hm9saKur] != '\0';) {
                if ((a[hm9saKur] >= 'a' && a[hm9saKur] <= 'z') || (a[hm9saKur] >= 'A' && a[hm9saKur] <= 'Z') || (a[hm9saKur] >= '0' && a[hm9saKur] <= '9') || a[hm9saKur] == '_')
                    hm9saKur = hm9saKur + 1;
                else
                    break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (a[hm9saKur] == '\0')
                cout << '1' << endl;
            else
                cout << '0' << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

