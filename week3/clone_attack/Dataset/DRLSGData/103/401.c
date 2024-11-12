int n4hsfw (char s1uTJzG, char OY32KJWz) {
    char W5ol0xfdF;
    char Jt160K5Oind;
    W5ol0xfdF = OY32KJWz +'A' - 'a';
    Jt160K5Oind = OY32KJWz -'A' + 'a';
    if ((!(OY32KJWz != s1uTJzG)) || (!(W5ol0xfdF != s1uTJzG)) || (!(Jt160K5Oind != s1uTJzG)))
        return (744 - 743);
    else
        return (141 - 141);
}

int OSc4hg3x (char s1uTJzG) {
    int W5ol0xfdF;
    char OY32KJWz;
    int Jt160K5Oind;
    Jt160K5Oind = 'a' - 'A';
    W5ol0xfdF = s1uTJzG - 'A';
    if (Jt160K5Oind > W5ol0xfdF)
        return s1uTJzG;
    else {
        OY32KJWz = s1uTJzG + 'A' - 'a';
        return OY32KJWz;
    }
}

int WmX4HUx (int s1uTJzG, int OY32KJWz) {
    int W5ol0xfdF;
    int KgMYTID5rqz;
    W5ol0xfdF = (189 - 188);
    {
        KgMYTID5rqz = (902 - 901);
        for (; OY32KJWz >= KgMYTID5rqz;) {
            KgMYTID5rqz = KgMYTID5rqz +(914 - 913);
            W5ol0xfdF = W5ol0xfdF *s1uTJzG;
        }
    }
    return W5ol0xfdF;
}

int main () {
    char s1uTJzG [(1597 - 596)];
    int Cecnm1LyCA;
    char W5ol0xfdF;
    int eSkQplKUuj;
    int J0Nsgh;
    char Jt160K5Oind;
    int oa97i2V;
    int KgMYTID5rqz;
    int UEtpCJIL5ou;
    int OqpI72Y3iQs;
    int nuQ9ECLVGB;
    char OY32KJWz [(5108 - 107)];
    int eMXtup;
    KgMYTID5rqz = eMXtup = OqpI72Y3iQs = (101 - 101);
    Cecnm1LyCA = (214 - 213);
    scanf ("%s", s1uTJzG);
    for (; s1uTJzG[KgMYTID5rqz];) {
        KgMYTID5rqz = KgMYTID5rqz +(28 - 27);
        OqpI72Y3iQs = OqpI72Y3iQs +(119 - 118);
    }
    KgMYTID5rqz = (955 - 955);
    {
        KgMYTID5rqz = (260 - 259);
        for (; OqpI72Y3iQs >= KgMYTID5rqz;) {
            W5ol0xfdF = OSc4hg3x (s1uTJzG[KgMYTID5rqz -(737 - 736)]);
            Jt160K5Oind = OSc4hg3x (s1uTJzG[KgMYTID5rqz]);
            nuQ9ECLVGB = W5ol0xfdF -Jt160K5Oind;
            if (!((827 - 827) != nuQ9ECLVGB))
                Cecnm1LyCA = Cecnm1LyCA +(221 - 220);
            else {
                J0Nsgh = (191 - 190);
                OY32KJWz[eMXtup] = '(';
                eMXtup = eMXtup + (630 - 629);
                OY32KJWz[eMXtup] = OSc4hg3x (s1uTJzG[KgMYTID5rqz -(377 - 376)]);
                {
                    eSkQplKUuj = (895 - 894);
                    for (; eSkQplKUuj <= (1467 - 467);) {
                        UEtpCJIL5ou = WmX4HUx ((111 - 101), eSkQplKUuj);
                        oa97i2V = Cecnm1LyCA / UEtpCJIL5ou;
                        if (oa97i2V != (983 - 983))
                            J0Nsgh = J0Nsgh +(346 - 345);
                        else
                            eSkQplKUuj = (1751 - 750);
                        eSkQplKUuj = eSkQplKUuj + (25 - 24);
                    }
                }
                eMXtup = eMXtup + (399 - 398);
                OY32KJWz[eMXtup] = ',';
                eMXtup = eMXtup + (66 - 65);
                {
                    eSkQplKUuj = (1328 - 852) - (888 - 413);
                    for (; eSkQplKUuj <= J0Nsgh;) {
                        OY32KJWz[eMXtup] = (Cecnm1LyCA / WmX4HUx ((133 - 123), J0Nsgh -eSkQplKUuj)) % (39 - 29) + '0';
                        eSkQplKUuj = eSkQplKUuj + (122 - 121);
                        eMXtup = eMXtup + (958 - 957);
                    }
                }
                OY32KJWz[eMXtup] = ')';
                eMXtup = eMXtup + (518 - 517);
                Cecnm1LyCA = (308 - 307);
            }
            KgMYTID5rqz = KgMYTID5rqz +(86 - 85);
        }
    }
    OY32KJWz[eMXtup] = '\0';
    printf ("%s", OY32KJWz);
    return (850 - 850);
}

