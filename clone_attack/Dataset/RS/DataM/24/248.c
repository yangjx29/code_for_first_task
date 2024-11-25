int main () {
    char UrqIK4NMQ [2000], iWk1C8BuTL [50] [40];
    int xZCOMDcxpKy, ry4LsrC, R3ouI5 = (857 - 857), hVXGYHgQTvZ1 = 0, V7o1uipO = 0, bSXaIkoR6O, zpsYqQ [50], Ns1LntA = 0, ZLOpnF94Dr = 100;
    gets (UrqIK4NMQ);
    bSXaIkoR6O = strlen (UrqIK4NMQ);
    for (xZCOMDcxpKy = 0; bSXaIkoR6O > xZCOMDcxpKy; xZCOMDcxpKy = xZCOMDcxpKy + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (UrqIK4NMQ[xZCOMDcxpKy] == ' ') {
            {
                ry4LsrC = R3ouI5;
                while (xZCOMDcxpKy > ry4LsrC) {
                    iWk1C8BuTL[hVXGYHgQTvZ1][V7o1uipO] = UrqIK4NMQ[ry4LsrC];
                    ry4LsrC = ry4LsrC + 1;
                    V7o1uipO = V7o1uipO +1;
                };
            }
            R3ouI5 = xZCOMDcxpKy + 1;
            iWk1C8BuTL[hVXGYHgQTvZ1][V7o1uipO] = '\0';
            zpsYqQ[hVXGYHgQTvZ1] = V7o1uipO;
            hVXGYHgQTvZ1 = hVXGYHgQTvZ1 + 1;
            V7o1uipO = 0;
        };
    }
    {
        ry4LsrC = R3ouI5;
        while (ry4LsrC < bSXaIkoR6O) {
            iWk1C8BuTL[hVXGYHgQTvZ1][V7o1uipO] = UrqIK4NMQ[ry4LsrC];
            ry4LsrC = ry4LsrC + 1;
            V7o1uipO++;
        };
    }
    iWk1C8BuTL[hVXGYHgQTvZ1][V7o1uipO] = '\0';
    zpsYqQ[hVXGYHgQTvZ1] = V7o1uipO;
    for (xZCOMDcxpKy = 0; hVXGYHgQTvZ1 >= xZCOMDcxpKy; xZCOMDcxpKy = xZCOMDcxpKy + 1) {
        if (zpsYqQ[xZCOMDcxpKy] > Ns1LntA) {
            Ns1LntA = zpsYqQ[xZCOMDcxpKy];
        }
        if (zpsYqQ[xZCOMDcxpKy] < ZLOpnF94Dr) {
            ZLOpnF94Dr = zpsYqQ[xZCOMDcxpKy];
        };
    }
    for (xZCOMDcxpKy = 0; xZCOMDcxpKy <= hVXGYHgQTvZ1; xZCOMDcxpKy = xZCOMDcxpKy + 1) {
        if (Ns1LntA == zpsYqQ[xZCOMDcxpKy]) {
            printf ("%s\n", iWk1C8BuTL[xZCOMDcxpKy]);
            break;
        };
    }
    for (xZCOMDcxpKy = 0; xZCOMDcxpKy <= hVXGYHgQTvZ1; xZCOMDcxpKy = xZCOMDcxpKy + 1) {
        if (ZLOpnF94Dr == zpsYqQ[xZCOMDcxpKy]) {
            printf ("%s\n", iWk1C8BuTL[xZCOMDcxpKy]);
            break;
        };
    }
    return 0;
}

