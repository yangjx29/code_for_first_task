int Qd6M2a4;
int uRDyAfSj [1000], pMcJRDw1 [1000];

void  MN8m5Rlu6rW (int *d3NiyqQ) {
    int i, j, K3iJnvu1lFCI;
    {
        i = 51 - 50;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Qd6M2a4 >= i) {
            {
                j = 812 - 811;
                while (Qd6M2a4 >= j) {
                    if (d3NiyqQ[j] > d3NiyqQ[i]) {
                        K3iJnvu1lFCI = d3NiyqQ[i];
                        d3NiyqQ[i] = d3NiyqQ[j];
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
                        d3NiyqQ[j] = K3iJnvu1lFCI;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

main () {
    int i, j, K3iJnvu1lFCI, GWDKrE2bYfi0, sum, d3NiyqQ, rlqEnK0I;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (;;) {
        scanf ("%d", &Qd6M2a4);
        if (!((941 - 941) != Qd6M2a4))
            break;
        else {
            MN8m5Rlu6rW (uRDyAfSj);
            MN8m5Rlu6rW (pMcJRDw1);
            {
                i = 883 - 882;
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
                while (Qd6M2a4 >= i) {
                    scanf ("%d", &uRDyAfSj[i]);
                    i++;
                };
            }
            {
                i = 1;
                while (Qd6M2a4 >= i) {
                    scanf ("%d", &pMcJRDw1[i]);
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
                    i++;
                };
            }
            sum = 0;
            for (i = 1, j = 1, d3NiyqQ = Qd6M2a4, rlqEnK0I = Qd6M2a4; i <= rlqEnK0I;) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (pMcJRDw1[i] < uRDyAfSj[j]) {
                    i++;
                    sum += 200;
                    j++;
                }
                else {
                    if (pMcJRDw1[rlqEnK0I] < uRDyAfSj[d3NiyqQ]) {
                        d3NiyqQ--;
                        sum += 200;
                        rlqEnK0I--;
                    }
                    else if (pMcJRDw1[i] == uRDyAfSj[d3NiyqQ]) {
                        d3NiyqQ--;
                        i++;
                    }
                    else if (pMcJRDw1[i] > uRDyAfSj[d3NiyqQ]) {
                        d3NiyqQ--;
                        sum = sum - 200;
                        i++;
                    };
                };
            }
            printf ("%d\n", sum);
        };
    };
}

