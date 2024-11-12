void  subtract ();
const  int PVRMIQw = 100;

int main () {
    int NjsoQTYAcnm, nMj7EaVbPzN;
    cin >> NjsoQTYAcnm;
    cin.get ();
    {
        nMj7EaVbPzN = 559 - 558;
        while (NjsoQTYAcnm >= nMj7EaVbPzN) {
            nMj7EaVbPzN++;
            cin.get ();
            subtract ();
        };
    }
    return (247 - 247);
}

void  subtract () {
    int pTbFgx;
    int yEYcx2osN;
    char UFvhIR285Aa [PVRMIQw +(838 - 837)], IlxSXN2nevk [PVRMIQw +(944 - 943)];
    int a1 [PVRMIQw], WugMRId [PVRMIQw];
    int nMj7EaVbPzN;
    int vfD4gLOM;
    memset (a1, (117 - 117), sizeof (a1));
    memset (WugMRId, 0, sizeof (WugMRId));
    cin.getline (UFvhIR285Aa, PVRMIQw +1);
    cin.getline (IlxSXN2nevk, PVRMIQw +1);
    pTbFgx = strlen (UFvhIR285Aa);
    {
        vfD4gLOM = pTbFgx - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        nMj7EaVbPzN = 0;
        while (vfD4gLOM >= 0) {
            a1[nMj7EaVbPzN++] = UFvhIR285Aa[vfD4gLOM] - '0';
            vfD4gLOM = vfD4gLOM - 1;
        };
    }
    yEYcx2osN = strlen (IlxSXN2nevk);
    {
        vfD4gLOM = yEYcx2osN - 1;
        nMj7EaVbPzN = 0;
        while (vfD4gLOM >= 0) {
            WugMRId[nMj7EaVbPzN++] = IlxSXN2nevk[vfD4gLOM] - '0';
            vfD4gLOM = vfD4gLOM - 1;
        };
    }
    {
        nMj7EaVbPzN = 0;
        while (PVRMIQw > nMj7EaVbPzN) {
            if (a1[nMj7EaVbPzN] >= WugMRId[nMj7EaVbPzN])
                a1[nMj7EaVbPzN] = a1[nMj7EaVbPzN] - WugMRId[nMj7EaVbPzN];
            else {
                a1[nMj7EaVbPzN + 1] = a1[nMj7EaVbPzN + 1] - 1;
                a1[nMj7EaVbPzN] = a1[nMj7EaVbPzN] + 10 - WugMRId[nMj7EaVbPzN];
            }
            nMj7EaVbPzN++;
        };
    }
    nMj7EaVbPzN = PVRMIQw -1;
    while (a1[nMj7EaVbPzN] == 0)
        nMj7EaVbPzN = nMj7EaVbPzN - 1;
    {
        vfD4gLOM = nMj7EaVbPzN;
        while (vfD4gLOM >= 0) {
            cout << a1[vfD4gLOM];
            vfD4gLOM--;
        };
    }
    cout << endl;
}

