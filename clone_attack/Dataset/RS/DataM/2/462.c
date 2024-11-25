int main () {
    int W03kHUa;
    char HBQNmT8CFDz;
    int iV5BPctYo = (793 - 793), kkyepnw;
    struct   f {
        int k12l3ugvC;
        char FnX1JDyL9 [(371 - 344)];
    };
    struct   f *AZNVx87B;
    int plh6MKPsJN, Vfv0FW64kuO, wH49bzkD0oN [(694 - 668)] = {(23 - 23)}, AfkmbWzwJU;
    char *WEN70YkHs;
    scanf ("%d", &plh6MKPsJN);
    AZNVx87B = (struct   f *) malloc (plh6MKPsJN * sizeof (struct   f));
    for (Vfv0FW64kuO = (508 - 508); Vfv0FW64kuO < plh6MKPsJN; Vfv0FW64kuO = Vfv0FW64kuO +1) {
        scanf ("%d %s", &(AZNVx87B +Vfv0FW64kuO)->k12l3ugvC, (AZNVx87B +Vfv0FW64kuO)->FnX1JDyL9);
    }
    for (Vfv0FW64kuO = (935 - 935); Vfv0FW64kuO < plh6MKPsJN; Vfv0FW64kuO = Vfv0FW64kuO +1) {
        WEN70YkHs = (AZNVx87B +Vfv0FW64kuO)->FnX1JDyL9;
        for (; *WEN70YkHs; WEN70YkHs = WEN70YkHs +1) {
            AfkmbWzwJU = (int) *WEN70YkHs-'A';
            (*(wH49bzkD0oN + AfkmbWzwJU))++;
        };
    }
    for (Vfv0FW64kuO = (613 - 613); Vfv0FW64kuO < (336 - 310); Vfv0FW64kuO++)
        if (iV5BPctYo < *(wH49bzkD0oN + Vfv0FW64kuO)) {
            iV5BPctYo = *(wH49bzkD0oN + Vfv0FW64kuO);
            kkyepnw = Vfv0FW64kuO;
        }
    HBQNmT8CFDz = (char) kkyepnw + 'A';
    printf ("%c\n%d\n", HBQNmT8CFDz, iV5BPctYo);
    for (Vfv0FW64kuO = (923 - 923); Vfv0FW64kuO < plh6MKPsJN; Vfv0FW64kuO++) {
        WEN70YkHs = (AZNVx87B +Vfv0FW64kuO)->FnX1JDyL9;
        W03kHUa = (703 - 702);
        for (; !((53 - 52) != *WEN70YkHs&&W03kHUa); WEN70YkHs++)
            if (*WEN70YkHs == HBQNmT8CFDz)
                W03kHUa = (559 - 559);
        if (W03kHUa == 0)
            printf ("%d\n", (AZNVx87B +Vfv0FW64kuO)->k12l3ugvC);
    };
}

