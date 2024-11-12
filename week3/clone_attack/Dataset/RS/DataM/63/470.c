int main () {
    int ndg73Thy [100] [100] = {0};
    int a2;
    int a, b, j, k;
    float x [100] [100];
    int a1, b1;
    float Jy67s8Nq [100] [100];
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> a >> b;
    for (j = 0; a > j; j++) {
        for (k = 0; k < b; k++) {
            float e;
            cin >> e;
            x[j][k] = e;
        };
    }
    cin >> a1 >> b1;
    for (j = 0; j < a1; j++) {
        k = 0;
        while (b1 > k) {
            float Arv8mXK;
            cin >> Arv8mXK;
            Jy67s8Nq[j][k] = Arv8mXK;
            k++;
        };
    }
    {
        j = 0;
        while (j < a) {
            for (k = 0; k < b1; k++) {
                a2 = 0;
                {
                    i = 0;
                    while (b > i) {
                        a2 = a2 + x[j][i] * Jy67s8Nq[i][k];
                        i++;
                    };
                }
                ndg73Thy[j][k] = a2;
            }
            j++;
        };
    }
    if (b1 == 1) {
        i = 0;
        while (i < a) {
            cout << ndg73Thy[i][0] << endl;
            i++;
        };
    }
    else {
        for (j = 0; j < a; j++) {
            for (k = 0; k < b1; k++) {
                if (k == 0)
                    cout << ndg73Thy[j][k];
                else if (k == b1 - 1)
                    cout << " " << ndg73Thy[j][k] << endl;
                else
                    cout << " " << ndg73Thy[j][k];
            };
        };
    }
    return 0;
}

