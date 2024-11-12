int main () {
    int ciRqvCBS, sv7pcyYaLD, iDpAzd1 [40] [40];
    cin >> ciRqvCBS >> sv7pcyYaLD;
    {
        int nr1veK = 0;
        while (ciRqvCBS + 1 >= nr1veK) {
            {
                int nxd07a8MFg = 0;
                while (sv7pcyYaLD + 1 >= nxd07a8MFg) {
                    iDpAzd1[nr1veK][nxd07a8MFg] = 0;
                    nxd07a8MFg++;
                };
            }
            nr1veK++;
        };
    }
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
    for (int nr1veK = 1;
    ciRqvCBS + 1 > nr1veK; nr1veK++)
        for (int nxd07a8MFg = 1;
        sv7pcyYaLD + 1 > nxd07a8MFg; nxd07a8MFg++)
            cin >> iDpAzd1[nr1veK][nxd07a8MFg];
    {
        int nr1veK = 1;
        while (ciRqvCBS + 1 > nr1veK) {
            {
                int nxd07a8MFg = 1;
                while (nxd07a8MFg < sv7pcyYaLD + 1) {
                    if (iDpAzd1[nr1veK - 1][nxd07a8MFg] <= iDpAzd1[nr1veK][nxd07a8MFg] && iDpAzd1[nr1veK][nxd07a8MFg] >= iDpAzd1[nr1veK][nxd07a8MFg - 1] && iDpAzd1[nr1veK][nxd07a8MFg] >= iDpAzd1[nr1veK + 1][nxd07a8MFg] && iDpAzd1[nr1veK][nxd07a8MFg] >= iDpAzd1[nr1veK][nxd07a8MFg + 1])
                        cout << nr1veK - 1 << " " << nxd07a8MFg - 1 << endl;
                    nxd07a8MFg++;
                };
            }
            nr1veK++;
        };
    }
    return 0;
}

