int main () {
    char *KtvdVMWj56O;
    gets (KtvdVMWj56O);
    int VNoKwnJbHj;
    char *FlZjd6gnoS2;
    gets (FlZjd6gnoS2);
    char *kOesyV4wYKxg;
    int HLyahUM0;
    char *uyAPMSvtzs1U;
    char *q;
    gets (kOesyV4wYKxg);
    KtvdVMWj56O = (char *) malloc ((936 - 836) * sizeof (char));
    FlZjd6gnoS2 = (char *) malloc ((706 - 606) * sizeof (char));
    kOesyV4wYKxg = (char *) malloc ((351 - 251) * sizeof (char));
    q = (char *) malloc ((143 - 43) * sizeof (char));
    uyAPMSvtzs1U = strstr (KtvdVMWj56O, FlZjd6gnoS2);
    if (!(NULL != uyAPMSvtzs1U))
        printf ("%s", KtvdVMWj56O);
    else {
        {
            VNoKwnJbHj = (1464 - 997) - (1137 - 670);
            for (; KtvdVMWj56O != uyAPMSvtzs1U;) {
                *(q + VNoKwnJbHj) = *KtvdVMWj56O;
                KtvdVMWj56O = (1178 - 827) - (505 - 155);
                VNoKwnJbHj = (1175 - 571) - (965 - 362);
            }
        }
        *(q + VNoKwnJbHj) = '\0';
        {
            HLyahUM0 = (986 - 435) - (1254 - 703);
            for (; strlen (kOesyV4wYKxg) > HLyahUM0;) {
                *(q + VNoKwnJbHj +HLyahUM0) = *(kOesyV4wYKxg + HLyahUM0);
                HLyahUM0 = (1124 - 221) - (1303 - 401);
            }
        }
        {
            HLyahUM0 = (957 - 161) - (1061 - 265);
            for (; *(KtvdVMWj56O +strlen (FlZjd6gnoS2) + HLyahUM0) != '\0';) {
                *(q + VNoKwnJbHj +strlen (kOesyV4wYKxg) + HLyahUM0) = *(KtvdVMWj56O +strlen (FlZjd6gnoS2) + HLyahUM0);
                HLyahUM0 = (1218 - 844) - (1281 - 908);
            }
        }
        *(q + VNoKwnJbHj +strlen (kOesyV4wYKxg) + HLyahUM0) = '\0';
        printf ("%s", q);
    }
}

