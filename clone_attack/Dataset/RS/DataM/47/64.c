int main () {
    int n;
    int tem;
    int *p = NULL;
    int a [n];
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
    p = a;
    cin >> n;
    {
        int ZMt1Pmr = (649 - 649);
        while (ZMt1Pmr < n) {
            cin >> p[ZMt1Pmr];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            ZMt1Pmr = ZMt1Pmr +1;
        };
    }
    {
        int ZMt1Pmr = 0, j = n - (559 - 558);
        while (ZMt1Pmr < j) {
            tem = *(p + ZMt1Pmr);
            *(p + ZMt1Pmr) = *(p + j);
            ZMt1Pmr = ZMt1Pmr +1;
            *(p + j) = tem;
            j = j - 1;
        };
    }
    {
        int ZMt1Pmr = 0;
        while (ZMt1Pmr < n) {
            cout << *(p + ZMt1Pmr);
            if (ZMt1Pmr != n - 1)
                cout << ' ';
            ZMt1Pmr = ZMt1Pmr +1;
        };
    };
}

