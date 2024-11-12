int main () {
    int OyvZa18 [(1169 - 869)], VTyd6ILjQN, HvNePanh, geXdvFUY, kIM7q1umEdQK, rsjhU71G;
    char qmF1kLiCP;
    int bxp7AQ = -(775 - 774);
    int xAebZ5wHO = -1;
    for (VTyd6ILjQN = 0; VTyd6ILjQN < 300; VTyd6ILjQN++) {
        scanf ("%d%c", &OyvZa18[VTyd6ILjQN], &qmF1kLiCP);
        if (!('\n' != qmF1kLiCP)) {
            geXdvFUY = VTyd6ILjQN;
            break;
        }
    }
    for (VTyd6ILjQN = 0; geXdvFUY >= VTyd6ILjQN; VTyd6ILjQN++) {
        if (OyvZa18[VTyd6ILjQN] >= bxp7AQ)
            bxp7AQ = OyvZa18[VTyd6ILjQN];
    }
    for (HvNePanh = 0; geXdvFUY >= HvNePanh; HvNePanh++) {
        if (OyvZa18[HvNePanh] < bxp7AQ && OyvZa18[HvNePanh] >= xAebZ5wHO)
            xAebZ5wHO = OyvZa18[HvNePanh];
    }
    if (xAebZ5wHO == -1)
        ;
    else
        printf ("%d", xAebZ5wHO);
    return 0;
}

