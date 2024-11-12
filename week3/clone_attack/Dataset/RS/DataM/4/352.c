int main () {
    int DD47KYCJFSBV;
    int RfqQrw;
    int sgcbKHuv [(866 - 766)] [100];
    int J8myGShX6VeM;
    int xcFYnKT;
    cin >> DD47KYCJFSBV;
    cin >> RfqQrw;
    for (xcFYnKT = 0; xcFYnKT < DD47KYCJFSBV; xcFYnKT++) {
        J8myGShX6VeM = 0;
        while (J8myGShX6VeM < RfqQrw) {
            cin >> sgcbKHuv[xcFYnKT][J8myGShX6VeM];
            J8myGShX6VeM++;
        };
    }
    {
        xcFYnKT = 0;
        while (RfqQrw > xcFYnKT) {
            {
                J8myGShX6VeM = xcFYnKT;
                while (J8myGShX6VeM >= 0) {
                    if ((0 <= xcFYnKT - J8myGShX6VeM) && (xcFYnKT - J8myGShX6VeM) < DD47KYCJFSBV)
                        cout << *(sgcbKHuv[xcFYnKT - J8myGShX6VeM] + J8myGShX6VeM) << endl;
                    else
                        break;
                    J8myGShX6VeM--;
                };
            }
            xcFYnKT = xcFYnKT + 1;
        };
    }
    {
        xcFYnKT = 1;
        while (xcFYnKT < DD47KYCJFSBV) {
            {
                J8myGShX6VeM = RfqQrw -1;
                while (J8myGShX6VeM >= 0) {
                    if ((xcFYnKT + RfqQrw -1 - J8myGShX6VeM) < DD47KYCJFSBV)
                        cout << *(sgcbKHuv[xcFYnKT + RfqQrw -1 - J8myGShX6VeM] + J8myGShX6VeM) << endl;
                    else
                        break;
                    J8myGShX6VeM--;
                };
            }
            xcFYnKT++;
        };
    }
    return 0;
}

