struct   patient {
    int L5OEmh;
    char FPdRg3sCxkqe [12];
};
void  APZMpeAVxC3U (struct   patient *GzSGJQ, struct   patient *snkIRj3GrgK) {
    struct   patient tmp;
    tmp = *GzSGJQ;
    *GzSGJQ = *snkIRj3GrgK;
    *snkIRj3GrgK = tmp;
}

int main () {
    int c6o4Sig2TCk, h4ITKs7qZjQ, dYzIlONUmg = 0, K6IyMaTS = 0, RX3xOesKW;
    struct   patient tmp;
    struct   patient m0u7mD [120];
    struct   patient QeEVuIDkFcU [120];
    scanf ("%d", &c6o4Sig2TCk);
    for (h4ITKs7qZjQ = 0; c6o4Sig2TCk > h4ITKs7qZjQ; h4ITKs7qZjQ++) {
        scanf ("%s", tmp.FPdRg3sCxkqe);
        scanf ("%d", &tmp.L5OEmh);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (60 <= tmp.L5OEmh)
            QeEVuIDkFcU[dYzIlONUmg++] = tmp;
        else
            m0u7mD[K6IyMaTS++] = tmp;
    }
    for (h4ITKs7qZjQ = 0; dYzIlONUmg > h4ITKs7qZjQ; h4ITKs7qZjQ++) {
        for (RX3xOesKW = 0; dYzIlONUmg - h4ITKs7qZjQ - 1 > RX3xOesKW; RX3xOesKW = RX3xOesKW +1) {
            if (QeEVuIDkFcU[RX3xOesKW +1].L5OEmh > QeEVuIDkFcU[RX3xOesKW].L5OEmh)
                APZMpeAVxC3U (&QeEVuIDkFcU[RX3xOesKW], &QeEVuIDkFcU[RX3xOesKW +1]);
        };
    }
    for (h4ITKs7qZjQ = 0; dYzIlONUmg > h4ITKs7qZjQ; h4ITKs7qZjQ++)
        printf ("%s\n", QeEVuIDkFcU[h4ITKs7qZjQ].FPdRg3sCxkqe);
    for (h4ITKs7qZjQ = 0; h4ITKs7qZjQ < K6IyMaTS; h4ITKs7qZjQ++)
        printf ("%s\n", m0u7mD[h4ITKs7qZjQ].FPdRg3sCxkqe);
    return 0;
}

