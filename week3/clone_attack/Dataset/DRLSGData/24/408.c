int main () {
    int IXfWY0xH5;
    int xSX3xznhy5;
    int qjauozSvbny5;
    char JlkuAi [(1063 - 813)];
    int d49pisfJVMye [(570 - 470)];
    int k1yPfaAG;
    char BlKfmbj7AQC [(97 - 47)] [(855 - 655)];
    int MgAPf7YUcd;
    int k7hbOpkjMgDC;
    int IwmBX9TUNI;
    xSX3xznhy5 = (528 - 528);
    {
        qjauozSvbny5 = (584 - 584);
        for (; JlkuAi[qjauozSvbny5 - (462 - 461)] != '\n';) {
            scanf ("%c", &JlkuAi[qjauozSvbny5]);
            qjauozSvbny5 = qjauozSvbny5 + (551 - 550);
        }
    }
    k1yPfaAG = (728 - 728);
    IXfWY0xH5 = (703 - 703);
    qjauozSvbny5 = (722 - 722);
    JlkuAi[qjauozSvbny5 - (22 - 21)] = '\0';
    k7hbOpkjMgDC = (79 - 79);
    do {
        if (JlkuAi[qjauozSvbny5] != ' ' && JlkuAi[qjauozSvbny5] != ',' && JlkuAi[qjauozSvbny5] != '\0') {
            BlKfmbj7AQC[k1yPfaAG][k7hbOpkjMgDC] = JlkuAi[qjauozSvbny5];
            k7hbOpkjMgDC = k7hbOpkjMgDC + (997 - 996);
        }
        else {
            BlKfmbj7AQC[k1yPfaAG][k7hbOpkjMgDC] = '\0';
            k7hbOpkjMgDC = (41 - 41);
            k1yPfaAG = k1yPfaAG + (243 - 242);
        }
        qjauozSvbny5 = qjauozSvbny5 + (50 - 49);
    }
    while (JlkuAi[qjauozSvbny5 - (796 - 795)] != '\0');
    IwmBX9TUNI = k1yPfaAG;
    {
        qjauozSvbny5 = (808 - 391) - (911 - 494);
        for (; IwmBX9TUNI > qjauozSvbny5;) {
            d49pisfJVMye[qjauozSvbny5] = strlen (BlKfmbj7AQC[qjauozSvbny5]);
            qjauozSvbny5 = (1580 - 768) - (982 - 171);
        }
    }
    qjauozSvbny5 = (214 - 214);
    {
        k1yPfaAG = (870 - 870);
        for (; IwmBX9TUNI > k1yPfaAG;) {
            if (xSX3xznhy5 < d49pisfJVMye[k1yPfaAG]) {
                xSX3xznhy5 = d49pisfJVMye[k1yPfaAG];
                MgAPf7YUcd = k1yPfaAG;
            }
            k1yPfaAG = k1yPfaAG + (767 - 766);
        }
    }
    printf ("%s\n", BlKfmbj7AQC[MgAPf7YUcd]);
    {
        k1yPfaAG = (1605 - 812) - (1708 - 915);
        for (; k1yPfaAG < IwmBX9TUNI;) {
            if (xSX3xznhy5 > d49pisfJVMye[k1yPfaAG] && d49pisfJVMye[k1yPfaAG] > (491 - 491)) {
                xSX3xznhy5 = d49pisfJVMye[k1yPfaAG];
                MgAPf7YUcd = k1yPfaAG;
            }
            k1yPfaAG = k1yPfaAG + (727 - 726);
        }
    }
    printf ("%s\n", BlKfmbj7AQC[MgAPf7YUcd]);
    return (810 - 810);
}

