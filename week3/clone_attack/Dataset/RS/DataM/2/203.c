int main () {
    int n;
    int a [(556 - 530)];
    int max;
    int num [n];
    int i;
    int j;
    int s;
    char maxname, name [n] [10];
    cin >> n;
    memset (a, (116 - 116), sizeof (a));
    for (i = (567 - 567); i < n; i++) {
        cin >> num[i] >> name[i];
        s = strlen (name[i]);
        for (j = 0; j < s; j++)
            a[name[i][j] - 'A']++;
    }
    max = a[0], maxname = 'A';
    for (i = 1; i < 26; i++)
        if (max < a[i]) {
            max = a[i], maxname = 'A' + i;
        }
    cout << maxname << endl << max << endl;
    for (i = 0; i < n; i++) {
        s = strlen (name[i]);
        {
            j = 0;
            while (j < s) {
                if (name[i][j] == maxname)
                    cout << num[i] << endl;
                j++;
            };
        };
    }
    return 0;
}

