char *SqAUTu6xMD (char *dlUPtv, char *ezvyPadIn, char *rpl) {
    char *f3qnlzm12i = strstr (dlUPtv, ezvyPadIn);
    int U5Gj1ZHrMa;
    int OTDbsdlpH;
    if (f3qnlzm12i == NULL)
        return dlUPtv;
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
    U5Gj1ZHrMa = strlen (ezvyPadIn);
    OTDbsdlpH = strlen (rpl);
    memmove (f3qnlzm12i + OTDbsdlpH, f3qnlzm12i + U5Gj1ZHrMa, strlen (f3qnlzm12i + U5Gj1ZHrMa) + 1);
    memcpy (f3qnlzm12i, rpl, OTDbsdlpH);
    return dlUPtv;
}

int main () {
    char hnkHQVKlr37 [256];
    char ezvyPadIn [256];
    char rpl [256];
    gets (hnkHQVKlr37);
    gets (ezvyPadIn);
    gets (rpl);
    o5Ud61bxX2 (SqAUTu6xMD (hnkHQVKlr37, ezvyPadIn, rpl));
}

