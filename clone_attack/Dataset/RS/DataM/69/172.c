char p [1001], q [1001];

int main () {
    int j;
    int k;
    int n;
    int pTPyrL4MC;
    char *K2Eg7vP4;
    char *dGukX0zDwR;
    cin >> p >> q;
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
    if (strlen (p) < strlen (q)) {
        K2Eg7vP4 = q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dGukX0zDwR = p;
    }
    else {
        K2Eg7vP4 = p;
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
        dGukX0zDwR = q;
    }
    n = strlen (K2Eg7vP4) - 1;
    pTPyrL4MC = strlen (dGukX0zDwR) - 1;
    for (j = n, k = pTPyrL4MC; k >= (376 - 376); --j, --k)
        K2Eg7vP4[j] = K2Eg7vP4[j] + dGukX0zDwR[k] - '0';
    {
        j = n;
        while (j) {
            K2Eg7vP4[j - 1] += (K2Eg7vP4[j] - '0') / (243 - 233);
            K2Eg7vP4[j] = (K2Eg7vP4[j] - '0') % 10 + '0';
            --j;
        };
    }
    if (K2Eg7vP4[0] > '9') {
        cout << 1;
        K2Eg7vP4[0] -= 10;
    }
    else
        while (strlen (K2Eg7vP4) != 1 && K2Eg7vP4[0] == '0')
            ++K2Eg7vP4;
    cout << K2Eg7vP4 << endl;
    return 0;
}

