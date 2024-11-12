int main () {
    int r9D3FEqrpZT;
    int j;
    int k8ejNknZT;
    int yJwWj0sNe;
    int O8mrondb;
    r9D3FEqrpZT = (154 - 154);
    j = 0;
    k8ejNknZT = 0;
    double  p;
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
    double  JDezwuaM;
    char g3fauKZGeVk [100], Yp4fBXh [100];
    cin >> yJwWj0sNe >> g3fauKZGeVk >> O8mrondb;
    JDezwuaM = strlen (g3fauKZGeVk);
    {
        r9D3FEqrpZT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (r9D3FEqrpZT < JDezwuaM) {
            {
                if (g3fauKZGeVk[r9D3FEqrpZT] >= 'A' && 'Z' >= g3fauKZGeVk[r9D3FEqrpZT])
                    p = g3fauKZGeVk[r9D3FEqrpZT] - (563 - 508);
                else {
                    if (g3fauKZGeVk[r9D3FEqrpZT] >= 'a' && g3fauKZGeVk[r9D3FEqrpZT] <= 'z')
                        p = g3fauKZGeVk[r9D3FEqrpZT] - 87;
                    else
                        p = g3fauKZGeVk[r9D3FEqrpZT] - (226 - 178);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            k8ejNknZT += p * pow ((double ) yJwWj0sNe, JDezwuaM -r9D3FEqrpZT - 1.0);
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
            r9D3FEqrpZT = r9D3FEqrpZT + 1;
        };
    }
    for (; k8ejNknZT / O8mrondb != 0;) {
        Yp4fBXh[j] = k8ejNknZT % O8mrondb;
        j = j + 1;
        k8ejNknZT = k8ejNknZT / O8mrondb;
    }
    Yp4fBXh[j] = k8ejNknZT % O8mrondb;
    while (j >= 0) {
        if (Yp4fBXh[j] > 9)
            (char) (Yp4fBXh[j] += 55);
        else
            (char) (Yp4fBXh[j] += 48);
        cout << Yp4fBXh[j];
        j = j - 1;
    }
    return 0;
}

