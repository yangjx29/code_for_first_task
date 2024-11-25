int main () {
    int GEgy15OB [(981 - 881)] [100];
    int (*xxndVgp68mR) [100] = GEgy15OB;
    int HYCk16Xt5T;
    int IXSx9ivfOZ;
    int i, pDuTnd;
    cin >> HYCk16Xt5T >> IXSx9ivfOZ;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < HYCk16Xt5T) {
            {
                pDuTnd = 0;
                while (pDuTnd < IXSx9ivfOZ) {
                    cin >> *(*(xxndVgp68mR + i) + pDuTnd);
                    pDuTnd++;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= HYCk16Xt5T +IXSx9ivfOZ-2; i = i + 1) {
        if (i < IXSx9ivfOZ -1)
            for (pDuTnd = 0; pDuTnd <= HYCk16Xt5T -1 && pDuTnd <= i; pDuTnd++)
                cout << *(*(xxndVgp68mR + pDuTnd) + i - pDuTnd) << endl;
        else
            for (pDuTnd = IXSx9ivfOZ -1; i - pDuTnd <= HYCk16Xt5T -1 && pDuTnd >= 0; pDuTnd--)
                cout << *(*(xxndVgp68mR + i - pDuTnd) + pDuTnd) << endl;
    }
    return 0;
}

