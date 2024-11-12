int main () {
    char g0sYzbMHk5V9 [1000] [40];
    int i;
    int n;
    int len [1000];
    int line [100] = {0};
    int j;
    j = 0;
    cin >> n;
    cin.get ();
    {
        i = 878 - 878;
        while (n > i) {
            cin >> g0sYzbMHk5V9[i];
            i = i + 1;
        };
    }
    for (i = (528 - 528); i < n; i = i + 1)
        len[i] = strlen (g0sYzbMHk5V9[i]);
    cout << g0sYzbMHk5V9[0];
    line[0] = len[0];
    for (i = 1; i < n; i = i + 1) {
        if (line[j] + len[i] + 1 <= 80) {
            cout << " " << g0sYzbMHk5V9[i];
            line[j] = line[j] + len[i] + 1;
        }
        else {
            cout << endl << g0sYzbMHk5V9[i];
            j = j + 1;
            line[j] = line[j] + len[i];
        };
    }
    return 0;
}

