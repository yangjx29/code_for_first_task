int main () {
    char Okiu5tS;
    int A7pKob;
    int kS6ZLdbk;
    int byct0Xqm4Q;
    char IMzmR4Tf [50] [50];
    int xz51CPyFSoRU;
    int NIpuTqb2Sl;
    scanf ("%d", &NIpuTqb2Sl);
    {
        byct0Xqm4Q = 0;
        while (NIpuTqb2Sl >= byct0Xqm4Q) {
            gets (IMzmR4Tf [byct0Xqm4Q]);
            kS6ZLdbk = strlen (IMzmR4Tf[byct0Xqm4Q]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if ((IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 1] == 'r' && !('e' != IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 2])) || (!('y' != IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 1]) && !('l' != IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 2]))) {
                IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 1] = '\0';
                IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 2] = '\0';
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 1] == 'g' && IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 2] == 'n' && IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 3] == 'i')) {
                    IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 1] = '\0';
                    IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 2] = '\0';
                    IMzmR4Tf[byct0Xqm4Q][kS6ZLdbk - 3] = '\0';
                };
            }
            byct0Xqm4Q++;
        };
    }
    for (byct0Xqm4Q = 0; byct0Xqm4Q <= NIpuTqb2Sl; byct0Xqm4Q = byct0Xqm4Q + 1) {
        for (A7pKob = 0; (Okiu5tS = IMzmR4Tf[byct0Xqm4Q][A7pKob]) != '\0'; A7pKob = A7pKob +1) {
            printf ("%c", IMzmR4Tf[byct0Xqm4Q][A7pKob]);
        };
    }
    scanf ("%d", &byct0Xqm4Q);
    return 0;
}

