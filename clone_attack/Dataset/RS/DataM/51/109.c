int main () {
    int mx = 0;
    int jzbVKNcd4gF = 0;
    char wYHrNizG6 [100] [10];
    char s [600];
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0;
    !('\0' == s[i + n]); i++) {
        int PG4fFXOZ9bKt = (848 - 847);
        for (int j = i + 1;
        s[j + n - 1] != '\0'; j++) {
            int k;
            {
                k = 0;
                while (k < n) {
                    if (s[i + k] != s[j + k])
                        break;
                    k++;
                };
            }
            if (k == n)
                PG4fFXOZ9bKt++;
        }
        if (PG4fFXOZ9bKt > mx) {
            jzbVKNcd4gF = 1;
            {
                int j = 0;
                while (j < n) {
                    wYHrNizG6[jzbVKNcd4gF][j] = s[i + j];
                    j++;
                };
            }
            wYHrNizG6[jzbVKNcd4gF][n] = '\0';
            mx = PG4fFXOZ9bKt;
        }
        else {
            if (PG4fFXOZ9bKt == mx) {
                jzbVKNcd4gF++;
                {
                    int j = 0;
                    while (j < n) {
                        wYHrNizG6[jzbVKNcd4gF][j] = s[i + j];
                        j++;
                    };
                }
                wYHrNizG6[jzbVKNcd4gF][n] = '\0';
            };
        };
    }
    if (mx != 1) {
        cout << mx << endl;
        {
            int i = 1;
            while (i <= jzbVKNcd4gF) {
                cout << wYHrNizG6[i] << endl;
                i++;
            };
        };
    }
    else {
        cout << "NO";
    };
}

