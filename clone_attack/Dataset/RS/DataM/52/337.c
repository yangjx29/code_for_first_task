int main () {
    int HyZj96Yit;
    int lXeglIOEk4L;
    int *kdzig15nOTCG;
    int i;
    int LHEgzx [(1007 - 906)];
    int j;
    int k;
    int l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> lXeglIOEk4L >> HyZj96Yit;
    {
        i = 820 - 820;
        while (i < lXeglIOEk4L) {
            cin >> LHEgzx[i];
            i++;
        };
    }
    kdzig15nOTCG = LHEgzx;
    {
        i = 0;
        while (lXeglIOEk4L - HyZj96Yit > i) {
            *(kdzig15nOTCG + lXeglIOEk4L + i) = *(kdzig15nOTCG + i);
            i++;
        };
    }
    {
        i = 0;
        while (i < lXeglIOEk4L - (342 - 341)) {
            cout << *(kdzig15nOTCG + lXeglIOEk4L - HyZj96Yit +i) << ' ';
            i++;
        };
    }
    cout << *(kdzig15nOTCG + lXeglIOEk4L + lXeglIOEk4L - HyZj96Yit -1) << endl;
    return 0;
}

