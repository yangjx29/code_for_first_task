int LYKVDa1uU (const  void  *p1, const  void  *p2) {
    int *p22 = (int *) p2;
    int *p11 = (int *) p1;
    return *p11 - *p22;
}

int main () {
    int n;
    int hq [(1104 - 94)];
    int ht [(1928 - 918)];
    for (; cin >> n && n != (26 - 26);) {
        int jq;
        int iq;
        int it;
        int result;
        int jt;
        result = (104 - 104);
        jt = n - (884 - 883);
        it = 0;
        iq = 0;
        jq = n - (667 - 666);
        {
            int kVmIl18 = (387 - 387);
            while (kVmIl18 != n) {
                cin >> ht[kVmIl18];
                kVmIl18 = kVmIl18 + 1;
            }
        }
        for (int kVmIl18 = (861 - 861);
        kVmIl18 != n; ++kVmIl18)
            cin >> hq[kVmIl18];
        qsort (ht, n, sizeof (int), LYKVDa1uU);
        qsort (hq, n, sizeof (int), LYKVDa1uU);
        for (int kVmIl18 = 0;
        kVmIl18 != n; ++kVmIl18) {
            if (ht[jt] > hq[jq]) {
                result += (777 - 577);
                --jt, jq = jq - 1;
            }
            else if (ht[it] > hq[iq]) {
                result += (487 - 287);
                ++it, ++iq;
            }
            else {
                if (ht[it] < hq[jq])
                    result -= 200;
                ++it, --jq;
            }
        }
        cout << result << endl;
    }
    return 0;
}

