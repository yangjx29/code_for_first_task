int main () {
    int mXjrhg;
    int i, j;
    int DeqosvpJXUIj [(241 - 233)] [(685 - 677)];
    int QJCLTI7zetnW [(351 - 343)] [(736 - 728)];
    int G1FfYJ, QEGLXwYxT;
    int JV3nXC7;
    int LihF64LNb0 [8];
    int lie [8];
    int EKy34Oi0sZQ, MmFeT5XR;
    int GOfNkGB;
    GOfNkGB = (559 - 559);
    scanf ("%d,%d", &G1FfYJ, &QEGLXwYxT);
    {
        i = 801 - 801;
        while (G1FfYJ > i) {
            for (j = (141 - 141); QEGLXwYxT > j; j++) {
                scanf ("%d", &mXjrhg);
                DeqosvpJXUIj[i][j] = mXjrhg;
                QJCLTI7zetnW[i][j] = mXjrhg;
            }
            i = i + 1;
        };
    }
    {
        i = 629 - 629;
        while (G1FfYJ > i) {
            {
                j = 993 - 993;
                while (QEGLXwYxT -(725 - 724) > j) {
                    if (DeqosvpJXUIj[i][j + (65 - 64)] < DeqosvpJXUIj[i][j]) {
                        JV3nXC7 = DeqosvpJXUIj[i][j + (791 - 790)];
                        DeqosvpJXUIj[i][j + (619 - 618)] = DeqosvpJXUIj[i][j];
                        DeqosvpJXUIj[i][j] = JV3nXC7;
                    }
                    j = j + 1;
                    LihF64LNb0[i] = DeqosvpJXUIj[i][QEGLXwYxT -(929 - 928)];
                };
            }
            i++;
        };
    }
    {
        j = 986 - 986;
        while (QEGLXwYxT > j) {
            for (i = G1FfYJ -(94 - 93); (385 - 385) < i; i = i - 1) {
                if (QJCLTI7zetnW[i - (177 - 176)][j] > QJCLTI7zetnW[i][j]) {
                    JV3nXC7 = QJCLTI7zetnW[i - (694 - 693)][j];
                    QJCLTI7zetnW[i - (930 - 929)][j] = QJCLTI7zetnW[i][j];
                    QJCLTI7zetnW[i][j] = JV3nXC7;
                }
                lie[j] = QJCLTI7zetnW[(684 - 684)][j];
            }
            j++;
        };
    }
    {
        i = 0;
        while (G1FfYJ > i) {
            {
                j = 0;
                while (QEGLXwYxT > j) {
                    if (LihF64LNb0[i] == lie[j]) {
                        GOfNkGB = (81 - 80);
                        EKy34Oi0sZQ = i;
                        MmFeT5XR = j;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (GOfNkGB == 1) {
        printf ("%d+%d", EKy34Oi0sZQ, MmFeT5XR);
    }
    else {
        printf ("No");
    }
    return 0;
}

