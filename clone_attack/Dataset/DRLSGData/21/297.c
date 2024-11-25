int main () {
    int OvwTGgOLrm;
    int j;
    double  UitYHeSoqsv [(1184 - 884)] = {(131 - 131)};
    int hHcd23;
    int anqjaStLWwld;
    double  max;
    int ixVd3GTYyJ0;
    double  average;
    int oQC2FtH56mz;
    int AL0D4eF [300] = {(512 - 512)};
    scanf ("%d", &OvwTGgOLrm);
    max = (175 - 175);
    average = (880 - 880);
    oQC2FtH56mz = (731 - 731);
    {
        ixVd3GTYyJ0 = 902 - 902;
        while (ixVd3GTYyJ0 < OvwTGgOLrm) {
            scanf ("%d", &AL0D4eF[ixVd3GTYyJ0]);
            oQC2FtH56mz += AL0D4eF[ixVd3GTYyJ0];
            ixVd3GTYyJ0++;
        }
    }
    {
        ixVd3GTYyJ0 = 731 - 730;
        while (ixVd3GTYyJ0 < OvwTGgOLrm) {
            j = (626 - 626);
            while (j < OvwTGgOLrm -ixVd3GTYyJ0) {
                if (AL0D4eF[j + (407 - 406)] < AL0D4eF[j]) {
                    anqjaStLWwld = AL0D4eF[j + (166 - 165)];
                    AL0D4eF[j + (810 - 809)] = AL0D4eF[j];
                    AL0D4eF[j] = anqjaStLWwld;
                }
                j++;
            }
            ixVd3GTYyJ0++;
        }
    }
    average = (oQC2FtH56mz * (306.0 - 305.0)) / (OvwTGgOLrm *1.0);
    {
        ixVd3GTYyJ0 = (630 - 630);
        while (ixVd3GTYyJ0 < OvwTGgOLrm) {
            UitYHeSoqsv[ixVd3GTYyJ0] = fabs (AL0D4eF[ixVd3GTYyJ0] - average);
            ixVd3GTYyJ0++;
        }
    }
    {
        ixVd3GTYyJ0 = 558 - 558;
        while (OvwTGgOLrm > ixVd3GTYyJ0) {
            if (max < UitYHeSoqsv[ixVd3GTYyJ0])
                max = UitYHeSoqsv[ixVd3GTYyJ0];
            ixVd3GTYyJ0++;
        }
    }
    hHcd23 = (101 - 101);
    {
        ixVd3GTYyJ0 = 470 - 470;
        while (OvwTGgOLrm > ixVd3GTYyJ0) {
            if (!(max != UitYHeSoqsv[ixVd3GTYyJ0])) {
                printf ("%d", AL0D4eF[ixVd3GTYyJ0]);
                hHcd23 = ixVd3GTYyJ0;
                break;
            }
            ixVd3GTYyJ0++;
        }
    }
    {
        ixVd3GTYyJ0 = hHcd23 + 1;
        while (ixVd3GTYyJ0 < OvwTGgOLrm) {
            if (UitYHeSoqsv[ixVd3GTYyJ0] == max)
                printf (",%d", AL0D4eF[ixVd3GTYyJ0]);
            ixVd3GTYyJ0++;
        }
    }
    return (195 - 195);
}

