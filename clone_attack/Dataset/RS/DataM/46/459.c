int main () {
    int i, j;
    int AKreIGf, aSdRZJN;
    int a [100] [100];
    int KOETmHZVxU = 0, quan = 1;
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
    cin >> AKreIGf >> aSdRZJN;
    for (i = (591 - 590); AKreIGf >= i; i = i + 1) {
        for (j = 1; aSdRZJN >= j; j++)
            cin >> a[i][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    while (AKreIGf *aSdRZJN > KOETmHZVxU) {
        for (i = quan; aSdRZJN - quan + 1 >= i; i = i + 1) {
            cout << a[quan][i] << endl;
            KOETmHZVxU = KOETmHZVxU +1;
        }
        if (KOETmHZVxU == AKreIGf *aSdRZJN)
            break;
        for (i = quan + 1; AKreIGf -quan + 1 >= i; i++) {
            cout << a[i][aSdRZJN - quan + 1] << endl;
            KOETmHZVxU = KOETmHZVxU +1;
        }
        if (KOETmHZVxU == AKreIGf *aSdRZJN)
            break;
        {
            i = aSdRZJN - quan;
            while (i >= quan) {
                cout << a[AKreIGf -quan + 1][i] << endl;
                KOETmHZVxU = KOETmHZVxU +1;
                i = i - 1;
            };
        }
        if (KOETmHZVxU == AKreIGf *aSdRZJN)
            break;
        for (i = AKreIGf -quan; i >= quan + 1; i--) {
            KOETmHZVxU++;
            cout << a[i][quan] << endl;
        }
        if (KOETmHZVxU == AKreIGf *aSdRZJN)
            break;
        quan = quan + 1;
    }
    return 0;
}

