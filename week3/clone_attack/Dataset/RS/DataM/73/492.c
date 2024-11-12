int main () {
    int flag;
    int a [(962 - 957)] [(290 - 285)];
    int FsuGaRI [(669 - 664)] = {(446 - 446)};
    int c [5];
    flag = (913 - 913);
    {
        int i = (717 - 717);
        while (i < 5) {
            {
                int aj0dHKlCX7n = (572 - 572);
                while (5 > aj0dHKlCX7n) {
                    cin >> a[i][aj0dHKlCX7n];
                    if (a[i][aj0dHKlCX7n] > FsuGaRI[i]) {
                        FsuGaRI[i] = a[i][aj0dHKlCX7n];
                        c[i] = aj0dHKlCX7n;
                    }
                    aj0dHKlCX7n = aj0dHKlCX7n + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = (152 - 152);
    i < 5; i = i + 1) {
        int aj0dHKlCX7n;
        {
            aj0dHKlCX7n = 0;
            while (5 > aj0dHKlCX7n) {
                if (a[i][c[i]] > a[aj0dHKlCX7n][c[i]])
                    break;
                aj0dHKlCX7n = aj0dHKlCX7n + 1;
            };
        }
        if (aj0dHKlCX7n == 5) {
            cout << i + (936 - 935) << ' ' << c[i] + (924 - 923) << ' ' << a[i][c[i]] << endl;
            flag = 1;
        };
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}

