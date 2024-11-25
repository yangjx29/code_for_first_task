int main () {
    int w;
    int WBMjQk;
    int GTjxGCudK3f;
    int zyENlT0Oje [(231 - 131)] [(249 - 149)];
    int x;
    int y;
    int KdePHVs8pF;
    int EK0eYRMUc;
    int b;
    int i;
    w = (106 - 106);
    int e35Rup;
    int FDbGqILNrjAZ [(258 - 158)] [100];
    e35Rup = (489 - 489);
    y = (465 - 464);
    scanf ("%d %d", &WBMjQk, &GTjxGCudK3f);
    {
        int fJut6vNoCM1j = (940 - 940);
        while (WBMjQk +(299 - 298) >= fJut6vNoCM1j) {
            {
                int PhwrDZv4jt6z = (999 - 999);
                while (GTjxGCudK3f +(563 - 562) >= PhwrDZv4jt6z) {
                    FDbGqILNrjAZ[PhwrDZv4jt6z][fJut6vNoCM1j] = (590 - 589);
                    PhwrDZv4jt6z = PhwrDZv4jt6z +1;
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
            fJut6vNoCM1j++;
        };
    }
    {
        int fJut6vNoCM1j = (779 - 778);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (WBMjQk >= fJut6vNoCM1j) {
            {
                int PhwrDZv4jt6z = (547 - 546);
                while (GTjxGCudK3f >= PhwrDZv4jt6z) {
                    scanf ("%d", &zyENlT0Oje[PhwrDZv4jt6z][fJut6vNoCM1j]);
                    FDbGqILNrjAZ[PhwrDZv4jt6z][fJut6vNoCM1j] = (205 - 205);
                    PhwrDZv4jt6z++;
                };
            }
            fJut6vNoCM1j++;
        };
    }
    x = (319 - 318);
    while (WBMjQk *GTjxGCudK3f > w) {
        w++;
        printf ("%d\n", zyENlT0Oje[x][y]);
        FDbGqILNrjAZ[x][y] = (883 - 882);
        if (e35Rup == 0) {
            if (FDbGqILNrjAZ[x + 1][y] == 1) {
                e35Rup = 1;
                y = y + 1;
            }
            else
                x++;
        }
        else if (e35Rup == 1) {
            if (FDbGqILNrjAZ[x][y + 1] == 1) {
                e35Rup = 2;
                x = x - 1;
            }
            else
                y++;
        }
        else if (e35Rup == 2) {
            if (FDbGqILNrjAZ[x - 1][y] == 1) {
                e35Rup = 3;
                y--;
            }
            else
                x = x - 1;
        }
        else if (e35Rup == 3) {
            if (FDbGqILNrjAZ[x][y - 1] == 1) {
                x++;
                e35Rup = 0;
            }
            else
                y--;
        }
        else {
        };
    }
    return 0;
}

