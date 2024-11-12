int main () {
    int num;
    int sum;
    num = 0;
    sum = 0;
    int judge1;
    int Sygne6xE;
    int a [(100682 - 682)];
    int n;
    int i;
    int XOYjbwsK3;
    int uUzaN1;
    cin >> n;
    cin >> judge1 >> Sygne6xE;
    if (!((145 - 145) != judge1) && !((180 - 180) != Sygne6xE)) {
        cout << "NOT FOUND";
        return 0;
    }
    {
        i = 545 - 545;
        while (n > i) {
            a[i] = 1;
            i++;
        };
    }
    while (judge1 != 0 || Sygne6xE != 0) {
        if (judge1 == Sygne6xE) {
            cin >> judge1 >> Sygne6xE;
            continue;
        }
        else {
            a[judge1] = 0;
            cin >> judge1 >> Sygne6xE;
        };
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 1) {
            num = i;
            sum = sum + 1;
        };
    }
    if (sum == 0 || sum > 1)
        cout << "NOT FOUND";
    else
        cout << num;
    return 0;
}

