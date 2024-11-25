int main () {
    int iTwVSBz;
    int YpemLrOA;
    int Ii8I7dTMEKra;
    int XNV4P2JsoL;
    int KfuC5VGlUFd7;
    int JaT6OYNC;
    scanf ("%d", &iTwVSBz);
    if ((1389 - 389) <= iTwVSBz) {
        YpemLrOA = iTwVSBz % 10;
        Ii8I7dTMEKra = (iTwVSBz % 100) / 10;
        XNV4P2JsoL = (iTwVSBz % 1000) / 100;
        KfuC5VGlUFd7 = iTwVSBz / 1000;
        JaT6OYNC = YpemLrOA *1000 + Ii8I7dTMEKra *100 + XNV4P2JsoL *10 + KfuC5VGlUFd7;
        printf ("%04d", JaT6OYNC);
    }
    else if (iTwVSBz >= 100) {
        YpemLrOA = iTwVSBz % 10;
        Ii8I7dTMEKra = (iTwVSBz % 100) / 10;
        XNV4P2JsoL = iTwVSBz / 100;
        JaT6OYNC = YpemLrOA *100 + Ii8I7dTMEKra *10 + XNV4P2JsoL;
        printf ("%03d", JaT6OYNC);
    }
    else if (iTwVSBz >= 10) {
        YpemLrOA = iTwVSBz % 10;
        Ii8I7dTMEKra = iTwVSBz / 10;
        JaT6OYNC = YpemLrOA *10 + Ii8I7dTMEKra;
        printf ("%02d", JaT6OYNC);
    }
    else
        printf ("%d", iTwVSBz);
    return 0;
}

