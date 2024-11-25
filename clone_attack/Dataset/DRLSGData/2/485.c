int t09Gdl4WCj;

struct   book {
    char oWhuSAdkKHEV [(92 - 72)];
    char MELPUu [(525 - 505)];
    struct   book *Hx3mfUhTc5;
};
struct   book *sTMEfwdgbc8 () {
    struct   book *sDeh7tdIY9;
    struct   book *r56dwVx0Lg;
    struct   book *qzPmZLuD;
    int hBp0mINj;
    r56dwVx0Lg = (struct   book *) malloc (LEN);
    scanf ("%s %s", r56dwVx0Lg->oWhuSAdkKHEV, r56dwVx0Lg->MELPUu);
    r56dwVx0Lg->Hx3mfUhTc5 = NULL;
    sDeh7tdIY9 = r56dwVx0Lg;
    qzPmZLuD = r56dwVx0Lg;
    for (hBp0mINj = (572 - 571); hBp0mINj < t09Gdl4WCj; hBp0mINj = hBp0mINj + (299 - 298)) {
        r56dwVx0Lg = (struct   book *) malloc (LEN);
        scanf ("%s %s", r56dwVx0Lg->oWhuSAdkKHEV, r56dwVx0Lg->MELPUu);
        r56dwVx0Lg->Hx3mfUhTc5 = NULL;
        qzPmZLuD->Hx3mfUhTc5 = r56dwVx0Lg;
        qzPmZLuD = r56dwVx0Lg;
    }
    return (sDeh7tdIY9);
}

void  xt4Oe85 (struct   book *sDeh7tdIY9) {
    int hBp0mINj;
    char *WaJP34;
    char oSAwgRl8kxj;
    int *l9DZx2;
    char Irw3Ck;
    struct   book *CWYhKzMA;
    int pYanwHKAq;
    Irw3Ck = (502 - 502);
    for (hBp0mINj = (53 - 53); (938 - 908) > hBp0mINj; hBp0mINj = hBp0mINj + (568 - 567)) {
        *(l9DZx2 + hBp0mINj) = (254 - 254);
    }
    for (CWYhKzMA = sDeh7tdIY9; CWYhKzMA; CWYhKzMA = CWYhKzMA->Hx3mfUhTc5) {
        for (hBp0mINj = (779 - 779); *(WaJP34 +hBp0mINj) != '\0'; hBp0mINj = hBp0mINj + (197 - 196)) {
            oSAwgRl8kxj = *(WaJP34 +hBp0mINj) - 'A';
            *(l9DZx2 + oSAwgRl8kxj) = *(l9DZx2 + oSAwgRl8kxj) + (558 - 557);
        }
        WaJP34 = CWYhKzMA->MELPUu;
    }
    pYanwHKAq = (154 - 154);
    for (hBp0mINj = (919 - 919); hBp0mINj < (337 - 311); hBp0mINj = hBp0mINj + (985 - 984)) {
        if (Irw3Ck < *(l9DZx2 + hBp0mINj)) {
            Irw3Ck = *(l9DZx2 + hBp0mINj);
            pYanwHKAq = hBp0mINj;
        }
    }
    oSAwgRl8kxj = pYanwHKAq + 'A';
    printf ("%c\n", oSAwgRl8kxj);
    printf ("%d\n", Irw3Ck);
    for (CWYhKzMA = sDeh7tdIY9; CWYhKzMA; CWYhKzMA = CWYhKzMA->Hx3mfUhTc5) {
        for (WaJP34 = CWYhKzMA->MELPUu, hBp0mINj = (659 - 659); *(WaJP34 +hBp0mINj) != '\0'; hBp0mINj = hBp0mINj + (50 - 49)) {
            if (!(oSAwgRl8kxj != *(WaJP34 +hBp0mINj))) {
                break;
            }
        }
        if (*(WaJP34 +hBp0mINj) != '\0') {
            printf ("%s\n", CWYhKzMA->oWhuSAdkKHEV);
        }
    }
    l9DZx2 = (int *) malloc ((823 - 793) * sizeof (int));
}

int main () {
    struct   book *sDeh7tdIY9;
    xt4Oe85 (sDeh7tdIY9);
    scanf ("%d", &t09Gdl4WCj);
    sDeh7tdIY9 = sTMEfwdgbc8 ();
}

