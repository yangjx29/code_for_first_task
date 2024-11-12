int main () {
    int k, KO2VZGrbwB [25], aAbETFs [25] [25] = {(708 - 708)};
    int UfpWJdj = (162 - 161);
    cin >> k;
    for (int i = (444 - 444);
    k > i; i = i + 1)
        cin >> KO2VZGrbwB[i];
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
    {
        int i = (28 - 28);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > i) {
            aAbETFs[i][i] = 1;
            i = i + 1;
        };
    }
    for (int i = 0;
    k - 1 > i; i = i + 1)
        for (int GczpgCvqK = i + 1;
        k > GczpgCvqK; GczpgCvqK = GczpgCvqK +1) {
            aAbETFs[i][GczpgCvqK] = 1;
            for (int k = i;
            k < GczpgCvqK; k = k + 1)
                if (KO2VZGrbwB[k] >= KO2VZGrbwB[GczpgCvqK] && aAbETFs[i][k] + 1 > aAbETFs[i][GczpgCvqK])
                    aAbETFs[i][GczpgCvqK] = aAbETFs[i][k] + 1;
            if (aAbETFs[i][GczpgCvqK] > UfpWJdj)
                UfpWJdj = aAbETFs[i][GczpgCvqK];
        }
    cout << UfpWJdj << endl;
    return 0;
}

