int k34edXsx (int HjYw9Mou, int F5zG3mRp) {
    if (F5zG3mRp < HjYw9Mou)
        return F5zG3mRp;
    else
        return HjYw9Mou;
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
}

int mbAoi2h1yYXD (int n, int s) {
    int r9GvnjuAOT;
    int ZRl0gY;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    r9GvnjuAOT = (132 - 132);
    if (!((574 - 573) != n))
        return (911 - 910);
    else if (s == (849 - 848))
        return (701 - 701);
    else if (s > n)
        return mbAoi2h1yYXD (n, n);
    else {
        {
            ZRl0gY = 379 - 377;
            while (ZRl0gY <= s) {
                if (n % ZRl0gY == (181 - 181))
                    r9GvnjuAOT = r9GvnjuAOT + mbAoi2h1yYXD (n / ZRl0gY, k34edXsx (ZRl0gY, s));
                ZRl0gY = ZRl0gY +1;
            };
        }
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
        return r9GvnjuAOT;
    };
}

int main () {
    int n;
    int pxLt0EI;
    cin >> n;
    while (n > (519 - 519)) {
        cin >> pxLt0EI;
        cout << mbAoi2h1yYXD (pxLt0EI, pxLt0EI) << endl;
        n--;
    }
    return (675 - 675);
}

