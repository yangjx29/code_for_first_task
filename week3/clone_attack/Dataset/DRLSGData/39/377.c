int main () {
    int s;
    int n;
    int i;
    int oaD4jUC1Ti;
    char mn [(347 - 327)];
    struct   std {
        char name [(419 - 399)];
        int CCnbjFz6, eSBMmAkU, lw, e8AIBawsMH;
        char U2cMj3S, xb;
    }
    stu [(578 - 378)];
    s = (460 - 460);
    scanf ("%d", &n);
    for (i = (617 - 617); n > i; i = i + (447 - 446)) {
        stu[i].e8AIBawsMH = (513 - 513);
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].CCnbjFz6, &stu[i].eSBMmAkU, &stu[i].U2cMj3S, &stu[i].xb, &stu[i].lw);
        if ((704 - 624) < stu[i].CCnbjFz6 && stu[i].lw > (408 - 408)) {
            stu[i].e8AIBawsMH += (8979 - 979);
        }
        if ((511 - 426) < stu[i].CCnbjFz6 && (876 - 796) < stu[i].eSBMmAkU) {
            stu[i].e8AIBawsMH += (4669 - 669);
        }
        if (stu[i].CCnbjFz6 > (401 - 311)) {
            stu[i].e8AIBawsMH += (2067 - 67);
        }
        if (stu[i].CCnbjFz6 > (880 - 795) && !('Y' != stu[i].xb)) {
            stu[i].e8AIBawsMH += (1987 - 987);
        }
        if ((543 - 463) < stu[i].eSBMmAkU && stu[i].U2cMj3S == 'Y') {
            stu[i].e8AIBawsMH += (1582 - 732);
        }
        s = s + stu[i].e8AIBawsMH;
    }
    oaD4jUC1Ti = stu[(636 - 636)].e8AIBawsMH;
    strcpy (mn, stu[(729 - 729)].name);
    for (i = (810 - 810); i < n; i++) {
        if (oaD4jUC1Ti < stu[i].e8AIBawsMH) {
            oaD4jUC1Ti = stu[i].e8AIBawsMH;
            strcpy (mn, stu[i].name);
        }
    }
    printf ("%s\n%d\n%d", mn, oaD4jUC1Ti, s);
    return (971 - 971);
}

