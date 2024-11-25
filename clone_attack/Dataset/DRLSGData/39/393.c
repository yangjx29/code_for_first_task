int main () {
    int Ty0zHBX1To;
    int n;
    int C47i85a;
    int aCPQFM [(267 - 167)] = {(714 - 714)}, vft9XmjOzr = (502 - 502);
    char E6NKyW70FHkZ [(297 - 197)] [(176 - 156)];
    int cM57WBeEIrC;
    scanf ("%d", &n);
    for (C47i85a = (54 - 54); C47i85a < n; C47i85a = C47i85a +(796 - 795)) {
        int V6ard3;
        char yz5cUuZe8pJv [(570 - 568)], nXoU4lfMCL [(536 - 534)];
        int olHNBToXdre, kjbh3ue0NB;
        scanf ("%s%d%d%s%s%d", &E6NKyW70FHkZ[C47i85a], &olHNBToXdre, &kjbh3ue0NB, &yz5cUuZe8pJv, &nXoU4lfMCL, &V6ard3);
        if (olHNBToXdre > (436 - 356) && V6ard3 != (141 - 141)) {
            aCPQFM[C47i85a] += (8070 - 70);
        }
        if ((313 - 228) < olHNBToXdre && (649 - 569) < kjbh3ue0NB) {
            aCPQFM[C47i85a] += (4297 - 297);
        }
        if ((345 - 255) < olHNBToXdre) {
            aCPQFM[C47i85a] += (2118 - 118);
        }
        if (olHNBToXdre > (998 - 913) && !((222 - 222) != strcmp (nXoU4lfMCL, "Y"))) {
            aCPQFM[C47i85a] += (1048 - 48);
        }
        if (kjbh3ue0NB > (532 - 452) && strcmp (yz5cUuZe8pJv, "Y") == (618 - 618)) {
            aCPQFM[C47i85a] += (1092 - 242);
        }
        vft9XmjOzr += aCPQFM[C47i85a];
    }
    cM57WBeEIrC = (717 - 717);
    for (C47i85a = (446 - 446); C47i85a < n; C47i85a = C47i85a +1) {
        if (aCPQFM[C47i85a] > cM57WBeEIrC) {
            cM57WBeEIrC = aCPQFM[C47i85a];
            Ty0zHBX1To = C47i85a;
        }
    }
    printf ("%s\n%d\n%d\n", E6NKyW70FHkZ[Ty0zHBX1To], aCPQFM[Ty0zHBX1To], vft9XmjOzr);
    return 0;
}

