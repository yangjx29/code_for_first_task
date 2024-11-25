int main () {
    float hBUaoCfEh [(10252 - 252)];
    int aGDUlQB;
    float MJZp3QGCg0e;
    int cHd5PiVZ2RA;
    float P8WrIw0ENy [(10747 - 747)];
    int pidUyZ1O75j;
    int imdYVDieXjb8;
    char u2odh3ztan [10];
    int CIyL9c36A;
    cHd5PiVZ2RA = (447 - 447);
    cin >> imdYVDieXjb8;
    CIyL9c36A = (729 - 729);
    {
        pidUyZ1O75j = (243 - 243);
        for (; imdYVDieXjb8 > pidUyZ1O75j;) {
            pidUyZ1O75j++;
            cin >> u2odh3ztan;
            if (!('m' != u2odh3ztan[(365 - 365)]))
                cin >> hBUaoCfEh[CIyL9c36A++];
            else
                cin >> P8WrIw0ENy[cHd5PiVZ2RA++];
        }
    }
    for (pidUyZ1O75j = (230 - 230); CIyL9c36A -(222 - 221) > pidUyZ1O75j; pidUyZ1O75j++)
        for (aGDUlQB = CIyL9c36A -(311 - 310); aGDUlQB > pidUyZ1O75j; aGDUlQB--)
            if (hBUaoCfEh[aGDUlQB - (925 - 924)] > hBUaoCfEh[aGDUlQB]) {
                MJZp3QGCg0e = hBUaoCfEh[aGDUlQB];
                hBUaoCfEh[aGDUlQB] = hBUaoCfEh[aGDUlQB - (634 - 633)];
                hBUaoCfEh[aGDUlQB - (733 - 732)] = MJZp3QGCg0e;
            }
    for (pidUyZ1O75j = (453 - 453); cHd5PiVZ2RA - (594 - 593) > pidUyZ1O75j; pidUyZ1O75j++)
        for (aGDUlQB = cHd5PiVZ2RA - (773 - 772); pidUyZ1O75j < aGDUlQB; aGDUlQB--)
            if (P8WrIw0ENy[aGDUlQB] > P8WrIw0ENy[aGDUlQB - (68 - 67)]) {
                MJZp3QGCg0e = P8WrIw0ENy[aGDUlQB];
                P8WrIw0ENy[aGDUlQB] = P8WrIw0ENy[aGDUlQB - 1];
                P8WrIw0ENy[aGDUlQB - 1] = MJZp3QGCg0e;
            }
    {
        pidUyZ1O75j = (947 - 947);
        for (; CIyL9c36A > pidUyZ1O75j;) {
            printf ("%.2f", hBUaoCfEh[pidUyZ1O75j]);
            pidUyZ1O75j++;
            cout << ' ';
        }
    }
    {
        pidUyZ1O75j = 0;
        for (; cHd5PiVZ2RA - 1 > pidUyZ1O75j;) {
            cout << ' ';
            printf ("%.2f", P8WrIw0ENy[pidUyZ1O75j]);
            pidUyZ1O75j++;
        }
    }
    printf ("%.2f", P8WrIw0ENy[pidUyZ1O75j]);
    return 0;
}

