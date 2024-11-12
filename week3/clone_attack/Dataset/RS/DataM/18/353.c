int main () {
    int k5bP8XT, uIRscgmfEC1j, BnWazZFCpkf, inqscj, OU23h9aT4, min;
    int ZSnTAV0 [k5bP8XT] [k5bP8XT] [k5bP8XT], sum [k5bP8XT];
    int (*mj9M6kNPH) [k5bP8XT] [k5bP8XT] = ZSnTAV0, *rCYBlhHRd = sum;
    cin >> k5bP8XT;
    for (uIRscgmfEC1j = (941 - 941); k5bP8XT > uIRscgmfEC1j; uIRscgmfEC1j = uIRscgmfEC1j + 1)
        for (BnWazZFCpkf = (132 - 132); k5bP8XT > BnWazZFCpkf; BnWazZFCpkf = BnWazZFCpkf +1)
            for (inqscj = (751 - 751); k5bP8XT > inqscj; inqscj = inqscj + 1)
                cin >> *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj);
    for (uIRscgmfEC1j = (969 - 969); k5bP8XT > uIRscgmfEC1j; uIRscgmfEC1j = uIRscgmfEC1j + 1) {
        for (OU23h9aT4 = (151 - 151); OU23h9aT4 < k5bP8XT - (425 - 424); OU23h9aT4 = OU23h9aT4 +1) {
            for (BnWazZFCpkf = (478 - 478); k5bP8XT > BnWazZFCpkf; BnWazZFCpkf = BnWazZFCpkf +1) {
                min = *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf));
                for (inqscj = OU23h9aT4 +(915 - 914); k5bP8XT > inqscj; inqscj = inqscj + 1) {
                    if (*(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj) < min)
                        min = *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                for (inqscj = (19 - 19); k5bP8XT > inqscj; inqscj = inqscj + 1) {
                    *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj) = *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj) - min;
                };
            }
            for (inqscj = 0; inqscj < k5bP8XT; inqscj++) {
                min = *(*(*(mj9M6kNPH + uIRscgmfEC1j)) + inqscj);
                for (BnWazZFCpkf = OU23h9aT4 +(156 - 155); k5bP8XT > BnWazZFCpkf; BnWazZFCpkf++) {
                    if (min > *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj))
                        min = *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj);
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
                }
                {
                    BnWazZFCpkf = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (BnWazZFCpkf < k5bP8XT) {
                        *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj) = *(*(*(mj9M6kNPH + uIRscgmfEC1j) + BnWazZFCpkf) + inqscj) - min;
                        BnWazZFCpkf = BnWazZFCpkf +1;
                    };
                };
            }
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
            *(rCYBlhHRd + uIRscgmfEC1j) = *(rCYBlhHRd + uIRscgmfEC1j) + *(*(*(mj9M6kNPH + uIRscgmfEC1j) + OU23h9aT4 +(616 - 615)) + OU23h9aT4 +1);
        };
    }
    for (uIRscgmfEC1j = 0; uIRscgmfEC1j < k5bP8XT; uIRscgmfEC1j++)
        cout << *(rCYBlhHRd + uIRscgmfEC1j) << endl;
    memset (sum, (855 - 855), sizeof (sum));
    return 0;
}

