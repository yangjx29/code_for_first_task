void  VvWmZtlfHq (int hLmrZBt3 [N] [N], int TTrsVN) {
    {
        int rbSOKeaghU = 0;
        for (; TTrsVN > rbSOKeaghU;) {
            {
                int kqPHS1k6ufMt;
                kqPHS1k6ufMt = 0;
                for (; kqPHS1k6ufMt < TTrsVN;) {
                    cout << setw (3) << hLmrZBt3[rbSOKeaghU][kqPHS1k6ufMt];
                    kqPHS1k6ufMt = kqPHS1k6ufMt + 1;
                }
            }
            cout << endl;
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
}

void  nTj9IBek8o (int hLmrZBt3 [N] [N], int S6W39sAR, int TTrsVN) {
    int nijwovlcpTUV [N] [N];
    memcpy (nijwovlcpTUV, hLmrZBt3, N *N);
    {
        int rbSOKeaghU;
        rbSOKeaghU = TTrsVN -2;
        for (; 0 <= rbSOKeaghU;) {
            nijwovlcpTUV[S6W39sAR][rbSOKeaghU] = min (nijwovlcpTUV[S6W39sAR][rbSOKeaghU], nijwovlcpTUV[S6W39sAR][rbSOKeaghU + 1]);
            rbSOKeaghU = rbSOKeaghU - 1;
        }
    }
    for (int rbSOKeaghU = 0;
    TTrsVN > rbSOKeaghU; rbSOKeaghU = rbSOKeaghU + 1)
        hLmrZBt3[S6W39sAR][rbSOKeaghU] -= nijwovlcpTUV[S6W39sAR][0];
}

void  LV5pld8P91m (int hLmrZBt3 [N] [N], int S6W39sAR, int TTrsVN) {
    int nijwovlcpTUV [N] [N];
    memcpy (nijwovlcpTUV, hLmrZBt3, N *N);
    {
        int rbSOKeaghU = TTrsVN -2;
        while (0 <= rbSOKeaghU) {
            nijwovlcpTUV[rbSOKeaghU][S6W39sAR] = min (nijwovlcpTUV[rbSOKeaghU][S6W39sAR], nijwovlcpTUV[rbSOKeaghU + 1][S6W39sAR]);
            rbSOKeaghU--;
        }
    }
    {
        int rbSOKeaghU = 0;
        while (rbSOKeaghU < TTrsVN) {
            hLmrZBt3[rbSOKeaghU][S6W39sAR] -= nijwovlcpTUV[0][S6W39sAR];
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
}

int vqrHkBNFl (int hLmrZBt3 [N] [N], int TTrsVN, int CwI6jfR) {
    {
        int rbSOKeaghU = 0;
        while (rbSOKeaghU < TTrsVN) {
            nTj9IBek8o (hLmrZBt3, rbSOKeaghU, TTrsVN);
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
    {
        int rbSOKeaghU;
        rbSOKeaghU = 0;
        for (; rbSOKeaghU < TTrsVN;) {
            LV5pld8P91m (hLmrZBt3, rbSOKeaghU, TTrsVN);
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
    CwI6jfR = CwI6jfR +hLmrZBt3[1][1];
    {
        int rbSOKeaghU = 1;
        while (TTrsVN -1 > rbSOKeaghU) {
            for (int kqPHS1k6ufMt = 0;
            TTrsVN > kqPHS1k6ufMt; kqPHS1k6ufMt++)
                hLmrZBt3[rbSOKeaghU][kqPHS1k6ufMt] = hLmrZBt3[rbSOKeaghU + 1][kqPHS1k6ufMt];
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
    TTrsVN = TTrsVN -1;
    {
        int rbSOKeaghU;
        rbSOKeaghU = 1;
        for (; rbSOKeaghU < TTrsVN -1;) {
            {
                int kqPHS1k6ufMt = 0;
                while (kqPHS1k6ufMt < TTrsVN -1) {
                    hLmrZBt3[kqPHS1k6ufMt][rbSOKeaghU] = hLmrZBt3[kqPHS1k6ufMt][rbSOKeaghU + 1];
                    kqPHS1k6ufMt = kqPHS1k6ufMt + 1;
                }
            }
            rbSOKeaghU = rbSOKeaghU + 1;
        }
    }
    if (!(1 != TTrsVN))
        return CwI6jfR;
    else
        return vqrHkBNFl (hLmrZBt3, TTrsVN, CwI6jfR);
}

int main () {
    int Qug0zqCwbUd;
    cin >> Qug0zqCwbUd;
    {
        int rbSOKeaghU = 0;
        for (; rbSOKeaghU < Qug0zqCwbUd;) {
            int XXOfeA3IE;
            int hLmrZBt3 [N] [N];
            XXOfeA3IE = vqrHkBNFl (hLmrZBt3, Qug0zqCwbUd, 0);
            memset (hLmrZBt3, 0, N *N);
            for (int rbSOKeaghU = 0;
            rbSOKeaghU < Qug0zqCwbUd; rbSOKeaghU++) {
                int kqPHS1k6ufMt = 0;
                for (; kqPHS1k6ufMt < Qug0zqCwbUd;) {
                    cin >> hLmrZBt3[rbSOKeaghU][kqPHS1k6ufMt];
                    kqPHS1k6ufMt = kqPHS1k6ufMt + 1;
                }
            }
            rbSOKeaghU++;
            cout << XXOfeA3IE << endl;
        }
    }
    return 0;
}

