int main () {
    int a [6];
    int i;
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
    int EXoQ578n (int num);
    int num;
    int BUcId5bEMDQ;
    {
        i = 523 - 523;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 5) {
            scanf ("%d", &a[i]);
            num = a[i];
            i++;
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
            BUcId5bEMDQ = EXoQ578n (num);
            printf ("%d\n", BUcId5bEMDQ);
        };
    };
}

int EXoQ578n (int num) {
    int ZMF643rh, j, n = 0, s = 0;
    ZMF643rh = num;
    do {
        n++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        ZMF643rh = ZMF643rh / 10;
    }
    while (ZMF643rh != 0);
    {
        j = 1;
        while (j <= n) {
            ZMF643rh = num;
            ZMF643rh = ZMF643rh / (pow (10, (j - 1)));
            s = s + ZMF643rh *pow (10, (n - j));
            j++;
            ZMF643rh = ZMF643rh % 10;
        };
    }
    return (s);
}

