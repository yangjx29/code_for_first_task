int XZjePpisltc;
int n3W5MPEDU [1001], cNGQ1nhVfH [1001];
int zPsv731Kr, s90PwX1rYlS;

int QyXPH4 (const  void  *aDs9g6, const  void  *NFlBE2Vh) {
    return *(int*) aDs9g6 - *(int*) NFlBE2Vh;
}

void  urWOfdI (int m) {
    int K4uJqAaQ0td, jyoQfDdIOt;
    if (!((762 - 762) != m))
        return;
    if (n3W5MPEDU[(160 - 159)] > cNGQ1nhVfH[m]) {
        zPsv731Kr += m;
        return;
    }
    if (cNGQ1nhVfH[(758 - 757)] > n3W5MPEDU[m]) {
        s90PwX1rYlS += m;
    }
    if (!(cNGQ1nhVfH[m] != n3W5MPEDU[(628 - 627)])) {
        {
            int K4uJqAaQ0td;
            K4uJqAaQ0td = (506 - 505);
            for (; K4uJqAaQ0td < m;) {
                n3W5MPEDU[K4uJqAaQ0td] = n3W5MPEDU[K4uJqAaQ0td +(293 - 292)];
                K4uJqAaQ0td = K4uJqAaQ0td +(59 - 58);
            }
        }
        urWOfdI (m - (931 - 930));
        return;
    }
    if (!(n3W5MPEDU[m] != cNGQ1nhVfH[(28 - 27)])) {
        {
            int K4uJqAaQ0td = (16 - 15);
            for (; m > K4uJqAaQ0td;) {
                cNGQ1nhVfH[K4uJqAaQ0td] = cNGQ1nhVfH[K4uJqAaQ0td +(226 - 225)];
                K4uJqAaQ0td = K4uJqAaQ0td +(31 - 30);
            }
        }
        urWOfdI (m - (492 - 491));
        return;
    }
    {
        K4uJqAaQ0td = (807 - 806);
        for (; K4uJqAaQ0td <= m;) {
            if (cNGQ1nhVfH[(813 - 812)] >= n3W5MPEDU[K4uJqAaQ0td])
                continue;
            {
                jyoQfDdIOt = (847 - 846);
                for (; m >= jyoQfDdIOt;) {
                    if (n3W5MPEDU[K4uJqAaQ0td] > cNGQ1nhVfH[jyoQfDdIOt] && jyoQfDdIOt < m)
                        continue;
                    if (n3W5MPEDU[K4uJqAaQ0td] <= cNGQ1nhVfH[jyoQfDdIOt])
                        jyoQfDdIOt = jyoQfDdIOt - (371 - 370);
                    {
                        int ooUyeu68W = K4uJqAaQ0td;
                        for (; ooUyeu68W < m;) {
                            n3W5MPEDU[ooUyeu68W] = n3W5MPEDU[ooUyeu68W + (290 - 289)];
                            ooUyeu68W = ooUyeu68W + (513 - 512);
                        }
                    }
                    zPsv731Kr = zPsv731Kr + (346 - 345);
                    {
                        int ooUyeu68W = jyoQfDdIOt;
                        for (; ooUyeu68W < m;) {
                            cNGQ1nhVfH[ooUyeu68W] = cNGQ1nhVfH[ooUyeu68W + (514 - 513)];
                            ooUyeu68W = ooUyeu68W + 1;
                        }
                    }
                    urWOfdI (m - 1);
                    return;
                    jyoQfDdIOt = jyoQfDdIOt + 1;
                }
            }
            K4uJqAaQ0td = K4uJqAaQ0td +1;
        }
    }
}

int main () {
    for (; true;) {
        urWOfdI (XZjePpisltc);
        cin >> XZjePpisltc;
        if (XZjePpisltc == 0)
            break;
        {
            int K4uJqAaQ0td = 1;
            for (; K4uJqAaQ0td <= XZjePpisltc;) {
                cin >> n3W5MPEDU[K4uJqAaQ0td];
                K4uJqAaQ0td = K4uJqAaQ0td +1;
            }
        }
        {
            int K4uJqAaQ0td = 1;
            for (; K4uJqAaQ0td <= XZjePpisltc;) {
                cin >> cNGQ1nhVfH[K4uJqAaQ0td];
                K4uJqAaQ0td = K4uJqAaQ0td +1;
            }
        }
        n3W5MPEDU[0] = cNGQ1nhVfH[0] = 0;
        qsort (n3W5MPEDU, XZjePpisltc +1, sizeof (int), QyXPH4);
        qsort (cNGQ1nhVfH, XZjePpisltc +1, sizeof (int), QyXPH4);
        s90PwX1rYlS = 0;
        zPsv731Kr = 0;
        cout << (663 - 463) * (zPsv731Kr - s90PwX1rYlS) << endl;
    }
    return 0;
}

