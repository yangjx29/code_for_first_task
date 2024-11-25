int main () {
    int Yi8enO;
    int cel;
    int n;
    int i;
    int count [50000] = {0};
    Yi8enO = 0;
    cel = -1;
    struct   question {
        int love;
        int beloved;
    }
    eoNlZ5QG [50000];
    cin >> n;
    {
        i = 0;
        while (1) {
            cin >> eoNlZ5QG[i].love >> eoNlZ5QG[i].beloved;
            if (eoNlZ5QG[i].love == 0 && eoNlZ5QG[i].beloved == 0)
                break;
            count[eoNlZ5QG[i].beloved]++;
            i = i + 1;
            Yi8enO = Yi8enO +1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (count[i] == n - 1) {
            cel = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (cel == -1) {
        cout << "NOT FOUND" << endl;
        return 0;
    }
    for (i = 0; i < Yi8enO; i++) {
        if (eoNlZ5QG[i].love == cel)
            break;
    }
    if (i == Yi8enO)
        cout << cel << endl;
    else
        cout << "NOT FOUND" << endl;
    return 0;
}

