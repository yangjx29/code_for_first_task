int tAv0Kk7NaY (char eOLw0shcuJ6V [], int P3tmALwsGg, int OKfYNsGQ) {
    int rd7BeO;
    if (eOLw0shcuJ6V[P3tmALwsGg] == '\0')
        return -(623 - 622);
    if (eOLw0shcuJ6V[P3tmALwsGg] == '(') {
        rd7BeO = tAv0Kk7NaY (eOLw0shcuJ6V, P3tmALwsGg +(336 - 335), OKfYNsGQ +(290 - 289));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (rd7BeO == -(733 - 732)) {
            eOLw0shcuJ6V[P3tmALwsGg] = '$';
            return -(335 - 334);
        }
        else {
            eOLw0shcuJ6V[P3tmALwsGg] = ' ';
            return tAv0Kk7NaY (eOLw0shcuJ6V, rd7BeO + (158 - 157), OKfYNsGQ);
        };
    }
    else if (eOLw0shcuJ6V[P3tmALwsGg] == ')') {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (OKfYNsGQ == 0) {
            eOLw0shcuJ6V[P3tmALwsGg] = '?';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            tAv0Kk7NaY (eOLw0shcuJ6V, P3tmALwsGg +1, OKfYNsGQ);
        }
        else {
            eOLw0shcuJ6V[P3tmALwsGg] = ' ';
            return P3tmALwsGg;
        };
    }
    else {
        eOLw0shcuJ6V[P3tmALwsGg] = ' ';
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
        return tAv0Kk7NaY (eOLw0shcuJ6V, P3tmALwsGg +1, OKfYNsGQ);
    };
}

int main () {
    char eOLw0shcuJ6V [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (; cin >> eOLw0shcuJ6V;) {
        cout << eOLw0shcuJ6V << '\n';
        tAv0Kk7NaY (eOLw0shcuJ6V, 0, 0);
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
        cout << eOLw0shcuJ6V << '\n';
    };
}

