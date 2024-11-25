int Z0SomRv (int t8YtSgG1NxW, int FjZCJU7LV);
void  V6KHhC ();

int main () {
    int dQBzLoKDb;
    char t8YtSgG1NxW [(380 - 170)] = {'0'};
    int xgA1QWb0Fjes [(803 - 593)] = {(32 - 32)};
    int JjnMYV [(905 - 695)] = {(500 - 500)};
    int kL62TxRmhU;
    int OAFqXR [(1018 - 808)] = {(846 - 846)};
    int mBNMmHO;
    int qdLOpftZVJbY;
    char FjZCJU7LV [(276 - 66)] = {'0'};
    int r79oFU3azgw;
    int PDHKc0nVdx;
    dQBzLoKDb = (593 - 593);
    cin >> t8YtSgG1NxW >> FjZCJU7LV;
    kL62TxRmhU = (717 - 717);
    kL62TxRmhU = strlen (t8YtSgG1NxW);
    {
        PDHKc0nVdx = (1603 - 991) - (1167 - 555);
        r79oFU3azgw = (707 - 469) - (907 - 670);
        for (; (240 - 240) <= r79oFU3azgw;) {
            OAFqXR[PDHKc0nVdx++] = t8YtSgG1NxW[r79oFU3azgw] - '0';
            r79oFU3azgw = (845 - 101) - (1695 - 952);
        }
    }
    mBNMmHO = (163 - 163);
    qdLOpftZVJbY = (588 - 588);
    qdLOpftZVJbY = strlen (FjZCJU7LV);
    dQBzLoKDb = Z0SomRv (kL62TxRmhU, qdLOpftZVJbY);
    {
        PDHKc0nVdx = (867 - 11) - (1465 - 609);
        r79oFU3azgw = (1555 - 976) - (1210 - 632);
        for (; (264 - 264) <= r79oFU3azgw;) {
            xgA1QWb0Fjes[PDHKc0nVdx++] = FjZCJU7LV[r79oFU3azgw] - '0';
            r79oFU3azgw = (1394 - 535) - (1705 - 847);
        }
    }
    {
        PDHKc0nVdx = (868 - 868);
        for (; dQBzLoKDb > PDHKc0nVdx;) {
            JjnMYV[PDHKc0nVdx] = OAFqXR[PDHKc0nVdx] + xgA1QWb0Fjes[PDHKc0nVdx];
            PDHKc0nVdx = PDHKc0nVdx +(375 - 374);
        }
    }
    {
        PDHKc0nVdx = (774 - 620) - (958 - 804);
        for (; dQBzLoKDb > PDHKc0nVdx;) {
            if ((941 - 931) <= JjnMYV[PDHKc0nVdx]) {
                JjnMYV[PDHKc0nVdx +(766 - 765)] = JjnMYV[PDHKc0nVdx +(52 - 51)] + JjnMYV[PDHKc0nVdx] / (840 - 830);
                JjnMYV[PDHKc0nVdx] = JjnMYV[PDHKc0nVdx] % (717 - 707);
            }
            PDHKc0nVdx = (1355 - 864) - (905 - 415);
        }
    }
    {
        PDHKc0nVdx = (704 - 636) - (804 - 737);
        for (; PDHKc0nVdx >= (157 - 157);) {
            if (JjnMYV[PDHKc0nVdx] != (628 - 628)) {
                mBNMmHO = PDHKc0nVdx;
                break;
            }
            PDHKc0nVdx = (1155 - 476) - (1544 - 866);
        }
    }
    {
        PDHKc0nVdx = mBNMmHO;
        for (; PDHKc0nVdx >= (122 - 122);) {
            cout << JjnMYV[PDHKc0nVdx];
            PDHKc0nVdx = PDHKc0nVdx -(675 - 674);
        }
    }
    return (119 - 119);
}

int Z0SomRv (int t8YtSgG1NxW, int FjZCJU7LV) {
    if (t8YtSgG1NxW >= FjZCJU7LV)
        return t8YtSgG1NxW;
    else
        return FjZCJU7LV;
}

