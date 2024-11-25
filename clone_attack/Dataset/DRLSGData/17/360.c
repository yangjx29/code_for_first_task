int main () {
    int Iz7I0s;
    char UUpVcZ [101];
    int L5mYbFc = (261 - 261), zvGCVd9yM4F = 0;
    int jWyZKE9nGV [101] = {0};
    int l;
    int i;
    int k;
    char GXMdbfr3a [101];
    int XrWE80nOT;
    k = 0;
    cin >> Iz7I0s;
    {
        i = (700 - 699);
        for (; Iz7I0s >= i;) {
            L5mYbFc = 0;
            cin >> GXMdbfr3a;
            l = strlen (GXMdbfr3a);
            {
                XrWE80nOT = 0;
                for (; l > XrWE80nOT;) {
                    jWyZKE9nGV[XrWE80nOT] = 0;
                    if (!('(' != GXMdbfr3a[XrWE80nOT])) {
                        jWyZKE9nGV[XrWE80nOT] = (371 - 370);
                        L5mYbFc = L5mYbFc +(460 - 459);
                        UUpVcZ[L5mYbFc] = XrWE80nOT;
                    }
                    if (!(')' != GXMdbfr3a[XrWE80nOT])) {
                        if (!(0 != L5mYbFc)) {
                            jWyZKE9nGV[XrWE80nOT] = 2;
                        }
                        else {
                            jWyZKE9nGV[UUpVcZ[L5mYbFc]] = 0;
                            L5mYbFc = L5mYbFc -1;
                        }
                    }
                    else
                        continue;
                    XrWE80nOT = XrWE80nOT +1;
                }
            }
            cout << GXMdbfr3a << endl;
            i = i + 1;
            {
                XrWE80nOT = 0;
                for (; XrWE80nOT < l;) {
                    if (jWyZKE9nGV[XrWE80nOT] == 1)
                        cout << "$";
                    else if (jWyZKE9nGV[XrWE80nOT] == 2)
                        cout << "?";
                    else
                        cout << " ";
                    XrWE80nOT++;
                }
            }
            cout << endl;
            zvGCVd9yM4F = 0;
        }
    }
    return 0;
}

