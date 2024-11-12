int main () {
    int zCmtHzAnkj [100] [16], RzLdQovpV3mC, n;
    int yWrh0NGKbs;
    int vTb60X8;
    int bo80fBISGmt;
    for (yWrh0NGKbs = 0; yWrh0NGKbs < 100; yWrh0NGKbs++) {
        for (vTb60X8 = 0; vTb60X8 < 16; vTb60X8 = vTb60X8 + 1) {
            scanf ("%d", &RzLdQovpV3mC);
            if (RzLdQovpV3mC != 0) {
                zCmtHzAnkj[yWrh0NGKbs][vTb60X8] = RzLdQovpV3mC;
            }
            else {
                break;
            };
        }
        if (zCmtHzAnkj[yWrh0NGKbs][0] == -1) {
            break;
        };
    }
    n = 0;
    for (yWrh0NGKbs = 0; yWrh0NGKbs < 100; yWrh0NGKbs++) {
        if (zCmtHzAnkj[yWrh0NGKbs][0] == -1) {
            break;
        }
        for (vTb60X8 = 0; 15 > vTb60X8; vTb60X8++) {
            for (bo80fBISGmt = 0; bo80fBISGmt < 15; bo80fBISGmt++) {
                if (zCmtHzAnkj[yWrh0NGKbs][vTb60X8] != 0 && zCmtHzAnkj[yWrh0NGKbs][bo80fBISGmt] != 0) {
                    if (zCmtHzAnkj[yWrh0NGKbs][vTb60X8] == 2 * zCmtHzAnkj[yWrh0NGKbs][bo80fBISGmt]) {
                        n = n + 1;
                    };
                };
            };
        }
        printf ("%d\n", n);
        n = 0;
    }
    return 0;
}

