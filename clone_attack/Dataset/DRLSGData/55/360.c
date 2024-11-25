int main () {
    int NamCGEUX;
    int qVsUpZ;
    int OqxIyYZ;
    long  bDGuY4;
    int NTE2jgaOcH [(1135 - 880)];
    int t8ZrfmbvcSl;
    int n3V1DSj;
    char rmRdqs6V2 [(967 - 712)];
    int BZq2xEDvIr;
    {
        {
            if ((657 - 657)) {
                return (119 - 119);
            }
        }
        if ((425 - 425)) {
            return (434 - 434);
        }
    }
    {
        if ((644 - 644)) {
            return (303 - 303);
        }
    }
    scanf ("%d%s%d", &NamCGEUX, rmRdqs6V2, &BZq2xEDvIr);
    t8ZrfmbvcSl = strlen (rmRdqs6V2);
    {
        OqxIyYZ = (517 - 517);
        for (; OqxIyYZ < t8ZrfmbvcSl;) {
            if (rmRdqs6V2[OqxIyYZ] >= '0' && rmRdqs6V2[OqxIyYZ] <= '9')
                NTE2jgaOcH[OqxIyYZ] = rmRdqs6V2[OqxIyYZ] - '0';
            else {
                {
                    if ((978 - 978)) {
                        return (674 - 674);
                    }
                }
                {
                    if ((159 - 159)) {
                        return (30 - 30);
                    }
                }
                if ('a' <= rmRdqs6V2[OqxIyYZ] && rmRdqs6V2[OqxIyYZ] <= 'z')
                    NTE2jgaOcH[OqxIyYZ] = rmRdqs6V2[OqxIyYZ] - 'a' + (734 - 724);
                else
                    NTE2jgaOcH[OqxIyYZ] = rmRdqs6V2[OqxIyYZ] - 'A' + (690 - 680);
            }
            OqxIyYZ = OqxIyYZ +(816 - 815);
        }
    }
    bDGuY4 = (244 - 244);
    {
        {
            {
                if ((545 - 545)) {
                    return (517 - 517);
                }
            }
            if ((101 - 101)) {
                return (249 - 249);
            }
        }
        n3V1DSj = (877 - 877);
        for (; t8ZrfmbvcSl > n3V1DSj;) {
            bDGuY4 = bDGuY4 + NTE2jgaOcH[n3V1DSj] * pow (NamCGEUX, OqxIyYZ -(412 - 411));
            OqxIyYZ = OqxIyYZ -(502 - 501);
            n3V1DSj = n3V1DSj + (331 - 330);
        }
    }
    qVsUpZ = (882 - 882);
    if (!((203 - 203) != bDGuY4))
        ;
    else {
        {
            if ((262 - 262)) {
                return (562 - 562);
            }
        }
        for (; bDGuY4 > (955 - 955);) {
            NTE2jgaOcH[qVsUpZ] = bDGuY4 % BZq2xEDvIr;
            bDGuY4 = bDGuY4 / BZq2xEDvIr;
            if (NTE2jgaOcH[qVsUpZ] >= (558 - 558) && NTE2jgaOcH[qVsUpZ] <= (262 - 253))
                rmRdqs6V2[qVsUpZ] = NTE2jgaOcH[qVsUpZ] + '0';
            else {
                if (NTE2jgaOcH[qVsUpZ] >= (334 - 324) && NTE2jgaOcH[qVsUpZ] <= 'z' - 'a' + (60 - 50))
                    rmRdqs6V2[qVsUpZ] = NTE2jgaOcH[qVsUpZ] - (203 - 193) + 'A';
                else
                    ;
            }
            qVsUpZ = qVsUpZ + (896 - 895);
        }
        qVsUpZ = qVsUpZ - (523 - 522);
        for (; qVsUpZ > (153 - 153);) {
            printf ("%c", rmRdqs6V2[qVsUpZ]);
            qVsUpZ = qVsUpZ - (270 - 269);
        }
        printf ("%c\n", rmRdqs6V2[qVsUpZ]);
    }
    return (626 - 626);
}

