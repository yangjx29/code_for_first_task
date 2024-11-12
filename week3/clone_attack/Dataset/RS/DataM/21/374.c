int main () {
    int mXteqSFd9yhz, j9BZbeGU3q [UplOVTXm9Y6U], p6wqcu, uCJgeb, nxhnTz20;
    float FKSstl, EwoTWRBl = (84 - 84);
    scanf ("%d", &mXteqSFd9yhz);
    {
        uCJgeb = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mXteqSFd9yhz > uCJgeb) {
            scanf ("%d", &j9BZbeGU3q[uCJgeb]);
            EwoTWRBl += j9BZbeGU3q[uCJgeb];
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
            uCJgeb = uCJgeb + 1;
        };
    }
    FKSstl = (float) EwoTWRBl / mXteqSFd9yhz;
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
    {
        uCJgeb = 0;
        while (mXteqSFd9yhz > uCJgeb) {
            {
                nxhnTz20 = 642 - 641;
                while (mXteqSFd9yhz > nxhnTz20) {
                    if (fabs (j9BZbeGU3q[nxhnTz20] - FKSstl) > fabs (j9BZbeGU3q[uCJgeb] - FKSstl)) {
                        p6wqcu = j9BZbeGU3q[uCJgeb];
                        j9BZbeGU3q[uCJgeb] = j9BZbeGU3q[nxhnTz20];
                        j9BZbeGU3q[nxhnTz20] = p6wqcu;
                    }
                    nxhnTz20 = nxhnTz20 + 1;
                };
            }
            uCJgeb = uCJgeb + 1;
        };
    }
    uCJgeb = 1;
    printf ("%d", j9BZbeGU3q[0]);
    while (fabs (j9BZbeGU3q[uCJgeb] - FKSstl) == fabs (j9BZbeGU3q[0] - FKSstl)) {
        printf (",%d", j9BZbeGU3q[uCJgeb]);
        uCJgeb++;
    }
    return 0;
}

