int main () {
    int tad4FfPA [(1489 - 489)] = {(405 - 405)};
    int rZgTBhl;
    int aEfeGLyoz1Q;
    int n;
    int JYCFEbVgsIHU;
    int p;
    char d [(1560 - 560)] [(803 - 703)];
    char JhYVRX [(100561 - 561)];
    gets (JhYVRX);
    p = strlen (JhYVRX);
    rZgTBhl = (759 - 759);
    n = (534 - 534);
    aEfeGLyoz1Q = (951 - 951);
    for (; JhYVRX[rZgTBhl] != '\0';) {
        JYCFEbVgsIHU = (244 - 244);
        for (; !(' ' == JhYVRX[rZgTBhl]) && JhYVRX[rZgTBhl] != '\0'; rZgTBhl = rZgTBhl + 1, JYCFEbVgsIHU = JYCFEbVgsIHU +1) {
            d[aEfeGLyoz1Q][JYCFEbVgsIHU] = JhYVRX[rZgTBhl];
            tad4FfPA[aEfeGLyoz1Q]++;
        }
        if (JhYVRX[rZgTBhl] == '\0') {
            break;
        }
        rZgTBhl = rZgTBhl + 1;
        n = n + 1;
        d[aEfeGLyoz1Q][JYCFEbVgsIHU] = '\0';
        aEfeGLyoz1Q = aEfeGLyoz1Q + 1;
    }
    d[aEfeGLyoz1Q][JYCFEbVgsIHU] = '\0';
    for (rZgTBhl = (592 - 592); rZgTBhl < aEfeGLyoz1Q; rZgTBhl = rZgTBhl + 1) {
        if (tad4FfPA[rZgTBhl] != (646 - 646)) {
            printf ("%d,", tad4FfPA[rZgTBhl]);
        };
    }
    printf ("%d", tad4FfPA[aEfeGLyoz1Q]);
    return 0;
}

