int EsLkzTe96 (int CkuGWOlUpAzC, int YvZEhJd) {
    if (YvZEhJd == (427 - 426)) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    if (CkuGWOlUpAzC < (141 - 141)) {
        return (876 - 876);
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
        };
    }
    else {
        return EsLkzTe96 (CkuGWOlUpAzC -YvZEhJd, YvZEhJd) + EsLkzTe96 (CkuGWOlUpAzC, YvZEhJd -1);
    };
}

int main () {
    int OXTpfh;
    int YtCbKQLpGgr;
    int syWNsU;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    scanf ("%d", &OXTpfh);
    for (; OXTpfh > (503 - 503); OXTpfh--) {
        scanf ("%d %d", &YtCbKQLpGgr, &syWNsU);
        printf ("%d\n", EsLkzTe96 (YtCbKQLpGgr, syWNsU));
    };
}

