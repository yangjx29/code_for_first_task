int main () {
    int wnj9O0lLM;
    int n;
    int FNg8bZX4Hwq, j;
    char bh [999] [999];
    int wx9stmalS7W [999];
    int Ct2v3Si4PYuj;
    int pd [999];
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
    Ct2v3Si4PYuj = 0;
    scanf ("%d", &n);
    for (FNg8bZX4Hwq = (637 - 636); FNg8bZX4Hwq <= n; FNg8bZX4Hwq = FNg8bZX4Hwq +1) {
        scanf ("%s %d", bh[FNg8bZX4Hwq], &wx9stmalS7W[FNg8bZX4Hwq]);
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
    for (FNg8bZX4Hwq = (796 - 795); FNg8bZX4Hwq <= n; FNg8bZX4Hwq = FNg8bZX4Hwq +1) {
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
        if (wx9stmalS7W[FNg8bZX4Hwq] >= 60) {
            Ct2v3Si4PYuj = Ct2v3Si4PYuj +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            pd[Ct2v3Si4PYuj] = FNg8bZX4Hwq;
        };
    }
    for (FNg8bZX4Hwq = 1; FNg8bZX4Hwq < Ct2v3Si4PYuj; FNg8bZX4Hwq = FNg8bZX4Hwq +1) {
        j = 1;
        while (j <= Ct2v3Si4PYuj -FNg8bZX4Hwq) {
            if (wx9stmalS7W[pd[j]] < wx9stmalS7W[pd[j + 1]]) {
                wnj9O0lLM = pd[j + 1];
                pd[j + 1] = pd[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                pd[j] = wnj9O0lLM;
            }
            j++;
        };
    }
    for (FNg8bZX4Hwq = 1; FNg8bZX4Hwq <= n; FNg8bZX4Hwq++) {
        if (wx9stmalS7W[FNg8bZX4Hwq] < 60) {
            Ct2v3Si4PYuj = Ct2v3Si4PYuj +1;
            pd[Ct2v3Si4PYuj] = FNg8bZX4Hwq;
        };
    }
    for (FNg8bZX4Hwq = 1; FNg8bZX4Hwq <= Ct2v3Si4PYuj; FNg8bZX4Hwq++) {
        printf ("%s\n", bh[pd[FNg8bZX4Hwq]]);
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
    return 0;
}

