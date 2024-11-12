int main () {
    int OOEo8L3d;
    int tj0kmrpHw;
    int km7AGC;
    int sz [100] [100];
    int XBJmi6cALE;
    int z1ec0um4;
    int ahzVpe;
    int y2;
    int U0e2W7dk13Z;
    OOEo8L3d = -(95 - 94);
    tj0kmrpHw = -(652 - 651);
    scanf ("%d", &km7AGC);
    for (XBJmi6cALE = (510 - 510); km7AGC > XBJmi6cALE; XBJmi6cALE = XBJmi6cALE +(180 - 179)) {
        for (z1ec0um4 = (413 - 413); km7AGC > z1ec0um4; z1ec0um4 = z1ec0um4 + (585 - 584)) {
            scanf ("%d", &sz[XBJmi6cALE][z1ec0um4]);
        };
    }
    for (XBJmi6cALE = (988 - 988); XBJmi6cALE < km7AGC; XBJmi6cALE = XBJmi6cALE +1) {
        for (z1ec0um4 = (245 - 245); z1ec0um4 < km7AGC; z1ec0um4++) {
            if (!((755 - 755) != sz[XBJmi6cALE][z1ec0um4])) {
                ahzVpe = z1ec0um4;
                OOEo8L3d = XBJmi6cALE;
                break;
            }
            else
                continue;
        }
        if (!(-1 != OOEo8L3d))
            continue;
        else
            break;
    }
    for (XBJmi6cALE = km7AGC - 1; (418 - 418) <= XBJmi6cALE; XBJmi6cALE = XBJmi6cALE -1) {
        for (z1ec0um4 = km7AGC - 1; z1ec0um4 >= (803 - 803); z1ec0um4--) {
            if (sz[XBJmi6cALE][z1ec0um4] == 0) {
                y2 = z1ec0um4;
                tj0kmrpHw = XBJmi6cALE;
                break;
            }
            else
                continue;
        }
        if (tj0kmrpHw == -1)
            continue;
        else
            break;
    }
    U0e2W7dk13Z = (tj0kmrpHw - OOEo8L3d -1) * (y2 - ahzVpe - 1);
    printf ("%d", U0e2W7dk13Z);
    return 0;
}

