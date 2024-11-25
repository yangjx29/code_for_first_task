int main () {
    int pc8DpS26Hj;
    int lNr7d6ZVxF5;
    int H96adRVwZC;
    pc8DpS26Hj = 0;
    lNr7d6ZVxF5 = 0;
    float IPzALsgdFRDv [40];
    float DZFxjXVSk4ud [40];
    char CjIhnmuezZp [(445 - 435)];
    cin >> H96adRVwZC;
    for (int xv7dKlq = 1;
    xv7dKlq <= H96adRVwZC; xv7dKlq = xv7dKlq + 1) {
        cin >> CjIhnmuezZp;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        switch (CjIhnmuezZp[0]) {
        case 'f' :
            {
                cin >> DZFxjXVSk4ud[lNr7d6ZVxF5];
                lNr7d6ZVxF5++;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
        case 'm' :
            {
                cin >> IPzALsgdFRDv[pc8DpS26Hj];
                pc8DpS26Hj++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        };
    }
    for (int xv7dKlq = 1;
    xv7dKlq <= pc8DpS26Hj; xv7dKlq++) {
        int ldY7PGhHEzCo;
        ldY7PGhHEzCo = 0;
        while (ldY7PGhHEzCo < pc8DpS26Hj - xv7dKlq) {
            if (IPzALsgdFRDv[ldY7PGhHEzCo] > IPzALsgdFRDv[ldY7PGhHEzCo + 1]) {
                float z5XTqrOZMYQ;
                z5XTqrOZMYQ = IPzALsgdFRDv[ldY7PGhHEzCo];
                IPzALsgdFRDv[ldY7PGhHEzCo] = IPzALsgdFRDv[ldY7PGhHEzCo + 1];
                IPzALsgdFRDv[ldY7PGhHEzCo + 1] = z5XTqrOZMYQ;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ldY7PGhHEzCo++;
        };
    }
    {
        int xv7dKlq = 1;
        while (lNr7d6ZVxF5 >= xv7dKlq) {
            {
                int ldY7PGhHEzCo = 0;
                while (ldY7PGhHEzCo < lNr7d6ZVxF5 - xv7dKlq) {
                    if (DZFxjXVSk4ud[ldY7PGhHEzCo] < DZFxjXVSk4ud[ldY7PGhHEzCo + 1]) {
                        float z5XTqrOZMYQ = DZFxjXVSk4ud[ldY7PGhHEzCo];
                        DZFxjXVSk4ud[ldY7PGhHEzCo] = DZFxjXVSk4ud[ldY7PGhHEzCo + 1];
                        DZFxjXVSk4ud[ldY7PGhHEzCo + 1] = z5XTqrOZMYQ;
                    }
                    ldY7PGhHEzCo++;
                };
            }
            xv7dKlq++;
        };
    }
    for (int xv7dKlq = 0;
    xv7dKlq < pc8DpS26Hj; xv7dKlq++)
        cout << fixed << setprecision (2) << IPzALsgdFRDv[xv7dKlq] << " ";
    for (int xv7dKlq = 0;
    xv7dKlq < lNr7d6ZVxF5 - 1; xv7dKlq++)
        cout << DZFxjXVSk4ud[xv7dKlq] << " ";
    cout << DZFxjXVSk4ud[lNr7d6ZVxF5 - 1];
    return 0;
}

