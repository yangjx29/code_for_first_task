int an [1000] [1000];
int hang [1000], lie [1000];

int main () {
    int n;
    int i, R3xrsKew, k, l, mdwHBcs, phi5HSgrRm;
    cin >> n;
    for (l = 0; l < n; l++) {
        int TJMHCmg5yIT1 = 0;
        {
            i = 0;
            while (i < n) {
                {
                    R3xrsKew = 0;
                    while (R3xrsKew < n) {
                        cin >> an[i][R3xrsKew];
                        R3xrsKew++;
                    };
                }
                i++;
            };
        }
        for (k = n; 0 < k; k--) {
            for (mdwHBcs = 0; mdwHBcs < k; mdwHBcs++) {
                hang[mdwHBcs] = an[mdwHBcs][0];
                for (phi5HSgrRm = 0; phi5HSgrRm < k; phi5HSgrRm++) {
                    if (hang[mdwHBcs] > an[mdwHBcs][phi5HSgrRm])
                        hang[mdwHBcs] = an[mdwHBcs][phi5HSgrRm];
                }
                for (phi5HSgrRm = 0; phi5HSgrRm < k; phi5HSgrRm++)
                    an[mdwHBcs][phi5HSgrRm] = an[mdwHBcs][phi5HSgrRm] - hang[mdwHBcs];
            }
            for (phi5HSgrRm = 0; phi5HSgrRm < k; phi5HSgrRm++) {
                lie[phi5HSgrRm] = an[0][phi5HSgrRm];
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
                {
                    mdwHBcs = 0;
                    while (mdwHBcs < k) {
                        if (lie[phi5HSgrRm] > an[mdwHBcs][phi5HSgrRm])
                            lie[phi5HSgrRm] = an[mdwHBcs][phi5HSgrRm];
                        mdwHBcs = mdwHBcs + 1;
                    };
                }
                {
                    mdwHBcs = 0;
                    while (mdwHBcs < k) {
                        an[mdwHBcs][phi5HSgrRm] = an[mdwHBcs][phi5HSgrRm] - lie[phi5HSgrRm];
                        mdwHBcs++;
                    };
                };
            }
            TJMHCmg5yIT1 = TJMHCmg5yIT1 +an[1][1];
            for (i = 0; i < k; i = i + 1) {
                R3xrsKew = 1;
                while (R3xrsKew < k) {
                    an[i][R3xrsKew] = an[i][R3xrsKew +1];
                    R3xrsKew++;
                };
            }
            for (i = 1; i < k; i++) {
                for (R3xrsKew = 0; R3xrsKew < k; R3xrsKew++)
                    an[i][R3xrsKew] = an[i + 1][R3xrsKew];
            };
        }
        cout << TJMHCmg5yIT1 << endl;
    }
    return 0;
}

