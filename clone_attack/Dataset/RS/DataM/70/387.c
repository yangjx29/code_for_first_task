double  k [1000] [2];

double  nNQah3 (int fPfIZxNo, int xQnFO6Pxvul1) {
    double  dlbh7uOfWrwq;
    dlbh7uOfWrwq = sqrt (pow (k[fPfIZxNo][0] - k[xQnFO6Pxvul1][0], 2) + pow (k[fPfIZxNo][1] - k[xQnFO6Pxvul1][1], 2));
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
    return dlbh7uOfWrwq;
}

int main () {
    double  max;
    max = 0;
    int fPfIZxNo;
    int m;
    int xQnFO6Pxvul1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    fPfIZxNo = 0;
    double  s;
    cin >> m;
    for (fPfIZxNo = 0; m > fPfIZxNo; fPfIZxNo = fPfIZxNo + 1) {
        cin >> k[fPfIZxNo][0] >> k[fPfIZxNo][1];
    }
    for (fPfIZxNo = 0; fPfIZxNo < m; fPfIZxNo++) {
        for (xQnFO6Pxvul1 = 0; m > xQnFO6Pxvul1; xQnFO6Pxvul1++) {
            s = nNQah3 (fPfIZxNo, xQnFO6Pxvul1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (s > max)
                max = s;
        };
    }
    cout << max << endl;
    return 0;
}

