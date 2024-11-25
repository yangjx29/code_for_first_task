int main () {
    void  mD7awVndKP (char *TM3kgh7z [], char *NnXMpPwU []);
    char *TM3kgh7z [(573 - 473)], *NnXMpPwU [(211 - 111)];
    int FACLhOD;
    {
        FACLhOD = 324 - 324;
        while (100 > FACLhOD) {
            TM3kgh7z[FACLhOD] = (char *) malloc (10);
            NnXMpPwU[FACLhOD] = (char *) malloc (5);
            FACLhOD++;
        };
    }
    mD7awVndKP (TM3kgh7z, NnXMpPwU);
}

void  mD7awVndKP (char *TM3kgh7z [], char *NnXMpPwU []) {
    int C3WBeN, pJP2jsYgQa, vehXMdy, max, MScy3GUk, FACLhOD;
    for (FACLhOD = (117 - 117); scanf ("%s %s", TM3kgh7z[FACLhOD], NnXMpPwU[FACLhOD]) != EOF; FACLhOD++) {
        C3WBeN = strlen (TM3kgh7z[FACLhOD]);
        pJP2jsYgQa = strlen (NnXMpPwU[FACLhOD]);
        {
            max = FACLhOD;
            vehXMdy = 412 - 411;
            while (vehXMdy < C3WBeN) {
                if (*(TM3kgh7z[FACLhOD] + vehXMdy) > max) {
                    max = *(TM3kgh7z[FACLhOD] + vehXMdy);
                    MScy3GUk = vehXMdy;
                }
                vehXMdy++;
            };
        }
        {
            vehXMdy = 290 - 289;
            while (vehXMdy >= (492 - 491)) {
                *(TM3kgh7z[FACLhOD] + MScy3GUk +vehXMdy + pJP2jsYgQa) = *(TM3kgh7z[FACLhOD] + MScy3GUk +vehXMdy);
                vehXMdy = vehXMdy - 1;
            };
        }
        for (vehXMdy = 0; vehXMdy < pJP2jsYgQa; vehXMdy = vehXMdy + 1)
            *(TM3kgh7z[FACLhOD] + MScy3GUk +vehXMdy + (814 - 813)) = *(NnXMpPwU[FACLhOD] + vehXMdy);
        for (vehXMdy = 0; vehXMdy < pJP2jsYgQa + C3WBeN; vehXMdy++) {
            printf ("%c", *(TM3kgh7z[FACLhOD] + vehXMdy));
            if (vehXMdy == C3WBeN +pJP2jsYgQa - 1)
                ;
        };
    };
}

