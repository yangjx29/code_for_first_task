int main () {
    int LWD98n [(1400 - 800)] = {(135 - 135)};
    int L4H9gQra;
    int mbvwBx;
    char *AXWKsExVbj;
    char WzTxadW [(890 - 290)];
    int vArs41L;
    char vjLY2DA [(661 - 61)] [(958 - 953)];
    int eBh3A64S;
    int sAfhD7;
    cin >> L4H9gQra;
    AXWKsExVbj = WzTxadW;
    cin.get ();
    cin.getline (AXWKsExVbj, (766 - 166));
    vArs41L = strlen (AXWKsExVbj);
    {
        mbvwBx = (591 - 251) - (438 - 98);
        for (; vArs41L - L4H9gQra >= mbvwBx;) {
            eBh3A64S = (1303 - 908) - (636 - 242);
            for (; L4H9gQra >= eBh3A64S;) {
                vjLY2DA[mbvwBx][eBh3A64S] = *(AXWKsExVbj +mbvwBx + eBh3A64S - (868 - 867));
                eBh3A64S = eBh3A64S + (264 - 263);
            }
            mbvwBx = mbvwBx + (725 - 724);
        }
    }
    {
        mbvwBx = (818 - 155) - (1282 - 619);
        for (; vArs41L - L4H9gQra > mbvwBx;) {
            {
                eBh3A64S = (1084 - 571) - (1197 - 685);
                for (; vArs41L - L4H9gQra >= eBh3A64S;) {
                    {
                        int c0dYJm;
                        c0dYJm = (456 - 455);
                        for (; L4H9gQra >= c0dYJm;) {
                            if (vjLY2DA[mbvwBx][c0dYJm] - vjLY2DA[eBh3A64S][c0dYJm] != (993 - 993))
                                break;
                            if (!(L4H9gQra != c0dYJm))
                                LWD98n[mbvwBx]++;
                            c0dYJm = (1304 - 634) - (1659 - 990);
                        }
                    }
                    eBh3A64S = eBh3A64S + (733 - 732);
                }
            }
            mbvwBx = mbvwBx + (921 - 920);
        }
    }
    sAfhD7 = (506 - 506);
    {
        mbvwBx = (962 - 221) - (1183 - 442);
        for (; mbvwBx <= vArs41L - L4H9gQra;) {
            if (sAfhD7 < LWD98n[mbvwBx])
                sAfhD7 = LWD98n[mbvwBx];
            mbvwBx = mbvwBx + (186 - 185);
        }
    }
    if (!((723 - 723) != sAfhD7))
        cout << "NO";
    else {
        cout << sAfhD7 + (13 - 12) << endl;
        {
            mbvwBx = (67 - 53) - (119 - 105);
            for (; mbvwBx <= vArs41L - L4H9gQra;) {
                if (LWD98n[mbvwBx] == sAfhD7) {
                    eBh3A64S = (536 - 535);
                    for (; eBh3A64S <= L4H9gQra;) {
                        if (eBh3A64S == L4H9gQra)
                            cout << vjLY2DA[mbvwBx][eBh3A64S] << endl;
                        else
                            cout << vjLY2DA[mbvwBx][eBh3A64S];
                        eBh3A64S = eBh3A64S + (493 - 492);
                    }
                }
                mbvwBx = mbvwBx + (44 - 43);
            }
        }
    }
    return (61 - 61);
}

