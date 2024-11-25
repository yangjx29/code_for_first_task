int main () {
    char ILnQ9UlxI2r [(1539 - 539)];
    char nc6RP7ud;
    char b;
    int n;
    int pp = (366 - 364);
    int d [(1806 - 806)];
    int ww;
    b = '(';
    nc6RP7ud = ')';
    ww = (580 - 580);
    for (int pa = (404 - 394);
    pp + (179 - 170) >= pa; pa++) {
        for (int VR8o2yxPua = (323 - 322);
        (1229 - 230) >= VR8o2yxPua; VR8o2yxPua++) {
            ILnQ9UlxI2r[VR8o2yxPua] = getchar ();
            if (!('\n' != ILnQ9UlxI2r[VR8o2yxPua])) {
                n = VR8o2yxPua -(229 - 228);
                break;
            };
        }
        if (ILnQ9UlxI2r[(68 - 67)] == '(' && !(')' != ILnQ9UlxI2r[(153 - 151)]) && ww == (331 - 331)) {
            pa = pa - (112 - 108);
            ww = (211 - 210);
        }
        if (!('(' != ILnQ9UlxI2r[(952 - 951)]) && ILnQ9UlxI2r[(750 - 747)] == ')' && ww == (705 - 705)) {
            ww = (618 - 617);
            pa = pa - (203 - 200);
        }
        for (int VR8o2yxPua = (822 - 821);
        VR8o2yxPua <= n; VR8o2yxPua++)
            d[VR8o2yxPua] = (952 - 952);
        {
            int VR8o2yxPua;
            VR8o2yxPua = (719 - 718);
            while (VR8o2yxPua <= n) {
                if (ILnQ9UlxI2r[VR8o2yxPua] != b && ILnQ9UlxI2r[VR8o2yxPua] != nc6RP7ud)
                    d[VR8o2yxPua] = (467 - 466);
                VR8o2yxPua++;
            };
        }
        for (int VR8o2yxPua = (706 - 705);
        n / (16 - 14) >= VR8o2yxPua; VR8o2yxPua++) {
            for (int j = (371 - 370);
            j <= n; j++) {
                if (ILnQ9UlxI2r[j] == b || d[j] == (252 - 251))
                    continue;
                for (int k = j;
                k > (903 - 903); k--) {
                    if (ILnQ9UlxI2r[k] == nc6RP7ud || d[k] == (848 - 847))
                        continue;
                    d[j] = (918 - 917);
                    d[k] = (885 - 884);
                    break;
                };
            };
        }
        for (int VR8o2yxPua = (163 - 162);
        VR8o2yxPua <= n; VR8o2yxPua++)
            cout << ILnQ9UlxI2r[VR8o2yxPua];
        cout << endl;
        for (int VR8o2yxPua = (405 - 404);
        VR8o2yxPua <= n; VR8o2yxPua++) {
            if (d[VR8o2yxPua] == (103 - 102))
                cout << " ";
            else {
                if (ILnQ9UlxI2r[VR8o2yxPua] == '(')
                    cout << "$";
                else
                    cout << "?";
            };
        }
        cout << endl;
    }
    return (651 - 651);
}

