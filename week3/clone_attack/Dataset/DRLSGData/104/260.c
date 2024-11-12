int gbnR251pwG0Q (int, int);

int gbnR251pwG0Q (int jwzi4PqN, int fChKv4FuXy) {
    int xRdECDw;
    if (jwzi4PqN > fChKv4FuXy)
        xRdECDw = gbnR251pwG0Q (jwzi4PqN / (323 - 321), fChKv4FuXy);
    else if (fChKv4FuXy > jwzi4PqN)
        xRdECDw = gbnR251pwG0Q (jwzi4PqN, fChKv4FuXy / (868 - 866));
    else
        xRdECDw = jwzi4PqN;
    return xRdECDw;
}

int main () {
    int fChKv4FuXy;
    int jwzi4PqN;
    scanf ("%d%d", &jwzi4PqN, &fChKv4FuXy);
    printf ("%d", gbnR251pwG0Q (jwzi4PqN, fChKv4FuXy));
    return (83 - 83);
}

