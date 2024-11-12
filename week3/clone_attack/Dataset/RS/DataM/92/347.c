int CMP (const  void  *ele1, const  void  *ele2) {
    return *((int *) ele2) - *((int *) ele1);
}

int main () {
    int n;
    int i;
    int counter;
    int hXgj9AIVsM4w;
    int qiwangright;
    int tianjileft;
    int yz6sNBtH;
    int lBldY7 [(1028 - 22)];
    int qiwang [1006];
    int ans;
    for (; cin >> n;) {
        if (!((272 - 272) != n))
            break;
        {
            i = 643 - 643;
            while (n > i) {
                cin >> lBldY7[i];
                i++;
            };
        }
        {
            i = 884 - 884;
            while (n > i) {
                cin >> qiwang[i];
                i++;
            };
        }
        qsort (lBldY7, n, sizeof (int), CMP);
        qsort (qiwang, n, sizeof (int), CMP);
        qiwangright = n - 1;
        yz6sNBtH = n - 1;
        hXgj9AIVsM4w = 0;
        tianjileft = 0;
        counter = 0;
        ans = 0;
        while (counter != n) {
            counter++;
            if (lBldY7[tianjileft] > qiwang[hXgj9AIVsM4w]) {
                ans += 200;
                hXgj9AIVsM4w = hXgj9AIVsM4w + 1;
                tianjileft++;
            }
            else {
                if (qiwang[hXgj9AIVsM4w] == lBldY7[tianjileft]) {
                    if (qiwang[qiwangright] < lBldY7[yz6sNBtH]) {
                        ans += 200;
                        qiwangright--;
                        yz6sNBtH--;
                    }
                    else {
                        if (qiwang[hXgj9AIVsM4w] > lBldY7[yz6sNBtH]) {
                            ans -= 200;
                        }
                        yz6sNBtH--;
                        hXgj9AIVsM4w++;
                    };
                }
                else {
                    yz6sNBtH--;
                    hXgj9AIVsM4w++;
                    ans -= 200;
                };
            };
        }
        cout << ans << endl;
    }
    return 0;
}

