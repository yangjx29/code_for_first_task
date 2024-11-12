struct   book {
    int fQ5pJaOB;
    char J3LyHf5 [26];
}
sBKQHLyshwb [999];

int main () {
    char a, I7DlO43gyM = 'A';
    int sPSfYtq63RQF, hQUyDBYO2L, duIpGEw1ka3F, QFDxR2S [26], iI7H2nubYJ = (146 - 146);
    for (sPSfYtq63RQF = 0; sPSfYtq63RQF < 26; sPSfYtq63RQF = sPSfYtq63RQF + 1)
        QFDxR2S[sPSfYtq63RQF] = 0;
    scanf ("%d", &duIpGEw1ka3F);
    for (sPSfYtq63RQF = 0; sPSfYtq63RQF < duIpGEw1ka3F; sPSfYtq63RQF = sPSfYtq63RQF + 1)
        scanf ("%d%s", &sBKQHLyshwb[sPSfYtq63RQF].fQ5pJaOB, sBKQHLyshwb[sPSfYtq63RQF].J3LyHf5);
    for (a = 'A'; a <= 'Z'; a++)
        for (sPSfYtq63RQF = 0; sPSfYtq63RQF < duIpGEw1ka3F; sPSfYtq63RQF++)
            for (hQUyDBYO2L = 0; hQUyDBYO2L < 26; hQUyDBYO2L = hQUyDBYO2L + 1)
                if (sBKQHLyshwb[sPSfYtq63RQF].J3LyHf5[hQUyDBYO2L] == a)
                    QFDxR2S[a - 'A']++;
    {
        sPSfYtq63RQF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sPSfYtq63RQF < 26) {
            if (QFDxR2S[sPSfYtq63RQF] >= iI7H2nubYJ)
                iI7H2nubYJ = QFDxR2S[sPSfYtq63RQF];
            sPSfYtq63RQF = sPSfYtq63RQF + 1;
        };
    }
    {
        sPSfYtq63RQF = 0;
        while (sPSfYtq63RQF < 26) {
            if (QFDxR2S[sPSfYtq63RQF] == iI7H2nubYJ) {
                I7DlO43gyM = I7DlO43gyM +sPSfYtq63RQF;
                printf ("%c\n", I7DlO43gyM);
                printf ("%d\n", iI7H2nubYJ);
            }
            sPSfYtq63RQF = sPSfYtq63RQF + 1;
        };
    }
    for (sPSfYtq63RQF = 0; sPSfYtq63RQF < duIpGEw1ka3F; sPSfYtq63RQF++)
        for (hQUyDBYO2L = 0; hQUyDBYO2L < 26; hQUyDBYO2L++)
            if (sBKQHLyshwb[sPSfYtq63RQF].J3LyHf5[hQUyDBYO2L] == I7DlO43gyM)
                printf ("%d\n", sBKQHLyshwb[sPSfYtq63RQF].fQ5pJaOB);
    return 0;
}

