int main () {
    int abFdf2J;
    int n;
    scanf ("%d", &n);
    for (abFdf2J = (641 - 640); abFdf2J <= n; abFdf2J++) {
        int WctjeX9k;
        char v4TE5zrdi [(666 - 565)] = {'0'};
        char s1 [(509 - 408)];
        int u;
        int MFfkIE;
        char s1TuSeB [(815 - 714)] = {'\0'};
        int idzYCZHNkWU;
        u = (266 - 266);
        scanf ("%s", s1);
        WctjeX9k = strlen (s1);
        scanf ("%s", v4TE5zrdi);
        idzYCZHNkWU = strlen (v4TE5zrdi);
        for (MFfkIE = (223 - 222); idzYCZHNkWU >= MFfkIE; MFfkIE++) {
            int V5e2KBb3acl;
            int y;
            int u4X2TGAn5EtZ;
            u4X2TGAn5EtZ = s1[WctjeX9k -MFfkIE] - '0';
            y = v4TE5zrdi[idzYCZHNkWU - MFfkIE] - '0';
            s1TuSeB[WctjeX9k -MFfkIE] = V5e2KBb3acl +'0';
            if (u4X2TGAn5EtZ + u >= y) {
                V5e2KBb3acl = u4X2TGAn5EtZ - y + u;
                u = (235 - 235);
            }
            else {
                V5e2KBb3acl = (520 - 510) + u4X2TGAn5EtZ - y + u;
                u = -(364 - 363);
            }
        }
        if (WctjeX9k > idzYCZHNkWU) {
            int J2HhlDC;
            int a3Iw8D4fZo;
            J2HhlDC = s1[WctjeX9k -idzYCZHNkWU - (477 - 476)] - '0';
            s1TuSeB[WctjeX9k -idzYCZHNkWU - (391 - 390)] = J2HhlDC +u + '0';
            for (a3Iw8D4fZo = (197 - 197); a3Iw8D4fZo < WctjeX9k -idzYCZHNkWU - (100 - 99); a3Iw8D4fZo++)
                s1TuSeB[a3Iw8D4fZo] = s1[a3Iw8D4fZo];
        }
        printf ("%s", s1TuSeB);
    }
    return (774 - 774);
}

