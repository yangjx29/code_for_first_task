int main () {
    float a = (142 - 142), b = 0, c = 0, d = 0;
    int AxqAfUtPRhr;
    int x [AxqAfUtPRhr];
    float a1;
    a1 = (268.0 - 168.0) * a / AxqAfUtPRhr;
    float ufpTLmPtHZ0 = 100.0 * b / AxqAfUtPRhr;
    float oKukUz0Ns1 = 100.0 * c / AxqAfUtPRhr;
    float d1 = 100.0 * d / AxqAfUtPRhr;
    printf ("1-18: %.2f%%\n", a1);
    printf ("19-35: %.2f%%\n", ufpTLmPtHZ0);
    printf ("36-60: %.2f%%\n", oKukUz0Ns1);
    printf ("60??: %.2f%%\n", d1);
    cin >> AxqAfUtPRhr;
    {
        int i = 0;
        while (i < AxqAfUtPRhr) {
            cin >> x[i];
            i++;
        };
    }
    {
        int mPXVBnaE = 0;
        while (mPXVBnaE < AxqAfUtPRhr) {
            if (x[mPXVBnaE] >= 1 && x[mPXVBnaE] <= 18)
                a++;
            else {
                if (x[mPXVBnaE] >= 19 && x[mPXVBnaE] <= 35)
                    b = b + 1;
                else if (x[mPXVBnaE] >= 36 && x[mPXVBnaE] <= 60)
                    c++;
                else if (x[mPXVBnaE] > 60)
                    d++;
            }
            mPXVBnaE++;
        };
    }
    return 0;
}

