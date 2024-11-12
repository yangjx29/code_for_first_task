void  main () {
    char XwLpt2B [(570 - 470)] [(962 - 951)], Eog12ms6dB4q [(970 - 870)] [(163 - 159)], wpUz87XcO [(549 - 449)] [(965 - 950)];
    int tjwPhbqfLFy, yRwCTUb5QS, ZaXI2jMq, ONMzypPdSk, kfD93Yc, hgGMpy, k5CwLfE6Hy, bJPocaG;
    {
        yRwCTUb5QS = (1095 - 127) - (1659 - 692);
        for (; scanf ("%s%s", XwLpt2B[yRwCTUb5QS], Eog12ms6dB4q[yRwCTUb5QS]) != EOF;) {
            k5CwLfE6Hy = strlen (XwLpt2B[yRwCTUb5QS]);
            bJPocaG = strlen (Eog12ms6dB4q[yRwCTUb5QS]);
            {
                ZaXI2jMq = (874 - 276) - 598;
                for (; k5CwLfE6Hy - (933 - 932) >= ZaXI2jMq;) {
                    {
                        kfD93Yc = (707 - 707);
                        ONMzypPdSk = (926 - 926);
                        for (; k5CwLfE6Hy - (682 - 681) >= ONMzypPdSk;) {
                            if (XwLpt2B[yRwCTUb5QS][ONMzypPdSk] <= XwLpt2B[yRwCTUb5QS][ZaXI2jMq])
                                kfD93Yc++;
                            ONMzypPdSk++;
                        }
                    }
                    if (kfD93Yc == k5CwLfE6Hy) {
                        hgGMpy = ZaXI2jMq +1;
                        break;
                    }
                    ZaXI2jMq++;
                }
            }
            strncpy (wpUz87XcO[yRwCTUb5QS], XwLpt2B[yRwCTUb5QS], hgGMpy);
            wpUz87XcO[yRwCTUb5QS][hgGMpy] = '\0';
            strcat (wpUz87XcO[yRwCTUb5QS], Eog12ms6dB4q[yRwCTUb5QS]);
            {
                ZaXI2jMq = hgGMpy + bJPocaG;
                for (; ZaXI2jMq < k5CwLfE6Hy + bJPocaG;) {
                    wpUz87XcO[yRwCTUb5QS][ZaXI2jMq] = XwLpt2B[yRwCTUb5QS][ZaXI2jMq -bJPocaG];
                    ZaXI2jMq++;
                }
            }
            wpUz87XcO[yRwCTUb5QS][k5CwLfE6Hy + bJPocaG] = '\0';
            printf ("%s\n", wpUz87XcO[yRwCTUb5QS]);
            yRwCTUb5QS++;
        }
    }
}

