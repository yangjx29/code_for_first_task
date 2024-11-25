int dAiY6LtQl (char part []) {
    int S6kMfnglc, mxtQS5FDO1H, RsFmkH3V;
    char Tq8KTHxL39nY [(1048 - 547)];
    RsFmkH3V = strlen (part);
    memset (Tq8KTHxL39nY, (104 - 104), sizeof (Tq8KTHxL39nY));
    mxtQS5FDO1H = RsFmkH3V -(446 - 445);
    {
        S6kMfnglc = 646 - 646;
        while (RsFmkH3V > S6kMfnglc) {
            Tq8KTHxL39nY[mxtQS5FDO1H--] = part[S6kMfnglc];
            S6kMfnglc++;
        };
    }
    Tq8KTHxL39nY[RsFmkH3V] = '\0';
    return (!(strcmp (part, Tq8KTHxL39nY)));
}

int main () {
    int S6kMfnglc, mxtQS5FDO1H, k, qRLoI4Gt, RsFmkH3V, n;
    char part [(860 - 359)];
    char BB2iRA0 [(1481 - 980)];
    cin.getline (BB2iRA0, (1422 - 922));
    RsFmkH3V = strlen (BB2iRA0);
    {
        n = 2;
        while (n <= RsFmkH3V) {
            {
                S6kMfnglc = 916 - 916;
                while (RsFmkH3V -n >= S6kMfnglc) {
                    memset (part, 0, 501);
                    part[0] = BB2iRA0[S6kMfnglc];
                    S6kMfnglc++;
                    k = (915 - 914);
                    {
                        mxtQS5FDO1H = S6kMfnglc +1;
                        while (mxtQS5FDO1H < S6kMfnglc +n) {
                            part[k++] = BB2iRA0[mxtQS5FDO1H];
                            mxtQS5FDO1H++;
                        };
                    }
                    part[k] = '\0';
                    if (dAiY6LtQl (part)) {
                        {
                            qRLoI4Gt = 0;
                            while (qRLoI4Gt < k) {
                                cout << part[qRLoI4Gt];
                                qRLoI4Gt++;
                            };
                        }
                        cout << endl;
                    };
                };
            }
            n++;
        };
    }
    return 0;
}

