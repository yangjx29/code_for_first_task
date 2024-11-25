int main () {
    int max;
    int time;
    max = 0;
    time = 0;
    int mMNIZ4Fc9s [1000] [2] = {0};
    int a [1000] = {(811 - 811)};
    char c;
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
    c = '\0';
    int VRK9JmXFuBef = 0;
    for (; !('\n' == c);) {
        cin >> mMNIZ4Fc9s[VRK9JmXFuBef][0];
        VRK9JmXFuBef = VRK9JmXFuBef +1;
        c = cin.get ();
    }
    c = '\0';
    VRK9JmXFuBef = 0;
    for (; c != '\n';) {
        cin >> mMNIZ4Fc9s[VRK9JmXFuBef][1];
        c = cin.get ();
        VRK9JmXFuBef++;
    }
    {
        int j = 0;
        while (j < VRK9JmXFuBef) {
            for (int t = mMNIZ4Fc9s[j][0];
            mMNIZ4Fc9s[j][1] > t; t++)
                a[t]++;
            j++;
        };
    }
    for (int j = 0;
    j < 1000; j++) {
        if (a[j] > max)
            max = a[j];
    }
    printf ("%d %d\n", VRK9JmXFuBef, max);
    return 0;
}

