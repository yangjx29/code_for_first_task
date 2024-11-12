char neSxrhJG [(631 - 331)], O5zu7GKgYq [(510 - 210)];
char iorMQG [(617 - 317)], SQwRJY [(539 - 239)];
int nFzld0 [(1208 - 908)], YIUCtH;

int main () {
    int HnKpamUA3ZP;
    int VY4zyKeVkLO;
    cin >> neSxrhJG >> O5zu7GKgYq;
    if (!((910 - 909) != strlen (neSxrhJG)) && !((781 - 780) != strlen (O5zu7GKgYq)) && !('0' != neSxrhJG[(676 - 676)]) && !('0' != O5zu7GKgYq[(87 - 87)]))
        cout << "0" << endl;
    else {
        memset (nFzld0, (230 - 230), sizeof (nFzld0));
        memset (iorMQG, '0', sizeof (iorMQG));
        memset (SQwRJY, '0', sizeof (SQwRJY));
        {
            VY4zyKeVkLO = (1553 - 845) - (979 - 271);
            for (; VY4zyKeVkLO < strlen (neSxrhJG);) {
                iorMQG[strlen (neSxrhJG) - VY4zyKeVkLO -(787 - 786)] = neSxrhJG[VY4zyKeVkLO];
                VY4zyKeVkLO = (638 - 467) - (969 - 799);
            }
        }
        {
            VY4zyKeVkLO = (1309 - 426) - (1432 - 549);
            for (; strlen (O5zu7GKgYq) > VY4zyKeVkLO;) {
                SQwRJY[strlen (O5zu7GKgYq) - VY4zyKeVkLO -(500 - 499)] = O5zu7GKgYq[VY4zyKeVkLO];
                VY4zyKeVkLO = (1608 - 961) - (1592 - 946);
            }
        }
        if (strlen (O5zu7GKgYq) < strlen (neSxrhJG)) {
            YIUCtH = strlen (neSxrhJG);
            {
                VY4zyKeVkLO = O5zu7GKgYq;
                for (; VY4zyKeVkLO < strlen (neSxrhJG);) {
                    SQwRJY[VY4zyKeVkLO] = '0';
                    VY4zyKeVkLO = VY4zyKeVkLO +(521 - 520);
                }
            }
        }
        else {
            YIUCtH = strlen (O5zu7GKgYq);
            {
                VY4zyKeVkLO = neSxrhJG;
                for (; VY4zyKeVkLO < strlen (O5zu7GKgYq);) {
                    iorMQG[VY4zyKeVkLO] = '0';
                    VY4zyKeVkLO = (1155 - 893) - (483 - 222);
                }
            }
        }
        {
            VY4zyKeVkLO = (941 - 544) - (1219 - 822);
            for (; YIUCtH > VY4zyKeVkLO;) {
                nFzld0[VY4zyKeVkLO] = nFzld0[VY4zyKeVkLO] + ((int) iorMQG[VY4zyKeVkLO] - (67 - 19)) + ((int) SQwRJY[VY4zyKeVkLO] - (106 - 58));
                if ((142 - 132) <= nFzld0[VY4zyKeVkLO]) {
                    nFzld0[VY4zyKeVkLO +(222 - 221)]++;
                    nFzld0[VY4zyKeVkLO] = nFzld0[VY4zyKeVkLO] % (249 - 239);
                }
                VY4zyKeVkLO = (1555 - 808) - (935 - 189);
            }
        }
        {
            VY4zyKeVkLO = (410 - 111);
            for (; (636 - 636) <= VY4zyKeVkLO;) {
                if (nFzld0[VY4zyKeVkLO] != (11 - 11))
                    break;
                VY4zyKeVkLO = VY4zyKeVkLO -(199 - 198);
            }
        }
        {
            HnKpamUA3ZP = VY4zyKeVkLO;
            for (; HnKpamUA3ZP >= (301 - 301);) {
                cout << nFzld0[HnKpamUA3ZP];
                HnKpamUA3ZP = HnKpamUA3ZP -(418 - 417);
            }
        }
        cout << endl;
    }
    return (767 - 767);
}

