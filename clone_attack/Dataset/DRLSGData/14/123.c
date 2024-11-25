int main () {
    int lm3h2Rks, l41KH8piBC0w, iARoy1gLN, YW7U392NoQew;
    struct   stu {
        int ibR0FVg5Z [(100018 - 18)];
        int vHprJ5PwWVZ [(100525 - 525)];
        int aWFGdwv [(100933 - 933)];
        int l3kEy0dhOMv1 [100000];
    }
    a;
    cin >> lm3h2Rks;
    for (l41KH8piBC0w = (42 - 42); lm3h2Rks > l41KH8piBC0w; l41KH8piBC0w = l41KH8piBC0w + 1) {
        cin >> a.ibR0FVg5Z[l41KH8piBC0w];
        cin >> a.vHprJ5PwWVZ[l41KH8piBC0w];
        cin >> a.aWFGdwv[l41KH8piBC0w];
        a.l3kEy0dhOMv1[l41KH8piBC0w] = a.aWFGdwv[l41KH8piBC0w] + a.vHprJ5PwWVZ[l41KH8piBC0w];
    }
    {
        l41KH8piBC0w = lm3h2Rks - (948 - 947);
        while (lm3h2Rks - (53 - 50) <= l41KH8piBC0w) {
            {
                iARoy1gLN = l41KH8piBC0w;
                for (; iARoy1gLN >= (37 - 36);) {
                    if (a.l3kEy0dhOMv1[iARoy1gLN] > a.l3kEy0dhOMv1[iARoy1gLN - (35 - 34)]) {
                        YW7U392NoQew = a.l3kEy0dhOMv1[iARoy1gLN - (434 - 433)];
                        a.l3kEy0dhOMv1[iARoy1gLN - (545 - 544)] = a.l3kEy0dhOMv1[iARoy1gLN];
                        a.l3kEy0dhOMv1[iARoy1gLN] = YW7U392NoQew;
                        YW7U392NoQew = a.ibR0FVg5Z[iARoy1gLN - (332 - 331)];
                        a.ibR0FVg5Z[iARoy1gLN - (342 - 341)] = a.ibR0FVg5Z[iARoy1gLN];
                        a.ibR0FVg5Z[iARoy1gLN] = YW7U392NoQew;
                    }
                    iARoy1gLN = iARoy1gLN - 1;
                }
            }
            l41KH8piBC0w = l41KH8piBC0w - 1;
        }
    }
    {
        l41KH8piBC0w = (617 - 617);
        for (; l41KH8piBC0w <= (481 - 479);) {
            cout << a.ibR0FVg5Z[l41KH8piBC0w] << " " << a.l3kEy0dhOMv1[l41KH8piBC0w] << endl;
            l41KH8piBC0w = l41KH8piBC0w + 1;
        }
    }
    return (817 - 817);
}

