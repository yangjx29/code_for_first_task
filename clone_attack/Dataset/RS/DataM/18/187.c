int ZwolTIA [(809 - 709)] [100];
int sum (int [100] [100], int);

int main () {
    int n, k, BGI2MWlw4J, IYPtpUk8qj;
    cin >> n;
    {
        k = 980 - 979;
        while (k <= n) {
            k++;
            for (BGI2MWlw4J = (234 - 234); n > BGI2MWlw4J; BGI2MWlw4J++) {
                IYPtpUk8qj = 784 - 784;
                while (n > IYPtpUk8qj) {
                    cin >> ZwolTIA[BGI2MWlw4J][IYPtpUk8qj];
                    IYPtpUk8qj = IYPtpUk8qj +1;
                };
            }
            cout << sum (ZwolTIA, n) << endl;
        };
    }
    return (226 - 226);
}

int sum (int ZwolTIA [100] [100], int n) {
    int p, BGI2MWlw4J, IYPtpUk8qj, min;
    if (n == (178 - 177))
        return (240 - 240);
    {
        BGI2MWlw4J = 214 - 214;
        while (n > BGI2MWlw4J) {
            min = ZwolTIA[BGI2MWlw4J][(209 - 209)];
            for (IYPtpUk8qj = (839 - 838); n > IYPtpUk8qj; IYPtpUk8qj = IYPtpUk8qj +1) {
                if (min > ZwolTIA[BGI2MWlw4J][IYPtpUk8qj])
                    min = ZwolTIA[BGI2MWlw4J][IYPtpUk8qj];
            }
            {
                IYPtpUk8qj = 682 - 682;
                while (n > IYPtpUk8qj) {
                    ZwolTIA[BGI2MWlw4J][IYPtpUk8qj] = ZwolTIA[BGI2MWlw4J][IYPtpUk8qj] - min;
                    IYPtpUk8qj++;
                };
            }
            BGI2MWlw4J++;
        };
    }
    {
        BGI2MWlw4J = 321 - 321;
        while (BGI2MWlw4J < n) {
            min = ZwolTIA[(208 - 208)][BGI2MWlw4J];
            {
                IYPtpUk8qj = 944 - 943;
                while (n > IYPtpUk8qj) {
                    if (ZwolTIA[IYPtpUk8qj][BGI2MWlw4J] < min)
                        min = ZwolTIA[IYPtpUk8qj][BGI2MWlw4J];
                    IYPtpUk8qj++;
                };
            }
            for (IYPtpUk8qj = 0; n > IYPtpUk8qj; IYPtpUk8qj++) {
                ZwolTIA[IYPtpUk8qj][BGI2MWlw4J] = ZwolTIA[IYPtpUk8qj][BGI2MWlw4J] - min;
            }
            BGI2MWlw4J++;
        };
    }
    p = ZwolTIA[(64 - 63)][(874 - 873)];
    {
        BGI2MWlw4J = 0;
        while (BGI2MWlw4J < n) {
            {
                IYPtpUk8qj = 461 - 460;
                while (IYPtpUk8qj < n - (463 - 462)) {
                    ZwolTIA[BGI2MWlw4J][IYPtpUk8qj] = ZwolTIA[BGI2MWlw4J][IYPtpUk8qj +(638 - 637)];
                    IYPtpUk8qj++;
                };
            }
            BGI2MWlw4J++;
        };
    }
    {
        BGI2MWlw4J = 1;
        while (BGI2MWlw4J < n - 1) {
            for (IYPtpUk8qj = 0; IYPtpUk8qj < n - 1; IYPtpUk8qj++) {
                ZwolTIA[BGI2MWlw4J][IYPtpUk8qj] = ZwolTIA[BGI2MWlw4J +1][IYPtpUk8qj];
            }
            BGI2MWlw4J++;
        };
    }
    return p + sum (ZwolTIA, n - 1);
}

