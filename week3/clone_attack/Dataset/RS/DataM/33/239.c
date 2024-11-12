int main () {
    char a [1000] [300];
    int o1rSEmzZap3c;
    int i;
    int j;
    cin >> o1rSEmzZap3c;
    cin.get ();
    {
        i = 1;
        while (i <= o1rSEmzZap3c) {
            cin >> a[i];
            {
                j = 0;
                while (a[i][j] != '\0') {
                    if (a[i][j] == 'A')
                        cout << 'T';
                    if (a[i][j] == 'T')
                        cout << 'A';
                    if (a[i][j] == 'G')
                        cout << 'C';
                    if (a[i][j] == 'C')
                        cout << 'G';
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

