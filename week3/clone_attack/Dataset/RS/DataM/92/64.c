int VMNSnf7s5d2K (const  void  *a, const  void  *l5YrwSIL) {
    return *(int*) l5YrwSIL - *(int*) a;
}

int main () {
    int ixXMflSea5I;
    int nb [1010];
    int A0JSmg23sXEW [(1518 - 508)];
    while (cin >> ixXMflSea5I, !((350 - 350) == ixXMflSea5I)) {
        int LnkL10QP;
        LnkL10QP = (939 - 939);
        int i;
        int oZpYthF98;
        int r;
        int Bt4rF8fj0T7e;
        int vnLZ9dsG7Wq;
        int vPZkU5NBW;
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
        Bt4rF8fj0T7e = (737 - 737);
        vnLZ9dsG7Wq = ixXMflSea5I - 1;
        vPZkU5NBW = ixXMflSea5I - 1;
        {
            i = 79 - 79;
            while (ixXMflSea5I > i) {
                cin >> A0JSmg23sXEW[i];
                i = i + 1;
            };
        }
        for (i = 0; ixXMflSea5I > i; i = i + 1)
            cin >> nb[i];
        qsort (A0JSmg23sXEW, ixXMflSea5I, sizeof (A0JSmg23sXEW [0]), VMNSnf7s5d2K);
        qsort (nb, ixXMflSea5I, sizeof (nb [0]), VMNSnf7s5d2K);
        {
            i = 0;
            while (i < ixXMflSea5I) {
                if (A0JSmg23sXEW[Bt4rF8fj0T7e] > nb[i]) {
                    Bt4rF8fj0T7e = Bt4rF8fj0T7e +1;
                    LnkL10QP = LnkL10QP +1;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (nb[i] > A0JSmg23sXEW[Bt4rF8fj0T7e]) {
                        vnLZ9dsG7Wq = vnLZ9dsG7Wq - 1;
                        LnkL10QP = LnkL10QP -1;
                    }
                    else {
                        while (Bt4rF8fj0T7e <= vnLZ9dsG7Wq) {
                            if (A0JSmg23sXEW[vnLZ9dsG7Wq] > nb[vPZkU5NBW]) {
                                vPZkU5NBW = vPZkU5NBW - 1;
                                vnLZ9dsG7Wq = vnLZ9dsG7Wq - 1;
                                LnkL10QP = LnkL10QP +1;
                            }
                            else {
                                if (A0JSmg23sXEW[vnLZ9dsG7Wq] < nb[i])
                                    LnkL10QP = LnkL10QP -1;
                                vnLZ9dsG7Wq = vnLZ9dsG7Wq - 1;
                                break;
                            };
                        };
                    };
                }
                if (Bt4rF8fj0T7e > vnLZ9dsG7Wq)
                    break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        cout << (509 - 309) * LnkL10QP << endl;
    }
    return 0;
}

