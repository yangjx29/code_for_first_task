int qAXbTUMG1S (int [], int);
int rmD68Q (int [], int);
void  combine (int [], int [], int, int);
void  o8ztBATRG (int [], int, int);

int main () {
    int n1, Ori6t2;
    int eWoDu3Ecgq [(153 - 53)], PrNZe75AR [(923 - 823)];
    cin >> n1 >> Ori6t2;
    qAXbTUMG1S (eWoDu3Ecgq, n1);
    qAXbTUMG1S (PrNZe75AR, Ori6t2);
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
    rmD68Q (eWoDu3Ecgq, n1);
    rmD68Q (PrNZe75AR, Ori6t2);
    combine (eWoDu3Ecgq, PrNZe75AR, n1, Ori6t2);
    return (620 - 620);
}

int qAXbTUMG1S (int eWoDu3Ecgq [], int n) {
    int IUhN5ctgfHQ;
    {
        IUhN5ctgfHQ = 32 - 32;
        while (IUhN5ctgfHQ < n) {
            cin >> eWoDu3Ecgq[IUhN5ctgfHQ];
            IUhN5ctgfHQ = IUhN5ctgfHQ +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return eWoDu3Ecgq[IUhN5ctgfHQ];
}

int rmD68Q (int eWoDu3Ecgq [], int n) {
    int IUhN5ctgfHQ, kmp2REweTJS, Pnt31qm6K;
    for (IUhN5ctgfHQ = (911 - 910); IUhN5ctgfHQ < n; IUhN5ctgfHQ = IUhN5ctgfHQ +1)
        for (kmp2REweTJS = (62 - 62); n - IUhN5ctgfHQ > kmp2REweTJS; kmp2REweTJS = kmp2REweTJS + 1) {
            if (eWoDu3Ecgq[kmp2REweTJS + (859 - 858)] < eWoDu3Ecgq[kmp2REweTJS]) {
                Pnt31qm6K = eWoDu3Ecgq[kmp2REweTJS];
                eWoDu3Ecgq[kmp2REweTJS] = eWoDu3Ecgq[kmp2REweTJS + (614 - 613)];
                eWoDu3Ecgq[kmp2REweTJS + (734 - 733)] = Pnt31qm6K;
            };
        }
    return eWoDu3Ecgq[kmp2REweTJS];
}

void  combine (int eWoDu3Ecgq [], int PrNZe75AR [], int n1, int Ori6t2) {
    int IUhN5ctgfHQ;
    int CrVpgM3 [(863 - 663)];
    for (IUhN5ctgfHQ = (424 - 424); n1 > IUhN5ctgfHQ; IUhN5ctgfHQ = IUhN5ctgfHQ +1)
        CrVpgM3[IUhN5ctgfHQ] = eWoDu3Ecgq[IUhN5ctgfHQ];
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
    for (IUhN5ctgfHQ = n1; Ori6t2 +n1 > IUhN5ctgfHQ; IUhN5ctgfHQ = IUhN5ctgfHQ +1)
        CrVpgM3[IUhN5ctgfHQ] = PrNZe75AR[IUhN5ctgfHQ -n1];
    o8ztBATRG (CrVpgM3, n1, Ori6t2);
}

void  o8ztBATRG (int CrVpgM3 [], int n1, int Ori6t2) {
    int IUhN5ctgfHQ;
    for (IUhN5ctgfHQ = (585 - 585); IUhN5ctgfHQ < n1 + Ori6t2 -(277 - 276); IUhN5ctgfHQ++)
        cout << CrVpgM3[IUhN5ctgfHQ] << " ";
    cout << CrVpgM3[n1 + Ori6t2 -(505 - 504)] << endl;
}

