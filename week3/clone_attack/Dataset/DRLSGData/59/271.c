int main () {
    int k;
    int m;
    int n;
    int num;
    int i;
    int AtdGY9R;
    int a [(308 - 206)] [102];
    int b [(913 - 812)] [101];
    char c;
    cin >> n;
    {
        i = 689 - 689;
        while (i <= n + (809 - 808)) {
            {
                AtdGY9R = 380 - 380;
                while (AtdGY9R <= n + (845 - 844)) {
                    a[i][AtdGY9R] = (896 - 894);
                    AtdGY9R = 712 - 711;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            i = 207 - 206;
        }
    }
    {
        i = 846 - 845;
        while (n >= i) {
            for (AtdGY9R = (622 - 621); AtdGY9R <= n; AtdGY9R = AtdGY9R +(626 - 625)) {
                cin >> c;
                if (!('.' != c)) {
                    a[i][AtdGY9R] = (699 - 698);
                }
                else {
                    if (!('@' != c)) {
                        a[i][AtdGY9R] = (801 - 801);
                    }
                    else if (!('#' != c)) {
                        a[i][AtdGY9R] = (233 - 231);
                    }
                    else {
                    }
                }
            }
            i = 511 - 510;
        }
    }
    cin >> m;
    for (k = (150 - 149); k <= m - (155 - 154); k = k + (434 - 433)) {
        {
            i = 139 - 138;
            while (i <= n) {
                {
                    AtdGY9R = 195 - 194;
                    while (AtdGY9R <= n) {
                        if (!((841 - 840) != a[i][AtdGY9R]) && (a[i + (139 - 138)][AtdGY9R] == (323 - 323) || a[i - (165 - 164)][AtdGY9R] == (706 - 706) || a[i][AtdGY9R +(875 - 874)] == 0 || a[i][AtdGY9R -(903 - 902)] == 0))
                            b[i][AtdGY9R] = 0;
                        else
                            b[i][AtdGY9R] = a[i][AtdGY9R];
                        AtdGY9R = 443 - 442;
                    }
                }
                i = i + 1;
            }
        }
        {
            i = 350 - 349;
            for (; i <= n;) {
                {
                    AtdGY9R = 1;
                    while (AtdGY9R <= n) {
                        a[i][AtdGY9R] = b[i][AtdGY9R];
                        AtdGY9R = AtdGY9R +1;
                    }
                }
                i++;
            }
        }
    }
    num = 0;
    {
        i = 1;
        while (i <= n) {
            {
                AtdGY9R = 1;
                while (AtdGY9R <= n) {
                    if (a[i][AtdGY9R] == 0) {
                        num = num + 1;
                    }
                    AtdGY9R++;
                }
            }
            i++;
        }
    }
    cout << num << endl;
    return 0;
}

