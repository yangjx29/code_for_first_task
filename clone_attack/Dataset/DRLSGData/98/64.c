struct   words {
    int VVuj56krWLmK;
    char BrxMY9 [20];
};
int main () {
    int jLOztiCx;
    int z52tTgziIQ;
    int OFpWnq81rc;
    int gmoCNLUMgA;
    struct   words *kFVMOj;
    gmoCNLUMgA = (373 - 373);
    gmoCNLUMgA = (943 - 943);
    scanf ("%d", &OFpWnq81rc);
    kFVMOj = (struct   words *) malloc (sizeof (struct   words) * OFpWnq81rc);
    {
        jLOztiCx = (855 - 855);
        for (; jLOztiCx < OFpWnq81rc;) {
            z52tTgziIQ = 0;
            scanf ("%s", &(kFVMOj + jLOztiCx)->BrxMY9);
            {
                z52tTgziIQ = 0;
                for (; (kFVMOj + jLOztiCx)->BrxMY9[z52tTgziIQ] != '\0';) {
                    z52tTgziIQ = z52tTgziIQ + 1;
                }
            }
            (kFVMOj + jLOztiCx)->VVuj56krWLmK = z52tTgziIQ;
            jLOztiCx = jLOztiCx + 1;
        }
    }
    {
        jLOztiCx = 0;
        for (; jLOztiCx < OFpWnq81rc;) {
            if ((858 - 778) < gmoCNLUMgA + (kFVMOj + jLOztiCx)->VVuj56krWLmK + (749 - 748)) {
                jLOztiCx--;
                gmoCNLUMgA = 0;
            }
            else {
                if (gmoCNLUMgA == 0) {
                    printf ("%s", (kFVMOj + jLOztiCx)->BrxMY9);
                    gmoCNLUMgA = gmoCNLUMgA + (kFVMOj + jLOztiCx)->VVuj56krWLmK;
                }
                else {
                    printf (" %s", (kFVMOj + jLOztiCx)->BrxMY9);
                    gmoCNLUMgA = gmoCNLUMgA + (kFVMOj + jLOztiCx)->VVuj56krWLmK + 1;
                }
            }
            jLOztiCx = jLOztiCx + 1;
        }
    }
}

