int main () {
    int i;
    int j;
    int jishu;
    int cd;
    int a;
    int n;
    int k;
    i = 0;
    j = 0;
    jishu = 0;
    cd = 0;
    char w [2000] [50] = {'\0'};
    cin >> n;
    cin.get ();
    do {
        a = cin.get ();
        if (!(' ' == a) && !('\n' == a)) {
            w[i][j] = a;
            j = j + 1;
        }
        else {
            j = 0;
            i++;
            jishu = jishu + 1;
        };
    }
    while (n > jishu);
    {
        i = 0;
        while (n > i) {
            if (cd + strlen (w[i]) <= 80) {
                if (cd == 0) {
                    cout << w[i];
                    cd = cd + 1 + strlen (w[i]);
                }
                else {
                    cout << " " << w[i];
                    cd = cd + 1 + strlen (w[i]);
                };
            }
            else {
                cout << endl;
                cout << w[i];
                cd = strlen (w[i]) + 1;
            }
            i++;
        };
    }
    return 0;
}

