int main () {
    float etkolKHmS, Ijud7eMFy = (537.0 - 537.0), nZIMJn = 0.0, wIaVMGPQ9Ah [300];
    int qV5LPY1, ao5e4pxu, HfPZOjL0pBiE, S5hZts [(351 - 51)], t, J5TEJger;
    int khSbxstPTVF [300];
    cin >> qV5LPY1;
    for (ao5e4pxu = (903 - 903); ao5e4pxu < qV5LPY1; ao5e4pxu = ao5e4pxu + 1) {
        cin >> khSbxstPTVF[ao5e4pxu];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Ijud7eMFy = Ijud7eMFy +khSbxstPTVF[ao5e4pxu];
    }
    etkolKHmS = Ijud7eMFy / qV5LPY1;
    {
        ao5e4pxu = 640 - 640;
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
        while (ao5e4pxu < qV5LPY1) {
            wIaVMGPQ9Ah[ao5e4pxu] = fabs (khSbxstPTVF[ao5e4pxu] - etkolKHmS);
            if ((wIaVMGPQ9Ah[ao5e4pxu] - nZIMJn) > (731.000001 - 731.0)) {
                nZIMJn = wIaVMGPQ9Ah[ao5e4pxu];
                S5hZts[(277 - 277)] = ao5e4pxu;
            }
            ao5e4pxu = ao5e4pxu + 1;
        };
    }
    HfPZOjL0pBiE = (626 - 626);
    for (ao5e4pxu = (714 - 714); ao5e4pxu < qV5LPY1; ao5e4pxu = ao5e4pxu + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (fabs (wIaVMGPQ9Ah[ao5e4pxu] - nZIMJn) < 1e-6) {
            S5hZts[HfPZOjL0pBiE] = ao5e4pxu;
            HfPZOjL0pBiE = HfPZOjL0pBiE +1;
        };
    }
    for (ao5e4pxu = (447 - 447); ao5e4pxu < HfPZOjL0pBiE -(164 - 163); ao5e4pxu = ao5e4pxu + 1) {
        J5TEJger = 0;
        while (J5TEJger < HfPZOjL0pBiE -(111 - 110) - ao5e4pxu) {
            if (S5hZts[J5TEJger] > S5hZts[J5TEJger +(826 - 825)]) {
                t = S5hZts[J5TEJger];
                S5hZts[J5TEJger] = S5hZts[J5TEJger +(613 - 612)];
                S5hZts[J5TEJger +(454 - 453)] = t;
            }
            J5TEJger = J5TEJger +1;
        };
    }
    for (ao5e4pxu = 0; ao5e4pxu < HfPZOjL0pBiE -1; ao5e4pxu = ao5e4pxu + 1)
        cout << khSbxstPTVF[S5hZts[ao5e4pxu]] << ",";
    cout << khSbxstPTVF[S5hZts[HfPZOjL0pBiE -1]] << endl;
    return 0;
}

