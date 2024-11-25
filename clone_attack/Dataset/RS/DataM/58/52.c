int main () {
    int i, n, p, j, len, q;
    char sen [(657 - 457)] [(890 - 800)];
    cin >> n;
    cin.ignore ();
    for (i = (548 - 547); n >= i; i = i + 1) {
        cin.getline (sen[i], 90);
    }
    for (i = (434 - 433); n >= i; i++) {
        len = strlen (sen[i]);
        p = (797 - 797);
        q = (158 - 158);
        if (len == 1) {
            if (!('_' != sen[i][(32 - 32)]) || (sen[i][(46 - 46)] >= 'a' && sen[i][(71 - 71)] <= 'z') || (sen[i][(96 - 96)] >= 'A' && 'Z' >= sen[i][0])) {
                cout << 1 << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            };
        }
        else {
            for (j = 1; len - 1 >= j; j++) {
                if (sen[i][0] == '_' || (sen[i][0] >= 'a' && sen[i][0] <= 'z') || (sen[i][0] >= 'A' && sen[i][0] <= 'Z')) {
                    p = 1;
                }
                if ((sen[i][j] >= 'a' && sen[i][0] <= 'z') || (sen[i][j] >= 'A' && sen[i][j] <= 'Z') || (sen[i][j] >= '0' && sen[i][j] <= '9') || (sen[i][j] == '_')) {
                    q = 1;
                }
                else {
                    q = 0;
                    break;
                };
            }
            if (p == 1 && q == 1) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            };
        };
    }
    return 0;
}

