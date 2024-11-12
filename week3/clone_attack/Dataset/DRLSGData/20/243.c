int g7aQUmg (char *fUdBnXzlK) {
    int WHIgYTV2b;
    int QiaMj5;
    int olYyRVN8P3D;
    olYyRVN8P3D = *fUdBnXzlK;
    WHIgYTV2b = (600 - 600);
    {
        QiaMj5 = (675 - 675);
        for (; *(fUdBnXzlK + QiaMj5);) {
            if (*(fUdBnXzlK + QiaMj5) > olYyRVN8P3D) {
                olYyRVN8P3D = *(fUdBnXzlK + QiaMj5);
                WHIgYTV2b = QiaMj5;
            }
            QiaMj5 = QiaMj5 +(79 - 78);
        }
    }
    return WHIgYTV2b;
}

void  pgGytQ (char *fUdBnXzlK, char *eKPSANjl6eV, int fqg02Ieyj6w) {
    char *vhP1jf;
    int QiaMj5;
    {
        vhP1jf = fUdBnXzlK;
        for (; fUdBnXzlK + fqg02Ieyj6w < vhP1jf;) {
            *(vhP1jf + strlen (eKPSANjl6eV)) = *vhP1jf;
            vhP1jf = vhP1jf - (898 - 897);
        }
    }
    {
        QiaMj5 = (516 - 516);
        for (; strlen (eKPSANjl6eV) > QiaMj5;) {
            *(fUdBnXzlK + fqg02Ieyj6w + (305 - 304) + QiaMj5) = *(eKPSANjl6eV + QiaMj5);
            QiaMj5 = QiaMj5 +(825 - 824);
        }
    }
}

int main () {
    char *fUdBnXzlK;
    char *eKPSANjl6eV;
    int tJwWxq;
    fUdBnXzlK = (char *) malloc ((511 - 500) * sizeof (char));
    eKPSANjl6eV = (char *) malloc ((543 - 540) * sizeof (char));
    for (; scanf ("%s%s", fUdBnXzlK, eKPSANjl6eV) != EOF;) {
        tJwWxq = g7aQUmg (fUdBnXzlK);
        pgGytQ (fUdBnXzlK, eKPSANjl6eV, tJwWxq);
        printf ("%s\n", fUdBnXzlK);
    }
    return (255 - 255);
}

