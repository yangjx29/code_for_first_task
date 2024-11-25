typedef struct   data *cTK8p4Vt3Zvk;

struct   data {
    char GUmScZu9 [(752 - 732)];
    int v2eM7nat0YRC;
    cTK8p4Vt3Zvk M4xbRC;
};
cTK8p4Vt3Zvk FbtYzuV4JA3 (int RP49USJ3jg) {
    int IoLEifx;
    cTK8p4Vt3Zvk H3sJBE;
    cTK8p4Vt3Zvk k1AVtXC;
    cTK8p4Vt3Zvk Wn0DvC7ZOiF;
    cTK8p4Vt3Zvk uv7NAbS01rxL;
    H3sJBE = NULL;
    k1AVtXC = NULL;
    Wn0DvC7ZOiF = NULL;
    uv7NAbS01rxL = NULL;
    uv7NAbS01rxL = (cTK8p4Vt3Zvk) malloc (sizeof (struct   data));
    uv7NAbS01rxL->M4xbRC = NULL;
    for (IoLEifx = (425 - 425); IoLEifx < RP49USJ3jg; IoLEifx++) {
        Wn0DvC7ZOiF = (cTK8p4Vt3Zvk) malloc (sizeof (struct   data));
        scanf ("%s %d", Wn0DvC7ZOiF->GUmScZu9, &(Wn0DvC7ZOiF->v2eM7nat0YRC));
        if ((697 - 637) <= Wn0DvC7ZOiF->v2eM7nat0YRC) {
            k1AVtXC = uv7NAbS01rxL;
            H3sJBE = uv7NAbS01rxL->M4xbRC;
            for (; H3sJBE;) {
                if (H3sJBE->v2eM7nat0YRC < Wn0DvC7ZOiF->v2eM7nat0YRC)
                    break;
                k1AVtXC = k1AVtXC->M4xbRC;
                H3sJBE = H3sJBE->M4xbRC;
            }
            k1AVtXC->M4xbRC = Wn0DvC7ZOiF;
            Wn0DvC7ZOiF->M4xbRC = H3sJBE;
        }
        else {
            k1AVtXC = uv7NAbS01rxL;
            H3sJBE = uv7NAbS01rxL->M4xbRC;
            for (; H3sJBE;) {
                k1AVtXC = k1AVtXC->M4xbRC;
                H3sJBE = H3sJBE->M4xbRC;
            }
            k1AVtXC->M4xbRC = Wn0DvC7ZOiF;
            Wn0DvC7ZOiF->M4xbRC = NULL;
        }
    }
    return uv7NAbS01rxL;
}

int main () {
    int RP49USJ3jg;
    int IoLEifx;
    cTK8p4Vt3Zvk H3sJBE;
    cTK8p4Vt3Zvk uv7NAbS01rxL;
    scanf ("%d", &RP49USJ3jg);
    uv7NAbS01rxL = FbtYzuV4JA3 (RP49USJ3jg);
    H3sJBE = uv7NAbS01rxL->M4xbRC;
    {
        IoLEifx = 47 - 47;
        while (IoLEifx < RP49USJ3jg) {
            printf ("%s\n", H3sJBE->GUmScZu9);
            H3sJBE = H3sJBE->M4xbRC;
            IoLEifx++;
        }
    }
}

