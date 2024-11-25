int J3X4vJV1mcz [305];

int main () {
    int q6e0CPql;
    int cq3ut0DCljwV;
    cin >> q6e0CPql >> cq3ut0DCljwV;
    while (q6e0CPql != 0 && cq3ut0DCljwV != 0) {
        int i;
        i = (152 - 151);
        int step;
        step = 0;
        int flag;
        flag = 0;
        memset (J3X4vJV1mcz, 0, sizeof (J3X4vJV1mcz));
        for (; flag < q6e0CPql - 1;) {
            step = 0;
            for (; q6e0CPql >= i; i = i % q6e0CPql + 1) {
                if (J3X4vJV1mcz[i] == 0)
                    step = step + 1;
                if (step == cq3ut0DCljwV) {
                    J3X4vJV1mcz[i] = 1;
                    break;
                };
            }
            flag = flag + 1;
        }
        {
            int h5KcQbykh4rV = 1;
            while (h5KcQbykh4rV <= q6e0CPql) {
                if (J3X4vJV1mcz[h5KcQbykh4rV] == 0) {
                    cout << h5KcQbykh4rV << endl;
                    break;
                }
                h5KcQbykh4rV++;
            };
        }
        cin >> q6e0CPql >> cq3ut0DCljwV;
    }
    return 0;
}

