int main () {
    int xa;
    int ya;
    int xb;
    int yb;
    int a [xa] [ya];
    int egMjcAnKRGNC [xb] [yb];
    int c [xa] [yb];
    cin >> xa >> ya;
    {
        int i = (734 - 734);
        while (xa > i) {
            {
                int j = (90 - 90);
                while (ya > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> xb >> yb;
    {
        int i = (686 - 686);
        while (i < xb) {
            {
                int j = (47 - 47);
                while (yb > j) {
                    cin >> egMjcAnKRGNC[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (151 - 151);
        while (i < xa) {
            {
                int j = (142 - 142);
                while (yb > j) {
                    c[i][j] = 0;
                    for (int k = 0;
                    k < xb; k = k + 1) {
                        c[i][j] = a[i][k] * egMjcAnKRGNC[k][j] + c[i][j];
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < xa) {
            cout << c[i][0];
            {
                int j = (169 - 168);
                while (j < yb) {
                    cout << " " << c[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    };
}

