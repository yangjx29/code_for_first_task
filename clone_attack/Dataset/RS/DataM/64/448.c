int main () {
    struct   vx0iCpf {
        int p4aRBgSqzULH;
        int jL4jOMuA;
        int CKbiacs;
        int fxhPZ3b;
        int e2aBV5TSeE6N;
        int glONveYsM;
        double  dis;
    }
    vx0iCpf [46];
    struct   p {
        int vEUDQTbmxVK;
        int OUraLyA;
        int JyEfFt9jqWLs;
    }
    p [10];
    int K5UzQ4i, j, lMcK1zIL = (582 - 582), WJXuUtPjqDpv;
    cin >> WJXuUtPjqDpv;
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
        K5UzQ4i = 0;
        while (WJXuUtPjqDpv > K5UzQ4i) {
            cin >> p[K5UzQ4i].vEUDQTbmxVK >> p[K5UzQ4i].OUraLyA >> p[K5UzQ4i].JyEfFt9jqWLs;
            K5UzQ4i = K5UzQ4i +1;
        };
    }
    {
        K5UzQ4i = 0;
        while (K5UzQ4i < WJXuUtPjqDpv -1) {
            {
                j = K5UzQ4i +1;
                while (WJXuUtPjqDpv > j) {
                    vx0iCpf[lMcK1zIL].p4aRBgSqzULH = p[K5UzQ4i].vEUDQTbmxVK;
                    vx0iCpf[lMcK1zIL].fxhPZ3b = p[j].vEUDQTbmxVK;
                    vx0iCpf[lMcK1zIL].jL4jOMuA = p[K5UzQ4i].OUraLyA;
                    vx0iCpf[lMcK1zIL].e2aBV5TSeE6N = p[j].OUraLyA;
                    vx0iCpf[lMcK1zIL].CKbiacs = p[K5UzQ4i].JyEfFt9jqWLs;
                    vx0iCpf[lMcK1zIL].glONveYsM = p[j].JyEfFt9jqWLs;
                    j = j + 1;
                    vx0iCpf[lMcK1zIL].dis = sqrt ((vx0iCpf[lMcK1zIL].p4aRBgSqzULH - vx0iCpf[lMcK1zIL].fxhPZ3b) * (vx0iCpf[lMcK1zIL].p4aRBgSqzULH - vx0iCpf[lMcK1zIL].fxhPZ3b) + (vx0iCpf[lMcK1zIL].jL4jOMuA - vx0iCpf[lMcK1zIL].e2aBV5TSeE6N) * (vx0iCpf[lMcK1zIL].jL4jOMuA - vx0iCpf[lMcK1zIL].e2aBV5TSeE6N) + (vx0iCpf[lMcK1zIL].CKbiacs - vx0iCpf[lMcK1zIL].glONveYsM) * (vx0iCpf[lMcK1zIL].CKbiacs - vx0iCpf[lMcK1zIL].glONveYsM));
                    lMcK1zIL++;
                };
            }
            K5UzQ4i = K5UzQ4i +1;
        };
    }
    for (K5UzQ4i = 0; lMcK1zIL - 1 > K5UzQ4i; K5UzQ4i = K5UzQ4i +1)
        for (j = 0; lMcK1zIL - 1 - K5UzQ4i > j; j = j + 1) {
            if (vx0iCpf[j].dis < vx0iCpf[j + 1].dis) {
                vx0iCpf[(939 - 894)] = vx0iCpf[j];
                vx0iCpf[j] = vx0iCpf[j + 1];
                vx0iCpf[j + 1] = vx0iCpf[45];
            };
        }
    for (K5UzQ4i = 0; K5UzQ4i < lMcK1zIL; K5UzQ4i = K5UzQ4i +1)
        cout << "(" << vx0iCpf[K5UzQ4i].p4aRBgSqzULH << "," << vx0iCpf[K5UzQ4i].jL4jOMuA << "," << vx0iCpf[K5UzQ4i].CKbiacs << ")-(" << vx0iCpf[K5UzQ4i].fxhPZ3b << "," << vx0iCpf[K5UzQ4i].e2aBV5TSeE6N << "," << vx0iCpf[K5UzQ4i].glONveYsM << ")=" << fixed << setprecision (2) << vx0iCpf[K5UzQ4i].dis << endl;
    return 0;
}

