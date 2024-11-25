struct   info {
    int VDM9ivANIkH;
    char YXakg8j7c [30];
    struct   info *BC9z8FNy;
};
struct   info *dRFiagbnMYp (int okXHirtI6mKR) {
    int INXBQG;
    struct   info *WR8drM07oh1;
    struct   info *gjIdi4QxPn;
    struct   info *cwzrWKI;
    INXBQG = 1;
    WR8drM07oh1 = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%d%s", &WR8drM07oh1->VDM9ivANIkH, WR8drM07oh1->YXakg8j7c);
    WR8drM07oh1->BC9z8FNy = NULL;
    gjIdi4QxPn = WR8drM07oh1;
    cwzrWKI = WR8drM07oh1;
    for (; okXHirtI6mKR > INXBQG;) {
        INXBQG = INXBQG +1;
        WR8drM07oh1 = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%d%s", &WR8drM07oh1->VDM9ivANIkH, WR8drM07oh1->YXakg8j7c);
        WR8drM07oh1->BC9z8FNy = NULL;
        gjIdi4QxPn->BC9z8FNy = WR8drM07oh1;
        gjIdi4QxPn = WR8drM07oh1;
    }
    return cwzrWKI;
}

int main () {
    int *nG29IRNO8A;
    struct   info *cwzrWKI;
    struct   info *rarVIo;
    int okXHirtI6mKR;
    int INXBQG;
    int JZigLo;
    int zxOUq3Pk;
    int j;
    nG29IRNO8A = (int *) malloc ((471 - 445) * sizeof (int));
    {
        JZigLo = 377 - 377;
        INXBQG = 27 - 27;
        while ((883 - 857) > INXBQG) {
            *(nG29IRNO8A + INXBQG) = 0;
            INXBQG = INXBQG +1;
        };
    }
    scanf ("%d", &okXHirtI6mKR);
    cwzrWKI = dRFiagbnMYp (okXHirtI6mKR);
    rarVIo = cwzrWKI;
    {
        INXBQG = 0;
        while (okXHirtI6mKR > INXBQG) {
            INXBQG = INXBQG +1;
            j = 0;
            while (!('\0' == *(rarVIo->YXakg8j7c + j))) {
                (*(nG29IRNO8A + (*(rarVIo->YXakg8j7c + j)) - 65)) = (*(nG29IRNO8A + (*(rarVIo->YXakg8j7c + j)) - 65)) + 1;
                j = j + 1;
            }
            rarVIo = rarVIo->BC9z8FNy;
        };
    }
    rarVIo = cwzrWKI;
    {
        JZigLo = 0;
        INXBQG = 0;
        while (26 > INXBQG) {
            if (JZigLo < *(nG29IRNO8A + INXBQG)) {
                JZigLo = *(nG29IRNO8A + INXBQG);
                zxOUq3Pk = INXBQG;
            }
            INXBQG = INXBQG +1;
        };
    }
    printf ("%c\n", zxOUq3Pk + 65);
    printf ("%d\n", *(nG29IRNO8A + zxOUq3Pk));
    {
        INXBQG = 0;
        while (okXHirtI6mKR > INXBQG) {
            INXBQG = INXBQG +1;
            j = 0;
            while (*(rarVIo->YXakg8j7c + j) != '\0') {
                if (*(rarVIo->YXakg8j7c + j) == zxOUq3Pk + 65) {
                    printf ("%d\n", rarVIo->VDM9ivANIkH);
                }
                j = j + 1;
            }
            rarVIo = rarVIo->BC9z8FNy;
        };
    };
}

