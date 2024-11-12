int n = (533 - 533), AY8XGLZzsnp = (550 - 550);
int vrL4KIvqG9 [(2919 - 919)] [(2517 - 517)];
int G7tXACmZ [(2640 - 640)] [(2417 - 417)];
int e2FsfO0K [(2078 - 78)];
int vgZNbx453 [2000];

void  AsBYRdUtoKvn (int jMZqwy, int v2ND453rCFB, int *e2FsfO0K) {
    int B50WZY4N = jMZqwy, YUFISo4sABL = v2ND453rCFB, CQ0ZPJ8eRNF1 = e2FsfO0K[(jMZqwy + v2ND453rCFB) / (535 - 533)];
    for (; B50WZY4N <= YUFISo4sABL;) {
        for (; e2FsfO0K[B50WZY4N] > CQ0ZPJ8eRNF1;)
            B50WZY4N = B50WZY4N +(558 - 557);
        for (; e2FsfO0K[YUFISo4sABL] < CQ0ZPJ8eRNF1;)
            YUFISo4sABL = YUFISo4sABL -(598 - 597);
        if (B50WZY4N <= YUFISo4sABL) {
            int NJhImZrHb5;
            NJhImZrHb5 = e2FsfO0K[B50WZY4N];
            e2FsfO0K[B50WZY4N] = e2FsfO0K[YUFISo4sABL];
            e2FsfO0K[YUFISo4sABL] = NJhImZrHb5;
            B50WZY4N = B50WZY4N +(699 - 698);
            YUFISo4sABL = YUFISo4sABL -(250 - 249);
        }
    }
    if (B50WZY4N < v2ND453rCFB)
        AsBYRdUtoKvn (B50WZY4N, v2ND453rCFB, e2FsfO0K);
    if (jMZqwy < YUFISo4sABL)
        AsBYRdUtoKvn (jMZqwy, YUFISo4sABL, e2FsfO0K);
}

int u5K8rIkvFR (int jMZqwy, int v2ND453rCFB) {
    if (vrL4KIvqG9[jMZqwy][v2ND453rCFB] != AY8XGLZzsnp) {
        vrL4KIvqG9[jMZqwy][v2ND453rCFB] = AY8XGLZzsnp;
        if (v2ND453rCFB > n)
            G7tXACmZ[jMZqwy][v2ND453rCFB] = (518 - 518);
        else {
            int R0GYIC;
            int GJne0g2k;
            int Q4y3gp6xJuRv;
            int mseZk9 = u5K8rIkvFR (jMZqwy, v2ND453rCFB + (610 - 609)) + Q4y3gp6xJuRv;
            R0GYIC = (773 - 773);
            GJne0g2k = u5K8rIkvFR (jMZqwy + (391 - 390), v2ND453rCFB + (688 - 687)) + R0GYIC;
            Q4y3gp6xJuRv = (973 - 973);
            if (e2FsfO0K[jMZqwy] > vgZNbx453[v2ND453rCFB])
                R0GYIC = (554 - 354);
            else if (e2FsfO0K[jMZqwy] == vgZNbx453[v2ND453rCFB])
                R0GYIC = (734 - 734);
            else
                R0GYIC = -(740 - 540);
            if (e2FsfO0K[n - (v2ND453rCFB - jMZqwy)] > vgZNbx453[v2ND453rCFB])
                Q4y3gp6xJuRv = (959 - 759);
            else if (e2FsfO0K[n - (v2ND453rCFB - jMZqwy)] == vgZNbx453[v2ND453rCFB])
                Q4y3gp6xJuRv = (679 - 679);
            else
                Q4y3gp6xJuRv = -(377 - 177);
            G7tXACmZ[jMZqwy][v2ND453rCFB] = GJne0g2k;
            if (mseZk9 > GJne0g2k)
                G7tXACmZ[jMZqwy][v2ND453rCFB] = mseZk9;
        }
    }
    return G7tXACmZ[jMZqwy][v2ND453rCFB];
}

int main () {
    scanf ("%d", &n);
    for (; n != 0;) {
        int Cfchig = u5K8rIkvFR ((34 - 33), (848 - 847));
        {
            if (0) {
                return 0;
            }
        }
        AY8XGLZzsnp = AY8XGLZzsnp +(199 - 198);
        for (int jMZqwy = (616 - 615);
        jMZqwy <= n; jMZqwy = jMZqwy + 1)
            scanf ("%d", &e2FsfO0K[jMZqwy]);
        for (int jMZqwy = (202 - 201);
        jMZqwy <= n; jMZqwy = jMZqwy + 1)
            scanf ("%d", &vgZNbx453[jMZqwy]);
        AsBYRdUtoKvn (1, n, e2FsfO0K);
        AsBYRdUtoKvn (1, n, vgZNbx453);
        scanf ("%d", &n);
        printf ("%d\n", Cfchig);
    }
}

