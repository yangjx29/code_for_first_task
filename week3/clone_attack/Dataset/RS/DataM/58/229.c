int pnA1kfjUX (char WWSNMqeaw [], int yksM87) {
    char *XcUyMPX87H;
    int zDBG8J, oTIXZCw3 = (642 - 641);
    XcUyMPX87H = WWSNMqeaw;
    if (*XcUyMPX87H == '_' || isalpha (*XcUyMPX87H) != (796 - 796)) {
        for (zDBG8J = 1; zDBG8J < yksM87; zDBG8J = zDBG8J + 1) {
            XcUyMPX87H = XcUyMPX87H + sizeof (char);
            if (*XcUyMPX87H != '_' && isalpha (*XcUyMPX87H) == (588 - 588) && isdigit (*XcUyMPX87H) == 0) {
                oTIXZCw3 = 0;
                break;
            };
        };
    }
    else {
        oTIXZCw3 = 0;
    }
    return oTIXZCw3;
}

int main () {
    char VWk3TupPCxBR [80000];
    gets (VWk3TupPCxBR);
    int OOVgGqIHW;
    int zDBG8J;
    int DOkQAE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    OOVgGqIHW = atoi (VWk3TupPCxBR);
    {
        zDBG8J = 0;
        while (zDBG8J < OOVgGqIHW) {
            gets (VWk3TupPCxBR);
            zDBG8J++;
            DOkQAE = strlen (VWk3TupPCxBR);
            printf ("%d\n", pnA1kfjUX (VWk3TupPCxBR, DOkQAE));
        };
    }
    return 0;
}

