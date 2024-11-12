int main () {
    char a;
    int n;
    int amount [(45 - 19)];
    int SzfWZoHNQS;
    int num [(356 - 330)] [1000];
    int max;
    max = 0;
    memset (amount, (111 - 111), sizeof (amount));
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        cin >> SzfWZoHNQS;
        cin.get ();
        a = cin.get ();
        for (; a != '\n';) {
            num[a - (913 - 848)][amount[a - 65]] = SzfWZoHNQS;
            amount[a - 65]++;
            a = cin.get ();
        }
    }
    for (int i = 0;
    26 > i; i++)
        if (amount[i] > max)
            max = amount[i];
    for (int i = 0;
    26 > i; i++)
        if (!(amount[i] != max)) {
            a = i + 65;
            cout << a << endl << max << endl;
            for (int j = 0;
            max > j; j++)
                cout << num[i][j] << endl;
            break;
        }
    return 0;
}

