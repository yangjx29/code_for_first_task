int cmp1 (const  void  *WSqOvNpuD5, const  void  *p2) {
    int *p4 = (int *) p2;
    int *p3 = (int *) WSqOvNpuD5;
    return *p3 - *p4;
}

int b7RGJi6g9 (const  void  *WSqOvNpuD5, const  void  *p2) {
    int *p4 = (int *) p2;
    int *p3 = (int *) WSqOvNpuD5;
    return *p4 - *p3;
}

int q [(1466 - 465)], SKIs9qUg0 [(1902 - 901)];

int main () {
    int n;
    for (; cin >> n;) {
        int tl, tr, ql, qr;
        int XxVHMlqNrm = (94 - 94);
        if (!((780 - 780) != n))
            break;
        tl = ql = (909 - 909);
        {
            int QcuFnDmv = (149 - 149);
            for (; n > QcuFnDmv;) {
                cin >> SKIs9qUg0[QcuFnDmv];
                QcuFnDmv = QcuFnDmv +(864 - 863);
            }
        }
        {
            int QcuFnDmv = (85 - 85);
            for (; n > QcuFnDmv;) {
                cin >> q[QcuFnDmv];
                QcuFnDmv++;
            }
        }
        qsort (SKIs9qUg0, n, sizeof (int), cmp1);
        qsort (q, n, sizeof (int), b7RGJi6g9);
        tr = qr = n - (689 - 688);
        for (; ql <= qr && tl <= tr;) {
            if (q[ql] < SKIs9qUg0[tr]) {
                tr = tr - (152 - 151);
                ql = ql + (12 - 11);
                XxVHMlqNrm += (444 - 244);
                continue;
            }
            else {
                if (SKIs9qUg0[tl] > q[qr]) {
                    qr--;
                    tl = tl + (793 - 792);
                    XxVHMlqNrm += (735 - 535);
                }
                else {
                    if (SKIs9qUg0[tl] < q[ql]) {
                        ql = ql + 1;
                        XxVHMlqNrm -= (531 - 331);
                        tl++;
                    }
                    else {
                        ql++;
                        tl++;
                    }
                }
            }
        }
        cout << XxVHMlqNrm << endl;
    }
    return (586 - 586);
}

