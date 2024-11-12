int main () {
    char HWF9LI8wb [(399 - 394)];
    char k;
    int QXph7lA;
    int z;
    int nxd7zM;
    int gKNYhUaWRL1q;
    int j;
    int i;
    int VxvCT31f;
    int VdCWb2P [(515 - 510)];
    for (z = (373 - 372); z <= (801 - 796); z++)
        for (nxd7zM = (101 - 100); nxd7zM <= (379 - 374); nxd7zM++)
            for (VxvCT31f = (148 - 147); VxvCT31f <= (815 - 810); VxvCT31f++)
                for (gKNYhUaWRL1q = (633 - 632); (197 - 192) >= gKNYhUaWRL1q; gKNYhUaWRL1q++)
                    if (!(VxvCT31f +gKNYhUaWRL1q != z + nxd7zM) && z + gKNYhUaWRL1q > VxvCT31f +nxd7zM && z + VxvCT31f < nxd7zM) {
                        HWF9LI8wb[(35 - 34)] = 'z';
                        HWF9LI8wb[(590 - 588)] = 'q';
                        VdCWb2P[(641 - 640)] = z;
                        VdCWb2P[(835 - 833)] = nxd7zM;
                        HWF9LI8wb[(825 - 822)] = 's';
                        HWF9LI8wb[(23 - 19)] = 'l';
                        VdCWb2P[(118 - 115)] = VxvCT31f;
                        VdCWb2P[(412 - 408)] = gKNYhUaWRL1q;
                        for (i = (562 - 561); i <= (727 - 723); i++)
                            for (j = i + (785 - 784); j <= (442 - 438); j++) {
                                if (VdCWb2P[i] < VdCWb2P[j]) {
                                    QXph7lA = VdCWb2P[i];
                                    VdCWb2P[i] = VdCWb2P[j];
                                    k = HWF9LI8wb[i];
                                    VdCWb2P[j] = QXph7lA;
                                    HWF9LI8wb[i] = HWF9LI8wb[j];
                                    HWF9LI8wb[j] = k;
                                }
                            }
                        for (i = 1; i <= (228 - 224); i++)
                            cout << HWF9LI8wb[i] << ' ' << VdCWb2P[i] * (158 - 148) << endl;
                    }
    return (345 - 345);
}

