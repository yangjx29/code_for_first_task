const  int nEeyt4TLzB = 100;

int main () {
    int LJ9WS8AZ;
    int gL4ftzq [nEeyt4TLzB] [nEeyt4TLzB];
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
    scanf ("%d", &LJ9WS8AZ);
    for (int MDkYqwaC2uVb = 0;
    MDkYqwaC2uVb < LJ9WS8AZ; MDkYqwaC2uVb = MDkYqwaC2uVb +1) {
        int ZOjqIs;
        int dBRcVMz4;
        int dcKPR9H;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dcKPR9H = 0;
        scanf ("%d%d", &ZOjqIs, &dBRcVMz4);
        for (int MDkYqwaC2uVb = 0;
        ZOjqIs > MDkYqwaC2uVb; MDkYqwaC2uVb = MDkYqwaC2uVb +1) {
            int Fg69vK = 0;
            while (dBRcVMz4 > Fg69vK) {
                scanf ("%d", &gL4ftzq[MDkYqwaC2uVb][Fg69vK]);
                Fg69vK = Fg69vK +1;
            };
        }
        if ((!(1 == ZOjqIs)) && (dBRcVMz4 != 1)) {
            for (int Fg69vK = 0;
            Fg69vK < dBRcVMz4; Fg69vK = Fg69vK +1) {
                dcKPR9H += gL4ftzq[0][Fg69vK];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int Fg69vK = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (Fg69vK < dBRcVMz4) {
                    dcKPR9H = dcKPR9H + gL4ftzq[ZOjqIs -1][Fg69vK];
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
                    Fg69vK = Fg69vK +1;
                };
            }
            {
                int MDkYqwaC2uVb = 0;
                while (ZOjqIs > MDkYqwaC2uVb) {
                    dcKPR9H += gL4ftzq[MDkYqwaC2uVb][0];
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
                    MDkYqwaC2uVb = MDkYqwaC2uVb +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                int MDkYqwaC2uVb = 0;
                while (MDkYqwaC2uVb < ZOjqIs) {
                    dcKPR9H = dcKPR9H + gL4ftzq[MDkYqwaC2uVb][dBRcVMz4 - 1];
                    MDkYqwaC2uVb = MDkYqwaC2uVb +1;
                };
            }
            dcKPR9H = dcKPR9H - gL4ftzq[0][0] - gL4ftzq[0][dBRcVMz4 - 1] - gL4ftzq[ZOjqIs -1][0] - gL4ftzq[ZOjqIs -1][dBRcVMz4 - 1];
        }
        else {
            int MDkYqwaC2uVb = 0;
            while (MDkYqwaC2uVb < ZOjqIs) {
                {
                    int Fg69vK = 0;
                    while (Fg69vK < dBRcVMz4) {
                        dcKPR9H = dcKPR9H + gL4ftzq[MDkYqwaC2uVb][Fg69vK];
                        Fg69vK = Fg69vK +1;
                    };
                }
                MDkYqwaC2uVb = MDkYqwaC2uVb +1;
            };
        }
        printf ("%d\n", dcKPR9H);
    }
    return 0;
}

