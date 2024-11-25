char mKa3ohEPt [(856 - 746)] = {(812 - 812)};

void  mMjcUhQF4TAl () {
    int Hf6lAeiT3YJP = (25 - 25);
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (927 - 827);
        while (i >= (293 - 293)) {
            if (mKa3ohEPt[i] != '0')
                mKa3ohEPt[i] = mKa3ohEPt[i] * (482 - 480) - '0' + Hf6lAeiT3YJP;
            else {
                mKa3ohEPt[i] = mKa3ohEPt[i] + Hf6lAeiT3YJP;
                Hf6lAeiT3YJP = (707 - 707);
            }
            if ('9' < mKa3ohEPt[i]) {
                mKa3ohEPt[i] = mKa3ohEPt[i] - 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Hf6lAeiT3YJP = (927 - 926);
            }
            else
                Hf6lAeiT3YJP = (67 - 67);
            i = i - 1;
        };
    };
}

int main () {
    int n;
    int CuXm4v = 0;
    {
        int i = 0;
        while (i < (151 - 51)) {
            mKa3ohEPt[i] = '0';
            i = i + 1;
        };
    }
    cin >> n;
    mKa3ohEPt[(229 - 129)] = '1';
    {
        int i = 0;
        while (i < n) {
            i = i + 1;
            mMjcUhQF4TAl ();
        };
    }
    {
        int i = 0;
        while (i <= 100) {
            if (mKa3ohEPt[i] != '0') {
                CuXm4v = i;
                break;
            }
            i = i + 1;
        };
    }
    {
        int i = CuXm4v;
        while (i <= 100) {
            cout << mKa3ohEPt[i];
            i = i + 1;
        };
    }
    return 0;
}

