int main () {
    int g;
    int count;
    int KB0x8Pch;
    int i;
    int j;
    int k;
    int ucAgQFtEo4Bn;
    g = (713 - 713);
    count = (516 - 516);
    char a [(1999 - 999)];
    cin >> KB0x8Pch;
    cin.get ();
    for (k = (308 - 307); KB0x8Pch >= k; k++) {
        cin.getline (a, (10383 - 383), '\n');
        ucAgQFtEo4Bn = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (712 - 712); i < ucAgQFtEo4Bn; i = i + 1) {
            for (j = 0; ucAgQFtEo4Bn > j; j = j + 1) {
                if (a[i] == a[j]) {
                    count = count + 1;
                };
            }
            if (count == 1) {
                count = 0;
                cout << a[i] << endl;
                g = 1;
                break;
            }
            count = 0;
            g = 0;
        }
        if (g == 0)
            cout << "no" << endl;
    }
    return 0;
}

