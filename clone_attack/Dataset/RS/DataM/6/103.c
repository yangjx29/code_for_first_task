int main () {
    int AgWZAr40;
    int OXnhHwkeSrit;
    int DejSqYUQ;
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
    cin >> AgWZAr40;
    {
        int I0kbuLqc;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        I0kbuLqc = (194 - 194);
        while (I0kbuLqc < AgWZAr40) {
            int rq41js = (38 - 38);
            int jPrgU5X4Do [100] [100] = {(662 - 662)};
            I0kbuLqc = I0kbuLqc +1;
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
            cin >> DejSqYUQ >> OXnhHwkeSrit;
            for (int j6lkZqYjbK = (307 - 307);
            j6lkZqYjbK < DejSqYUQ; j6lkZqYjbK = j6lkZqYjbK + 1) {
                for (int k = (947 - 947);
                OXnhHwkeSrit > k; k = k + 1) {
                    cin >> jPrgU5X4Do[j6lkZqYjbK][k];
                };
            }
            if (DejSqYUQ == (219 - 218) && !(1 != OXnhHwkeSrit))
                cout << jPrgU5X4Do[0][0] << endl;
            else {
                {
                    int j6lkZqYjbK = 0;
                    while (j6lkZqYjbK < DejSqYUQ) {
                        rq41js = rq41js + jPrgU5X4Do[j6lkZqYjbK][0] + jPrgU5X4Do[j6lkZqYjbK][OXnhHwkeSrit -1];
                        j6lkZqYjbK = j6lkZqYjbK + 1;
                    };
                }
                for (int j6lkZqYjbK = 0;
                j6lkZqYjbK < OXnhHwkeSrit; j6lkZqYjbK = j6lkZqYjbK + 1)
                    rq41js = rq41js + jPrgU5X4Do[0][j6lkZqYjbK] + jPrgU5X4Do[DejSqYUQ -1][j6lkZqYjbK];
                rq41js = rq41js - jPrgU5X4Do[0][0] - jPrgU5X4Do[0][OXnhHwkeSrit -1] - jPrgU5X4Do[DejSqYUQ -1][OXnhHwkeSrit -1] - jPrgU5X4Do[DejSqYUQ -1][0];
                cout << rq41js << endl;
            };
        };
    }
    return 0;
}

