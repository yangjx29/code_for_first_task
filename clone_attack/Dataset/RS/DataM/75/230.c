int OokORWmM4KHf (int U2flQItKxSg) {
    int vnz5PvCkc = 1;
    {
        int i = (703 - 703);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < U2flQItKxSg) {
            i++;
            vnz5PvCkc = vnz5PvCkc * 10;
        };
    }
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
    return vnz5PvCkc;
}

void  FUgGusD (int reE0M843 [(1454 - 453)], char FSc0EiwdtF2 [(1930 - 929)]) {
    int j = (978 - 978), YzEoeDRqcgIM = (805 - 805);
    for (int i = strlen (FSc0EiwdtF2) - 1;
    i >= 0; i--) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(',' == FSc0EiwdtF2[i])) {
            reE0M843[YzEoeDRqcgIM] = reE0M843[YzEoeDRqcgIM] + (FSc0EiwdtF2[i] - '0') * OokORWmM4KHf (j);
            j++;
        }
        else {
            YzEoeDRqcgIM++;
            j = 0;
        };
    }
    return;
}

int PxL04GCn1 (char FSc0EiwdtF2 [100000]) {
    int kud4kO = 1;
    for (int i = 0;
    strlen (FSc0EiwdtF2) > i; i++) {
        if (!(',' != FSc0EiwdtF2[i]))
            kud4kO++;
    }
    return kud4kO;
}

int main () {
    int H0aPnfU = 0;
    int reE0M843 [(1606 - 605)];
    int len1, LfgEZDQ;
    int eEbdIRnclg [1000], time2 [1000];
    char Ii5YmQ [100000], g1inTDzt0 [100000];
    cin >> Ii5YmQ >> g1inTDzt0;
    memset (eEbdIRnclg, 0, sizeof (eEbdIRnclg));
    FUgGusD (eEbdIRnclg, Ii5YmQ);
    LfgEZDQ = len1 = PxL04GCn1 (Ii5YmQ);
    cout << len1 << ' ';
    memset (time2, 0, sizeof (time2));
    memset (reE0M843, 0, sizeof (reE0M843));
    FUgGusD (time2, g1inTDzt0);
    for (int i = 0;
    len1 > i; i++) {
        int j = eEbdIRnclg[i];
        while (j < time2[i]) {
            reE0M843[j]++;
            j++;
        };
    }
    for (int i = 0;
    i < 1001; i++) {
        if (H0aPnfU < reE0M843[i])
            H0aPnfU = reE0M843[i];
    }
    cout << H0aPnfU << endl;
    return 0;
}

