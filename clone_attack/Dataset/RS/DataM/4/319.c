int main () {
    int Wdw0B1eJ [100] [100];
    int DGZIlvq;
    int j;
    int FawykR1U0D;
    int m;
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
    int UoYXQ1NRCjx;
    cin >> UoYXQ1NRCjx >> m;
    {
        DGZIlvq = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UoYXQ1NRCjx >= DGZIlvq) {
            {
                j = 1;
                while (m >= j) {
                    cin >> Wdw0B1eJ[DGZIlvq][j];
                    j = j + 1;
                };
            }
            DGZIlvq++;
        };
    }
    {
        DGZIlvq = 1;
        while (m + UoYXQ1NRCjx -1 >= DGZIlvq) {
            DGZIlvq++;
            {
                j = 1;
                while (j <= UoYXQ1NRCjx) {
                    if (DGZIlvq +1 - j > 0 && DGZIlvq +1 - j <= m)
                        cout << *(*(Wdw0B1eJ +j) + DGZIlvq +1 - j) << endl;
                    j++;
                };
            };
        };
    }
    return 0;
}

