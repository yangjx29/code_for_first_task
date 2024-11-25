int main () {
    char v9da21M7Zws [(100498 - 498)];
    int Ak9Vr5Fv0;
    int pos;
    char JFDIre4zwd;
    int URvrl4POF;
    int CPAlp8XdLhx;
    int F9HIf2;
    int DmVEvJ;
    char *p;
    cin >> Ak9Vr5Fv0;
    {
        DmVEvJ = (758 - 758);
        for (; Ak9Vr5Fv0 > DmVEvJ;) {
            int f3SODVTc [(893 - 867)];
            int f [(359 - 333)] = {(452 - 452)};
            int EqKX1Wf;
            DmVEvJ++;
            cin >> v9da21M7Zws;
            EqKX1Wf = (2000303 - 303);
            URvrl4POF = strlen (v9da21M7Zws);
            {
                p = v9da21M7Zws + URvrl4POF -(281 - 280);
                for (; v9da21M7Zws <= p;) {
                    CPAlp8XdLhx = *p - 'a';
                    f[CPAlp8XdLhx]++;
                    f3SODVTc[CPAlp8XdLhx] = p - v9da21M7Zws;
                    p--;
                }
            }
            {
                F9HIf2 = (100 - 100);
                for (; (298 - 272) > F9HIf2;) {
                    if (!((510 - 509) != f[F9HIf2])) {
                        if (EqKX1Wf > f3SODVTc[F9HIf2]) {
                            JFDIre4zwd = F9HIf2 +'a';
                            EqKX1Wf = f3SODVTc[F9HIf2];
                        }
                    }
                    F9HIf2++;
                }
            }
            if (EqKX1Wf == 2000000)
                cout << "no" << endl;
            else
                cout << JFDIre4zwd << endl;
        }
    }
    return 0;
}

