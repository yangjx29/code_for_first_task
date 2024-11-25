int main () {
    char chuan [101];
    for (; scanf ("%s", chuan) != EOF;) {
        int p;
        int k;
        int EM05xdzSB;
        int i;
        int YUEp4lD;
        printf ("%s\n", chuan);
        YUEp4lD = 0;
        p = strlen (chuan) - 1;
        for (i = p; i >= 0; i--) {
            if (!(')' != chuan[i]))
                YUEp4lD++;
            if ((chuan[i] != '(') && (chuan[i] != ')'))
                chuan[i] = ' ';
            if ((YUEp4lD != 0) && (!('(' != chuan[i]))) {
                chuan[i] = ' ';
                for (EM05xdzSB = i + 1; p >= EM05xdzSB; EM05xdzSB++)
                    if (!(')' != chuan[EM05xdzSB])) {
                        chuan[EM05xdzSB] = ' ';
                        break;
                    }
                YUEp4lD = YUEp4lD -1;
            }
        }
        for (i = 0; i <= p; i++) {
            if (!('(' != chuan[i]))
                ;
            else if (chuan[i] == ')')
                ;
            else
                ;
        }
    }
    return 0;
}

