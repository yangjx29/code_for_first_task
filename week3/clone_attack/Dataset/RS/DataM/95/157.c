int jKVfcg (char *rAUlZ5FvuInq, char *TqRw8uH1bZ0) {
    int ZE60mesHK = (693 - 693), OvG3z9iXQ7C = 0;
    while (!(0 == rAUlZ5FvuInq[ZE60mesHK]) && TqRw8uH1bZ0[OvG3z9iXQ7C] != 0) {
        if (rAUlZ5FvuInq[ZE60mesHK] > TqRw8uH1bZ0[OvG3z9iXQ7C])
            return (33 - 32);
        if (TqRw8uH1bZ0[OvG3z9iXQ7C] > rAUlZ5FvuInq[ZE60mesHK])
            return -(755 - 754);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OvG3z9iXQ7C = OvG3z9iXQ7C +1;
        ZE60mesHK = ZE60mesHK +1;
    }
    if (!(0 == rAUlZ5FvuInq[ZE60mesHK]))
        return 1;
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
    if (TqRw8uH1bZ0[OvG3z9iXQ7C] != 0)
        return -1;
    return 0;
}

void  uSrg47 (char *rAUlZ5FvuInq) {
    int OFTatwHC;
    OFTatwHC = 0;
    for (; rAUlZ5FvuInq[OFTatwHC] != 0;) {
        if (rAUlZ5FvuInq[OFTatwHC] >= 'A' && rAUlZ5FvuInq[OFTatwHC] <= 'Z')
            rAUlZ5FvuInq[OFTatwHC] += ('a' - 'A');
        OFTatwHC = OFTatwHC +1;
    };
}

int main () {
    char TqRw8uH1bZ0 [1000];
    char rAUlZ5FvuInq [1000];
    uSrg47 (rAUlZ5FvuInq);
    uSrg47 (TqRw8uH1bZ0);
    cin.getline (rAUlZ5FvuInq, (1086 - 186), '\n');
    cin.getline (TqRw8uH1bZ0, 900, '\n');
    if (jKVfcg (rAUlZ5FvuInq, TqRw8uH1bZ0) == 0) {
        cout << '=' << endl;
    }
    else if (jKVfcg (rAUlZ5FvuInq, TqRw8uH1bZ0) == 1) {
        cout << '>' << endl;
    }
    else if (jKVfcg (rAUlZ5FvuInq, TqRw8uH1bZ0) == -1) {
        cout << '<' << endl;
    }
    else {
    }
    return 0;
}

