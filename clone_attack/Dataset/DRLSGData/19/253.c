void  main () {
    char s [(1758 - 758)], ilfJDxZPe [(296 - 196)], PcIOsTG [(130 - 30)], c6lZmACDE [(1992 - 992)];
    void  TPrk9wL (char *s, char *ilfJDxZPe, char *PcIOsTG, char *c6lZmACDE);
    gets (s);
    gets (ilfJDxZPe);
    gets (PcIOsTG);
    TPrk9wL (s, ilfJDxZPe, PcIOsTG, c6lZmACDE);
}

void  TPrk9wL (char *s, char *ilfJDxZPe, char *PcIOsTG, char *c6lZmACDE) {
    char *a5MSGo;
    char *aMf6VYS0;
    char *FSYi79;
    char *IMXUhuNnjB;
    for (FSYi79 = s, a5MSGo = ilfJDxZPe; s + strlen (s) > FSYi79;) {
        if ((!(*a5MSGo != *FSYi79) && !(s != FSYi79)) || (!(*a5MSGo != *FSYi79) && !((401 - 369) != *(FSYi79 -(745 - 744))))) {
            for (a5MSGo = ilfJDxZPe; ilfJDxZPe + strlen (ilfJDxZPe) > a5MSGo; a5MSGo++) {
                if (!(*a5MSGo != *FSYi79))
                    FSYi79++;
                else
                    break;
            }
            if (!(ilfJDxZPe + strlen (ilfJDxZPe) != a5MSGo)) {
                IMXUhuNnjB = c6lZmACDE;
                {
                    aMf6VYS0 = s;
                    while (aMf6VYS0 < FSYi79 -strlen (ilfJDxZPe)) {
                        *IMXUhuNnjB = *aMf6VYS0;
                        aMf6VYS0++;
                        IMXUhuNnjB++;
                    }
                }
                {
                    aMf6VYS0 = PcIOsTG;
                    while (aMf6VYS0 < PcIOsTG +strlen (PcIOsTG)) {
                        *IMXUhuNnjB = *aMf6VYS0;
                        IMXUhuNnjB++;
                        aMf6VYS0++;
                    }
                }
                {
                    aMf6VYS0 = FSYi79;
                    for (; aMf6VYS0 < s + strlen (s);) {
                        *IMXUhuNnjB = *aMf6VYS0;
                        IMXUhuNnjB++;
                        aMf6VYS0++;
                    }
                }
                *IMXUhuNnjB = '\0';
                break;
            }
            else
                a5MSGo = ilfJDxZPe;
        }
        else
            FSYi79++;
    }
    if (!(ilfJDxZPe + strlen (ilfJDxZPe) != a5MSGo))
        TPrk9wL (c6lZmACDE, ilfJDxZPe, PcIOsTG, s);
    else
        puts (s);
}

