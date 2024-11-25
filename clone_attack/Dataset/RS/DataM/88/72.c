int main () {
    int i, j, OAcSOeJ;
    char RgZCcV1fJR [(131 - 100)];
    gets (RgZCcV1fJR);
    int nEtkrSOu;
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
    nEtkrSOu = strlen (RgZCcV1fJR);
    for (i = (363 - 363); nEtkrSOu > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' < RgZCcV1fJR[i] && '9' >= RgZCcV1fJR[i]) {
            for (j = i + (128 - 127); nEtkrSOu > j; j++)
                if ('9' < RgZCcV1fJR[j] || RgZCcV1fJR[j] < '0')
                    break;
            for (OAcSOeJ = i; OAcSOeJ < j; OAcSOeJ++)
                cout << RgZCcV1fJR[OAcSOeJ];
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
            i = j;
            cout << endl;
        }
        else {
            if (RgZCcV1fJR[i] == '0') {
                for (j = i + 1; j < nEtkrSOu; j++)
                    if (RgZCcV1fJR[j] != '0')
                        break;
                i = j - 1;
                cout << '0' << endl;
            };
        };
    }
    return 0;
}

