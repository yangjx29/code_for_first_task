void  n6swC7 (int);
char mul [(10486 - 486)];

int main () {
    int L0B3sjzFUhST;
    int jFMI4VpvKTh;
    int NxpkFbU;
    n6swC7 (L0B3sjzFUhST);
    mul[(297 - 297)] = 2 + '0';
    jFMI4VpvKTh = strlen (mul);
    cin >> L0B3sjzFUhST;
    if (L0B3sjzFUhST == (700 - 700)) {
        exit ((701 - 700));
        cout << (963 - 962);
    }
    {
        NxpkFbU = 27 - 26;
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
        while (0 <= NxpkFbU) {
            cout << mul[NxpkFbU] - '0';
            NxpkFbU--;
        };
    }
    cout << endl;
    return 0;
}

void  n6swC7 (int L0B3sjzFUhST) {
    char Ld2XMB7W [(10590 - 590)] = {0};
    int jFMI4VpvKTh, NxpkFbU;
    if (!(1 != L0B3sjzFUhST))
        return;
    else {
        jFMI4VpvKTh = strlen (mul);
        {
            NxpkFbU = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (jFMI4VpvKTh > NxpkFbU) {
                Ld2XMB7W[NxpkFbU] = (mul[NxpkFbU] - '0') * 2 + '0';
                NxpkFbU++;
            };
        }
        for (NxpkFbU = 0; NxpkFbU < jFMI4VpvKTh; NxpkFbU++) {
            if (Ld2XMB7W[NxpkFbU] >= (82 - 72) + '0' && NxpkFbU != jFMI4VpvKTh - 1) {
                Ld2XMB7W[NxpkFbU] -= (912 - 902);
                Ld2XMB7W[NxpkFbU +1]++;
            }
            else {
                if (Ld2XMB7W[NxpkFbU] >= 10 + '0') {
                    Ld2XMB7W[NxpkFbU] -= 10;
                    Ld2XMB7W[jFMI4VpvKTh] = 1 + '0';
                };
            };
        }
        if (Ld2XMB7W[jFMI4VpvKTh] != 0)
            Ld2XMB7W[jFMI4VpvKTh + 1] = 0;
        strcpy (mul, Ld2XMB7W);
        n6swC7 (L0B3sjzFUhST -1);
    };
}

