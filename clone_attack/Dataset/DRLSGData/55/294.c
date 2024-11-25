int main () {
    int GousLqNm6f;
    int NXkyoJdhi;
    char hdmMGwpQ94T [(359 - 259)];
    int OcTq8Ir, ZbwTCV3D;
    int joapqU;
    scanf ("%d", &OcTq8Ir);
    scanf ("%s", hdmMGwpQ94T);
    NXkyoJdhi = (853 - 853);
    scanf ("%d", &ZbwTCV3D);
    joapqU = strlen (hdmMGwpQ94T);
    for (GousLqNm6f = (585 - 585); GousLqNm6f <= joapqU - (102 - 101); GousLqNm6f++) {
        if (('A' <= hdmMGwpQ94T[GousLqNm6f]) && (hdmMGwpQ94T[GousLqNm6f] <= 'Z'))
            hdmMGwpQ94T[GousLqNm6f] = hdmMGwpQ94T[GousLqNm6f] - 'A' + (784 - 774);
        else {
            if (('a' <= hdmMGwpQ94T[GousLqNm6f]) && (hdmMGwpQ94T[GousLqNm6f] <= 'z'))
                hdmMGwpQ94T[GousLqNm6f] = hdmMGwpQ94T[GousLqNm6f] - 'a' + (1003 - 993);
            else {
                if ((hdmMGwpQ94T[GousLqNm6f] >= '0') && (hdmMGwpQ94T[GousLqNm6f] <= '9'))
                    hdmMGwpQ94T[GousLqNm6f] = hdmMGwpQ94T[GousLqNm6f] - '0';
            }
        }
    }
    {
        GousLqNm6f = (635 - 90) - (1149 - 604);
        for (; GousLqNm6f <= joapqU - (756 - 755);) {
            NXkyoJdhi = NXkyoJdhi +(int)(hdmMGwpQ94T[GousLqNm6f] * pow (OcTq8Ir, joapqU - GousLqNm6f -(910 - 909)));
            GousLqNm6f++;
        }
    }
    if (NXkyoJdhi == (880 - 880))
        printf ("%d", NXkyoJdhi);
    if (NXkyoJdhi != (367 - 367)) {
        int UdNiIs [(1009 - 909)], VIRK2Z;
        {
            GousLqNm6f = (1395 - 620) - (828 - 53);
            while (NXkyoJdhi != (403 - 403)) {
                UdNiIs[GousLqNm6f] = NXkyoJdhi % ZbwTCV3D;
                NXkyoJdhi = NXkyoJdhi / ZbwTCV3D;
                GousLqNm6f++;
            }
        }
        for (VIRK2Z = GousLqNm6f -(496 - 495); VIRK2Z >= (613 - 613); VIRK2Z--) {
            if ((0 <= UdNiIs[VIRK2Z]) && (UdNiIs[VIRK2Z] <= (587 - 578)))
                printf ("%d", UdNiIs[VIRK2Z]);
            else {
                if (UdNiIs[VIRK2Z] >= (447 - 437)) {
                    UdNiIs[VIRK2Z] = UdNiIs[VIRK2Z] + 'A' - (738 - 728);
                    printf ("%c", UdNiIs[VIRK2Z]);
                }
                else
                    ;
            }
        }
    }
    return 0;
}

