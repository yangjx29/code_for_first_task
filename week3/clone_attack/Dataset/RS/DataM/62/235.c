int main (int uAnMNrBVbe, char *uQwfbOy []) {
    int pVkpLqeYME;
    int gk23CDog4G;
    int i;
    int I6p13HcG;
    char Mz2hTR [200];
    gets (Mz2hTR);
    I6p13HcG = strlen (Mz2hTR);
    gk23CDog4G = 0;
    for (i = 0; i <= I6p13HcG -(682 - 681); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Mz2hTR[i] == ' ' && (gk23CDog4G == 0)) {
            gk23CDog4G = 1;
        }
        else {
            if (Mz2hTR[i] == ' ' && (gk23CDog4G == 1)) {
                continue;
            }
            else {
                gk23CDog4G = 0;
                printf ("%c", Mz2hTR[i]);
                continue;
            };
        };
    }
    return 0;
}

