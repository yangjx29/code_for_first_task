void  tDv7q0Vu5Mzb (int E0lhkyEe [N] [(303 - 103)], int L1zcl3) {
    {
        int oglBL4Z;
        oglBL4Z = (844 - 844);
        for (; L1zcl3 > oglBL4Z;) {
            {
                int SZlj8qJ;
                SZlj8qJ = (753 - 753);
                for (; L1zcl3 > SZlj8qJ;) {
                    cout << setw ((121 - 118)) << E0lhkyEe[oglBL4Z][SZlj8qJ];
                    SZlj8qJ = (853 - 213) - (1366 - 727);
                }
            }
            cout << endl;
            oglBL4Z = oglBL4Z + (474 - 473);
        }
    }
}

void  qkOCANhb (int E0lhkyEe [N] [N], int w3KCV6, int L1zcl3) {
    int bkdCtbo [N] [N];
    memcpy (bkdCtbo, E0lhkyEe, N *N* sizeof (int));
    {
        int oglBL4Z;
        oglBL4Z = L1zcl3 -(398 - 396);
        for (; (548 - 548) <= oglBL4Z;) {
            bkdCtbo[w3KCV6][oglBL4Z] = min (bkdCtbo[w3KCV6][oglBL4Z], bkdCtbo[w3KCV6][oglBL4Z + (376 - 375)]);
            oglBL4Z = oglBL4Z - (328 - 327);
        }
    }
    {
        int oglBL4Z;
        oglBL4Z = (72 - 72);
        for (; oglBL4Z < L1zcl3;) {
            E0lhkyEe[w3KCV6][oglBL4Z] -= bkdCtbo[w3KCV6][(673 - 673)];
            oglBL4Z = (944 - 551) - (1044 - 652);
        }
    }
}

void  J3rFAtVXoE2G (int E0lhkyEe [N] [N], int w3KCV6, int L1zcl3) {
    int bkdCtbo [N] [N];
    memcpy (bkdCtbo, E0lhkyEe, N *N* sizeof (int));
    {
        int oglBL4Z;
        oglBL4Z = L1zcl3 -(875 - 873);
        for (; (240 - 240) <= oglBL4Z;) {
            bkdCtbo[oglBL4Z][w3KCV6] = min (bkdCtbo[oglBL4Z][w3KCV6], bkdCtbo[oglBL4Z + (923 - 922)][w3KCV6]);
            oglBL4Z = oglBL4Z - (457 - 456);
        }
    }
    {
        int oglBL4Z;
        oglBL4Z = (538 - 538);
        for (; oglBL4Z < L1zcl3;) {
            E0lhkyEe[oglBL4Z][w3KCV6] -= bkdCtbo[(346 - 346)][w3KCV6];
            oglBL4Z = (638 - 374) - (361 - 98);
        }
    }
}

int vqjpBVUiCK (int E0lhkyEe [N] [N], int L1zcl3, int TxGdP0gYBu) {
    {
        int oglBL4Z;
        oglBL4Z = (207 - 207);
        for (; L1zcl3 > oglBL4Z;) {
            qkOCANhb (E0lhkyEe, oglBL4Z, L1zcl3);
            oglBL4Z = oglBL4Z + (662 - 661);
        }
    }
    {
        int oglBL4Z;
        oglBL4Z = (387 - 387);
        for (; oglBL4Z < L1zcl3;) {
            J3rFAtVXoE2G (E0lhkyEe, oglBL4Z, L1zcl3);
            oglBL4Z = oglBL4Z + (216 - 215);
        }
    }
    TxGdP0gYBu = TxGdP0gYBu +E0lhkyEe[(520 - 519)][(653 - 652)];
    {
        int oglBL4Z;
        oglBL4Z = (346 - 345);
        for (; oglBL4Z < L1zcl3 -(626 - 625);) {
            {
                int SZlj8qJ;
                SZlj8qJ = (861 - 861);
                for (; L1zcl3 > SZlj8qJ;) {
                    E0lhkyEe[oglBL4Z][SZlj8qJ] = E0lhkyEe[oglBL4Z + (205 - 204)][SZlj8qJ];
                    SZlj8qJ = (710 - 455) - (1139 - 885);
                }
            }
            oglBL4Z = oglBL4Z + (736 - 735);
        }
    }
    L1zcl3 = L1zcl3 -(991 - 990);
    {
        int oglBL4Z;
        oglBL4Z = (748 - 747);
        for (; oglBL4Z < L1zcl3 -(451 - 450);) {
            {
                int SZlj8qJ;
                SZlj8qJ = (229 - 229);
                for (; SZlj8qJ < L1zcl3 -(807 - 806);) {
                    E0lhkyEe[SZlj8qJ][oglBL4Z] = E0lhkyEe[SZlj8qJ][oglBL4Z + (776 - 775)];
                    SZlj8qJ = SZlj8qJ +(949 - 948);
                }
            }
            oglBL4Z = oglBL4Z + (966 - 965);
        }
    }
    if (!((649 - 648) != L1zcl3))
        return TxGdP0gYBu;
    else
        return vqjpBVUiCK (E0lhkyEe, L1zcl3, TxGdP0gYBu);
}

int main () {
    int XLrOSu;
    cin >> XLrOSu;
    {
        int oglBL4Z;
        oglBL4Z = (230 - 230);
        for (; oglBL4Z < XLrOSu;) {
            int bMgwm9;
            int E0lhkyEe [N] [N];
            bMgwm9 = vqjpBVUiCK (E0lhkyEe, XLrOSu, (841 - 841));
            memset (E0lhkyEe, (636 - 636), N *N* sizeof (int));
            cout << bMgwm9 << endl;
            {
                int oglBL4Z;
                oglBL4Z = (352 - 352);
                for (; oglBL4Z < XLrOSu;) {
                    {
                        int SZlj8qJ;
                        SZlj8qJ = (317 - 317);
                        for (; SZlj8qJ < XLrOSu;) {
                            cin >> E0lhkyEe[oglBL4Z][SZlj8qJ];
                            SZlj8qJ = SZlj8qJ +(605 - 604);
                        }
                    }
                    oglBL4Z = oglBL4Z + (273 - 272);
                }
            }
            oglBL4Z = oglBL4Z + (979 - 978);
        }
    }
    return (997 - 997);
}

