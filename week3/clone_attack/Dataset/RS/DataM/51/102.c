int jqwR1BJs;
int num [200] = {0};

void  search (char s [200] [5], int j) {
    int jdaNxzgWCun = 0;
    extern int jqwR1BJs, num [200];
    for (int i = 1;
    j > i; i++)
        if (!(s[i][0] != s[j][0])) {
            jdaNxzgWCun = 1;
            for (int x = 1;
            jqwR1BJs > x; x++) {
                if (!(s[i][x] == s[j][x]))
                    jdaNxzgWCun = 0;
            }
            if (!(0 != jdaNxzgWCun))
                continue;
            else {
                num[i]++;
                return;
            };
        }
    num[j]++;
}

int main () {
    int BGa7Q06s = 0;
    int i = 1;
    char YnIxk7zOFf [500];
    char s [200] [5];
    extern int jqwR1BJs, num [200];
    cin >> jqwR1BJs;
    cin.get ();
    while (!('\n' == (YnIxk7zOFf[i] = cin.get ())))
        i++;
    {
        int j = 1;
        while (i - jqwR1BJs + 1 >= j) {
            for (int x = 0;
            x < jqwR1BJs; x++) {
                s[j][x] = YnIxk7zOFf[j + x];
            }
            search (s, j);
            j++;
        };
    }
    for (int j = 1;
    j <= i - jqwR1BJs + 1; j++) {
        if (num[j] > BGa7Q06s)
            BGa7Q06s = num[j];
    }
    if (BGa7Q06s == 1)
        cout << "NO" << endl;
    else {
        cout << BGa7Q06s << endl;
        for (int j = 1;
        j < i - jqwR1BJs + 1; j++) {
            if (num[j] == BGa7Q06s)
                for (int x = 0;
                x < jqwR1BJs; x++)
                    cout << s[j][x];
            cout << endl;
        };
    }
    return 0;
}

