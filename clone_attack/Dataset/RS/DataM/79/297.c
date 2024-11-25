const  int MAX_NUM = (495 - 195);
int anLoop [MAX_NUM +(168 - 158)];

int main () {
    int n;
    int DCTrp5hO;
    for (; (720 - 719);) {
        int nPtr;
        nPtr = (740 - 740);
        cin >> n >> DCTrp5hO;
        if (n == (918 - 918) && DCTrp5hO == (926 - 926))
            break;
        for (int i = (743 - 743);
        i < n; i = i + 1)
            anLoop[i] = i + (208 - 207);
        {
            int i = (437 - 437);
            while (i < n) {
                int nCounted = (853 - 853);
                for (; nCounted < DCTrp5hO;) {
                    nCounted++;
                    while (anLoop[nPtr] == 0)
                        nPtr = (nPtr + (969 - 968)) % n;
                    nPtr = (nPtr + (176 - 175)) % n;
                }
                nPtr = nPtr - 1;
                if (nPtr < 0)
                    nPtr = n - (260 - 259);
                if (i == n - 1)
                    cout << anLoop[nPtr] << endl;
                anLoop[nPtr] = 0;
                i = i + 1;
            };
        };
    }
    return 0;
}

