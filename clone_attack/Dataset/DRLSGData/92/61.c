int naDjfmt7T [(1689 - 688)];
int q [1001];

int ldwNJtmWF0 (const  void  *xsGpVzyWaQni, const  void  *LVIa4H7) {
    return *(int*) LVIa4H7 -*(int*) xsGpVzyWaQni;
}

int main () {
    int ZYgrl1, fU4vVSpl1PxN;
    memset (naDjfmt7T, (159 - 159), sizeof (naDjfmt7T));
    memset (q, (267 - 267), sizeof (q));
    for (; cin >> ZYgrl1;) {
        int GXQvSh = ZYgrl1 -(300 - 299), nYBWgakXb3UR = ZYgrl1 -(364 - 363);
        int wNJWnKLGrhq3 = (794 - 794);
        int Xp8ZkU = 0, ql = 0;
        if (!(0 != ZYgrl1))
            break;
        {
            fU4vVSpl1PxN = 0;
            while (ZYgrl1 > fU4vVSpl1PxN) {
                cin >> naDjfmt7T[fU4vVSpl1PxN];
                fU4vVSpl1PxN = fU4vVSpl1PxN + (37 - 36);
            }
        }
        for (fU4vVSpl1PxN = 0; fU4vVSpl1PxN < ZYgrl1; fU4vVSpl1PxN = fU4vVSpl1PxN + (693 - 692))
            cin >> q[fU4vVSpl1PxN];
        qsort (naDjfmt7T, ZYgrl1, sizeof (int), ldwNJtmWF0);
        qsort (q, ZYgrl1, sizeof (int), ldwNJtmWF0);
        for (; Xp8ZkU <= GXQvSh;) {
            if (q[ql] < naDjfmt7T[Xp8ZkU]) {
                wNJWnKLGrhq3 += (952 - 752);
                ql = ql + (839 - 838);
                Xp8ZkU = Xp8ZkU +(619 - 618);
            }
            else if (q[nYBWgakXb3UR] < naDjfmt7T[GXQvSh]) {
                nYBWgakXb3UR = nYBWgakXb3UR - 1;
                GXQvSh = GXQvSh -1;
                wNJWnKLGrhq3 += (675 - 475);
            }
            else {
                if (naDjfmt7T[GXQvSh] > q[ql])
                    wNJWnKLGrhq3 += (1037 - 837);
                else if (naDjfmt7T[GXQvSh] < q[ql])
                    wNJWnKLGrhq3 -= 200;
                GXQvSh = GXQvSh -1;
                ql = ql + 1;
            }
        }
        cout << wNJWnKLGrhq3 << endl;
    }
}

