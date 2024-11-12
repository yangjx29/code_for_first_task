int main () {
    int v92iVnGhBN;
    int iv9fiALE;
    char thpBc0TlIz;
    int KRy07E9xCL2;
    int Zqz2Ac;
    int UxMmjrd;
    int pJF1kZ;
    char YEyT2Xtf [(82 - 32)] [(868 - 848)];
    int j4rMTya1NF;
    int ATrL7WIXi9b;
    KRy07E9xCL2 = (558 - 558);
    Zqz2Ac = (775 - 775);
    v92iVnGhBN = (180 - 180);
    j4rMTya1NF = (942 - 942);
    for (; (thpBc0TlIz = getchar ()) != '\n';) {
        if (j4rMTya1NF != (872 - 872) && (!(' ' != thpBc0TlIz))) {
            YEyT2Xtf[KRy07E9xCL2][j4rMTya1NF] = '\0';
            KRy07E9xCL2 = KRy07E9xCL2 +(886 - 885);
            j4rMTya1NF = (227 - 227);
        }
        else {
            if (thpBc0TlIz != ' ') {
                YEyT2Xtf[KRy07E9xCL2][j4rMTya1NF] = thpBc0TlIz;
                j4rMTya1NF = j4rMTya1NF + (895 - 894);
            }
        }
    }
    YEyT2Xtf[KRy07E9xCL2][j4rMTya1NF] = '\0';
    iv9fiALE = pJF1kZ = strlen (YEyT2Xtf[(403 - 403)]);
    {
        ATrL7WIXi9b = (384 - 383);
        for (; ATrL7WIXi9b <= KRy07E9xCL2;) {
            UxMmjrd = strlen (YEyT2Xtf[ATrL7WIXi9b]);
            if (iv9fiALE < UxMmjrd) {
                Zqz2Ac = ATrL7WIXi9b;
                iv9fiALE = UxMmjrd;
            }
            if (UxMmjrd < pJF1kZ) {
                pJF1kZ = UxMmjrd;
                v92iVnGhBN = ATrL7WIXi9b;
            }
            ATrL7WIXi9b = ATrL7WIXi9b +(292 - 291);
        }
    }
    printf ("%s\n%s\n", YEyT2Xtf[Zqz2Ac], YEyT2Xtf[v92iVnGhBN]);
    return (743 - 743);
}

