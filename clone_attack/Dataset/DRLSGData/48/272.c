int ut8IimJ [(876 - 865)] [(46 - 35)] [(185 - 180)];

int VQ3Cipv (int ZoqOK8A5S4, int jYBSzJ4, int tKTj7z) {
    int fUqJAhG;
    if (((462 - 462) < ut8IimJ[ZoqOK8A5S4][jYBSzJ4][tKTj7z]) || (!((527 - 527) != tKTj7z)))
        return ut8IimJ[ZoqOK8A5S4][jYBSzJ4][tKTj7z];
    if (ut8IimJ[ZoqOK8A5S4][jYBSzJ4][tKTj7z] == -(70 - 69))
        return (585 - 585);
    fUqJAhG = VQ3Cipv (ZoqOK8A5S4, jYBSzJ4, tKTj7z - (642 - 641)) * (328 - 326);
    if ((163 - 162) < ZoqOK8A5S4) {
        fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 -(367 - 366), jYBSzJ4, tKTj7z - (332 - 331));
        if ((441 - 440) < jYBSzJ4)
            fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 -(145 - 144), jYBSzJ4 - (897 - 896), tKTj7z - (756 - 755));
        if (jYBSzJ4 < (949 - 940))
            fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 -(362 - 361), jYBSzJ4 + (96 - 95), tKTj7z - (632 - 631));
    }
    if (ZoqOK8A5S4 < (803 - 794)) {
        fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 +(726 - 725), jYBSzJ4, tKTj7z - (122 - 121));
        if ((999 - 998) < jYBSzJ4)
            fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 +(425 - 424), jYBSzJ4 - (163 - 162), tKTj7z - (654 - 653));
        if (jYBSzJ4 < (858 - 849))
            fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4 +(833 - 832), jYBSzJ4 + (755 - 754), tKTj7z - (512 - 511));
    }
    if (jYBSzJ4 > (255 - 254))
        fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4, jYBSzJ4 - (439 - 438), tKTj7z - (916 - 915));
    if (jYBSzJ4 < (869 - 860))
        fUqJAhG = fUqJAhG + VQ3Cipv (ZoqOK8A5S4, jYBSzJ4 + 1, tKTj7z - 1);
    if (fUqJAhG != (176 - 176)) {
        ut8IimJ[ZoqOK8A5S4][jYBSzJ4][tKTj7z] = fUqJAhG;
        return fUqJAhG;
    }
    else {
        ut8IimJ[ZoqOK8A5S4][jYBSzJ4][tKTj7z] = -1;
        return (870 - 870);
    }
}

int main () {
    int NiXkpl4HD;
    int SKOLo8BtYu6;
    int NKXble;
    memset (ut8IimJ, (198 - 198), sizeof (ut8IimJ));
    cin >> ut8IimJ[(144 - 139)][(550 - 545)][(256 - 256)] >> NiXkpl4HD;
    {
        SKOLo8BtYu6 = 1;
        while (SKOLo8BtYu6 <= (472 - 463)) {
            cout << VQ3Cipv (SKOLo8BtYu6, 1, NiXkpl4HD);
            {
                NKXble = (578 - 576);
                while (NKXble <= (761 - 752)) {
                    cout << ' ' << VQ3Cipv (SKOLo8BtYu6, NKXble, NiXkpl4HD);
                    NKXble = NKXble +1;
                }
            }
            cout << endl;
            SKOLo8BtYu6 = SKOLo8BtYu6 +1;
        }
    }
    return (919 - 919);
}

