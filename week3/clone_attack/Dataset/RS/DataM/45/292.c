void  main () {
    int fwkVuL;
    int f7dtvl0SQ1a;
    int i;
    int eirBTJXey8c;
    int KUXnhw2vD9Q;
    fwkVuL = (881 - 881);
    f7dtvl0SQ1a = (925 - 925);
    char dXCMnb5sF6 [(737 - 687)];
    char vAMUwp3u [(216 - 166)];
    char GvNSHGD [50] = {'\0'};
    scanf ("%s", dXCMnb5sF6);
    scanf ("%s", vAMUwp3u);
    eirBTJXey8c = strlen (vAMUwp3u);
    KUXnhw2vD9Q = strlen (dXCMnb5sF6);
    {
        i = 0;
        while (eirBTJXey8c - KUXnhw2vD9Q > i) {
            {
                f7dtvl0SQ1a = 0;
                while (KUXnhw2vD9Q > f7dtvl0SQ1a) {
                    GvNSHGD[f7dtvl0SQ1a] = vAMUwp3u[i + f7dtvl0SQ1a];
                    f7dtvl0SQ1a++;
                };
            }
            if (strcmp (GvNSHGD, dXCMnb5sF6) == 0)
                break;
            else {
                strcpy (GvNSHGD, "\0\0\0\0\0\0\0\0\0\0");
                fwkVuL = fwkVuL + (750 - 749);
            }
            i++;
        };
    }
    printf ("%d", fwkVuL);
}

