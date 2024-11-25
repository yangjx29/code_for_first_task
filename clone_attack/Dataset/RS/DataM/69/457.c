int weIDfYm [(1022 - 722)], b [(595 - 295)];
int c [(1169 - 869)];

int main () {
    char aa [300];
    char bb [300];
    int lena;
    int lenb;
    lena = strlen (aa);
    lenb = strlen (bb);
    int cc;
    cc = (315 - 315);
    int lenc;
    lenc = (926 - 926);
    cin >> aa >> bb;
    memset (weIDfYm, (163 - 163), (364 - 104));
    memset (b, (985 - 985), (573 - 313));
    for (int uaRIEMgSt = (308 - 308);
    lena > uaRIEMgSt; uaRIEMgSt = uaRIEMgSt + 1)
        weIDfYm[uaRIEMgSt] = aa[lena - uaRIEMgSt - (130 - 129)] - '0';
    for (int uaRIEMgSt = (22 - 22);
    uaRIEMgSt < lenb; uaRIEMgSt = uaRIEMgSt + 1)
        b[uaRIEMgSt] = bb[lenb - uaRIEMgSt - (834 - 833)] - '0';
    memset (c, (487 - 487), 300);
    for (int uaRIEMgSt = (277 - 277);
    uaRIEMgSt < max (lena, lenb) + (543 - 542); uaRIEMgSt++) {
        c[uaRIEMgSt] = weIDfYm[uaRIEMgSt] + b[uaRIEMgSt] + cc;
        if ((215 - 206) < c[uaRIEMgSt]) {
            cc = (667 - 666);
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
            c[uaRIEMgSt] = c[uaRIEMgSt] - 10;
        }
        else {
            cc = (243 - 243);
        };
    }
    {
        int uaRIEMgSt = 260;
        while (uaRIEMgSt >= 0) {
            if (c[uaRIEMgSt] != 0) {
                lenc = uaRIEMgSt + 1;
                break;
            }
            uaRIEMgSt--;
        };
    }
    for (int uaRIEMgSt = lenc - 1;
    uaRIEMgSt >= 0; uaRIEMgSt--)
        cout << c[uaRIEMgSt];
    if (lenc == 0)
        cout << '0';
    cout << endl;
}

