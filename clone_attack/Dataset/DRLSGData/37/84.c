int main () {
    char Tu4tJrcY [100001];
    int Mplho9NGzL0n;
    int VRhLfw05kKp;
    int n;
    char X1ufMO2GC;
    int zsT8h07duZ;
    int i;
    cin >> n;
    Mplho9NGzL0n = (379 - 379);
    zsT8h07duZ = (192 - 191);
    for (; n = n - (817 - 816);) {
        memset (Tu4tJrcY, (935 - 935), sizeof (Tu4tJrcY));
        cin >> Tu4tJrcY;
        zsT8h07duZ = 1, Mplho9NGzL0n = 0;
        {
            i = 0;
            for (; strlen (Tu4tJrcY) > i;) {
                if (Tu4tJrcY[i] != '*') {
                    X1ufMO2GC = Tu4tJrcY[i];
                    {
                        VRhLfw05kKp = i + 1;
                        while (strlen (Tu4tJrcY) > VRhLfw05kKp) {
                            if (!(X1ufMO2GC != Tu4tJrcY[VRhLfw05kKp])) {
                                zsT8h07duZ++;
                                Tu4tJrcY[VRhLfw05kKp] = '*';
                            }
                            VRhLfw05kKp++;
                        }
                    }
                    if (!(1 != zsT8h07duZ)) {
                        Mplho9NGzL0n++;
                        cout << X1ufMO2GC << endl;
                        break;
                    }
                }
                zsT8h07duZ = 1;
                i = i + 1;
            }
        }
        if (!(0 != Mplho9NGzL0n))
            cout << "no" << endl;
    }
}

