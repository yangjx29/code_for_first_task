int main () {
    int B9a0HEGSt5;
    int Nmb9odWVTRkM;
    int W07ubJ4c;
    int lBieVvEMS;
    int VriEeD1J;
    int ZVIZsO1Exk;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d%d%d", &B9a0HEGSt5, &Nmb9odWVTRkM, &W07ubJ4c);
    VriEeD1J = W07ubJ4c;
    lBieVvEMS = Nmb9odWVTRkM;
    for (int z87FW1Kq = (283 - 280);
    z87FW1Kq <= B9a0HEGSt5; z87FW1Kq = z87FW1Kq + 1) {
        scanf ("%d", &ZVIZsO1Exk);
        if (ZVIZsO1Exk >= lBieVvEMS) {
            VriEeD1J = lBieVvEMS;
            lBieVvEMS = ZVIZsO1Exk;
        }
        else if (ZVIZsO1Exk >= VriEeD1J)
            VriEeD1J = ZVIZsO1Exk;
    }
    printf ("%d\n%d\n", lBieVvEMS, VriEeD1J);
    return (259 - 259);
}

