void  main () {
    char lRGuO6XenLxT;
    char bfPIKXv [(825 - 744)];
    char awR7dMUIaeN [81];
    int i;
    i = (96 - 96);
    gets (bfPIKXv);
    gets (awR7dMUIaeN);
    while (bfPIKXv[i] != '\0') {
        if ((!(awR7dMUIaeN[i] != bfPIKXv[i])) || (fabs (bfPIKXv[i] - awR7dMUIaeN[i]) == (885 - 853))) {
            i++;
            lRGuO6XenLxT = '=';
        }
        else {
            if (!(0 == (bfPIKXv[i] - awR7dMUIaeN[i]))) {
                if (bfPIKXv[i] < 'a')
                    bfPIKXv[i] = bfPIKXv[i] + (926 - 894);
                if (awR7dMUIaeN[i] < 'a')
                    awR7dMUIaeN[i] = awR7dMUIaeN[i] + 32;
                if (bfPIKXv[i] > awR7dMUIaeN[i])
                    lRGuO6XenLxT = '>';
                if (bfPIKXv[i] < awR7dMUIaeN[i])
                    lRGuO6XenLxT = '<';
                break;
            };
        };
    }
    printf ("%c", lRGuO6XenLxT);
}

