int Omtue9vB (int gsJvifkoxpj, int aYvyHLC, int Rfy5eZTknU) {
    return (gsJvifkoxpj * 3600 + aYvyHLC * (336 - 276) + Rfy5eZTknU);
}

main () {
    int gsJvifkoxpj;
    int aYvyHLC;
    int Rfy5eZTknU;
    int yOtswQo;
    int l0i7kH;
    int wU8DuxkW5g;
    int UenFt01EY;
    {
        for (; true;) {
            scanf ("%d%d%d%d%d%d", &gsJvifkoxpj, &aYvyHLC, &Rfy5eZTknU, &yOtswQo, &l0i7kH, &wU8DuxkW5g);
            if (gsJvifkoxpj == 0)
                break;
            else {
                UenFt01EY = Omtue9vB (yOtswQo, l0i7kH, wU8DuxkW5g) + 3600 * 12 - Omtue9vB (gsJvifkoxpj, aYvyHLC, Rfy5eZTknU);
                printf ("%d\n", UenFt01EY);
            }
        }
    }
    return 0;
}

