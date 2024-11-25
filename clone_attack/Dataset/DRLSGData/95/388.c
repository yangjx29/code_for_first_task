int main () {
    char zXwa6E [80], s2 [80];
    gets (zXwa6E);
    int ybx7oAztsch2, IwYCHKdsil, yaNZHipE, FHWd4rhElqRi, qIcE7TJ4bUs5;
    gets (s2);
    for (ybx7oAztsch2 = 0, IwYCHKdsil = 0; zXwa6E[ybx7oAztsch2] != '\0'; ybx7oAztsch2 = ybx7oAztsch2 + 1) {
        FHWd4rhElqRi = ybx7oAztsch2;
        if (!(s2[ybx7oAztsch2] != zXwa6E[ybx7oAztsch2]) || !(32 != zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2]) || !(-32 != zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2]))
            IwYCHKdsil++, qIcE7TJ4bUs5 = IwYCHKdsil;
        if ((zXwa6E[ybx7oAztsch2] > s2[ybx7oAztsch2] && 32 < zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2]) || (s2[ybx7oAztsch2] > zXwa6E[ybx7oAztsch2] && -32 < zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2])) {
            break;
        }
        if ((zXwa6E[ybx7oAztsch2] > s2[ybx7oAztsch2] && 32 > zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2]) || (zXwa6E[ybx7oAztsch2] < s2[ybx7oAztsch2] && -32 > zXwa6E[ybx7oAztsch2] - s2[ybx7oAztsch2])) {
            break;
        }
    }
    if (FHWd4rhElqRi == qIcE7TJ4bUs5 - 1)
        ;
    return 0;
}

