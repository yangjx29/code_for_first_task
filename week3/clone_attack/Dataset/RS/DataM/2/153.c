int main () {
    char nbjOGRwKU [26], c;
    int m;
    int yV9PMW;
    int YCMWqu;
    int NhDoO0H8eg;
    int k;
    int d7OHJmp;
    int s [(286 - 260)] [999] = {0};
    int EAEV91Rhw [26] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> m;
    for (YCMWqu = 0; YCMWqu < m; YCMWqu = YCMWqu +1) {
        cin >> NhDoO0H8eg;
        cin >> nbjOGRwKU;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d7OHJmp = strlen (nbjOGRwKU);
        for (k = 0; d7OHJmp > k; k = k + 1) {
            yV9PMW = nbjOGRwKU[k] - 'A';
            s[yV9PMW][EAEV91Rhw[yV9PMW]] = NhDoO0H8eg;
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
            EAEV91Rhw[yV9PMW]++;
        };
    }
    NhDoO0H8eg = 0;
    for (YCMWqu = 1; 26 > YCMWqu; YCMWqu++) {
        if (EAEV91Rhw[YCMWqu] > EAEV91Rhw[NhDoO0H8eg])
            NhDoO0H8eg = YCMWqu;
    }
    c = 'A' + NhDoO0H8eg;
    cout << c << endl << EAEV91Rhw[NhDoO0H8eg] << endl;
    for (YCMWqu = 0;; YCMWqu++) {
        if (s[NhDoO0H8eg][YCMWqu] != 0)
            cout << s[NhDoO0H8eg][YCMWqu] << endl;
        else
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

