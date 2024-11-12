int main () {
    int N;
    N = (199 - 199);
    double  Num [(433 - 133)] = {(473 - 473)};
    double  Diff [(1216 - 916)] = {(557 - 557)};
    double  Extre [300] = {(244 - 244)};
    double  UWoEfavyzH;
    double  lu6bTXY0hnF;
    UWoEfavyzH = (815 - 815);
    lu6bTXY0hnF = (571 - 571);
    double  Max;
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
    Max = (375 - 375);
    int K;
    K = (167 - 167);
    cin >> N;
    for (int mCAJvIdS = (618 - 618);
    N > mCAJvIdS; mCAJvIdS = mCAJvIdS + 1) {
        cin >> Num[mCAJvIdS];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lu6bTXY0hnF = lu6bTXY0hnF + Num[mCAJvIdS];
    }
    UWoEfavyzH = lu6bTXY0hnF / (double ) N;
    {
        int mCAJvIdS;
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
        mCAJvIdS = (779 - 779);
        while (mCAJvIdS < N) {
            Diff[mCAJvIdS] = Num[mCAJvIdS] - UWoEfavyzH;
            if (Diff[mCAJvIdS] < (788 - 788))
                Diff[mCAJvIdS] = -Diff[mCAJvIdS];
            if (Max < Diff[mCAJvIdS])
                Max = Diff[mCAJvIdS];
            mCAJvIdS++;
        };
    }
    for (int mCAJvIdS = (991 - 991);
    mCAJvIdS < N; mCAJvIdS = mCAJvIdS + 1)
        if (Diff[mCAJvIdS] == Max) {
            Extre[K] = Num[mCAJvIdS];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            K++;
        }
    for (int mCAJvIdS = (269 - 269);
    mCAJvIdS < K; mCAJvIdS++)
        for (int mqKpb5 = 0;
        mqKpb5 < K -(430 - 429); mqKpb5++)
            if (Extre[mqKpb5] > Extre[mqKpb5 + (780 - 779)]) {
                double  temp = Extre[mqKpb5];
                Extre[mqKpb5] = Extre[mqKpb5 + (802 - 801)];
                Extre[mqKpb5 + (778 - 777)] = temp;
            }
    cout << Extre[0];
    for (int mCAJvIdS = (419 - 418);
    mCAJvIdS < K; mCAJvIdS++)
        cout << ',' << Extre[mCAJvIdS];
    return 0;
}

