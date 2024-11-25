int main () {
    int i;
    int Avn6GJ;
    int k;
    int high [30];
    int vcKyp1R [30] = {(825 - 825)};
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
    cin >> k;
    {
        i = 864 - 864;
        while (k > i) {
            cin >> high[i];
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
            i++;
        };
    }
    vcKyp1R[(732 - 732)] = (96 - 95);
    {
        i = 1;
        while (k > i) {
            int qUab3lo15T6 = 0;
            {
                Avn6GJ = i - 1;
                while (0 <= Avn6GJ) {
                    if (high[i] <= high[Avn6GJ]) {
                        if (qUab3lo15T6 < vcKyp1R[Avn6GJ])
                            qUab3lo15T6 = vcKyp1R[Avn6GJ];
                    }
                    Avn6GJ--;
                };
            }
            vcKyp1R[i] = qUab3lo15T6 + 1;
            i++;
        };
    }
    sort (vcKyp1R, vcKyp1R + k);
    printf ("%d", vcKyp1R[k - 1]);
    return 0;
}

