int main () {
    int OLclyEV [16], i, LvTsfr37P, j, k, m;
    OLclyEV[(674 - 673)] = 1;
    for (; !(-1 == OLclyEV[1]);) {
        i = 1;
        for (; cin >> LvTsfr37P;) {
            OLclyEV[i] = LvTsfr37P;
            if (!(0 != OLclyEV[i]) || OLclyEV[i] == -1)
                break;
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
            i = i + 1;
        }
        m = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= i - 1; j++) {
            for (k = 1; k <= i - 1; k++) {
                if (OLclyEV[j] == 2 * OLclyEV[k])
                    m++;
            };
        }
        if (OLclyEV[i] != -1)
            cout << m << endl;
    }
    return 0;
}

