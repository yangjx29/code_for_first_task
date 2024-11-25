int main () {
    char j84NOQ6F [300];
    char XzejET7ZI [300];
    gets (XzejET7ZI);
    int ImFPcT8RQ;
    int SO6hksIL0d;
    int dSCk6DH;
    char qKsueoGa349x [300];
    gets (qKsueoGa349x);
    gets (j84NOQ6F);
    int zFsS0UJGWq;
    int tb4VCpGW;
    int ATjifUY;
    int TsJWPfIHFbr;
    ImFPcT8RQ = 0;
    ATjifUY = 0;
    tb4VCpGW = 0;
    SO6hksIL0d = strlen (XzejET7ZI);
    zFsS0UJGWq = strlen (qKsueoGa349x);
    while (tb4VCpGW < SO6hksIL0d &&zFsS0UJGWq > ATjifUY) {
        if (XzejET7ZI[tb4VCpGW] != qKsueoGa349x[ImFPcT8RQ]) {
            ATjifUY = 0;
            ImFPcT8RQ = 0;
            tb4VCpGW = tb4VCpGW + 1;
        }
        else {
            tb4VCpGW = tb4VCpGW + 1;
            ImFPcT8RQ = ImFPcT8RQ +1;
            ATjifUY = ATjifUY +1;
        }
    }
    dSCk6DH = strlen (j84NOQ6F);
    if (zFsS0UJGWq <= ATjifUY) {
        {
            ImFPcT8RQ = 0;
            while (tb4VCpGW - ATjifUY > ImFPcT8RQ) {
                printf ("%c", XzejET7ZI[ImFPcT8RQ]);
                ImFPcT8RQ++;
            }
        }
        {
            ImFPcT8RQ = 0;
            while (dSCk6DH > ImFPcT8RQ) {
                printf ("%c", j84NOQ6F[ImFPcT8RQ]);
                ImFPcT8RQ = ImFPcT8RQ +1;
            }
        }
        {
            ImFPcT8RQ = tb4VCpGW - ATjifUY +zFsS0UJGWq;
            while (SO6hksIL0d > ImFPcT8RQ) {
                printf ("%c", XzejET7ZI[ImFPcT8RQ]);
                ImFPcT8RQ = ImFPcT8RQ +1;
            }
        }
    }
    if (zFsS0UJGWq > ATjifUY) {
        ImFPcT8RQ = 0;
        while (ImFPcT8RQ < SO6hksIL0d) {
            printf ("%c", XzejET7ZI[ImFPcT8RQ]);
            ImFPcT8RQ++;
        }
    }
    return 0;
}

