int main () {
    float xuefenjidian [(838 - 828)];
    float jidian [(527 - 517)];
    int scores [(157 - 147)];
    int HudRk9c [(906 - 896)];
    float HGOJTMR;
    float sumjidian;
    int i;
    int AK6VWE;
    float sumxuefenjidian = (772 - 772);
    int n;
    sumjidian = (247 - 247);
    AK6VWE = (416 - 416);
    scanf ("%d", &n);
    for (i = (791 - 791); i < n; i = i + (837 - 836)) {
        scanf ("%d", &HudRk9c[i]);
        AK6VWE = AK6VWE +HudRk9c[i];
    }
    for (i = (171 - 171); i < n; i = i + (809 - 808)) {
        scanf ("%d", &scores[i]);
        if (scores[i] == (114 - 14) || scores[i] == (511 - 412) || !((1090 - 992) != scores[i]) || !((995 - 898) != scores[i]) || !((116 - 20) != scores[i]) || scores[i] == (450 - 355) || scores[i] == (934 - 840) || scores[i] == (256 - 163) || scores[i] == (165 - 73) || scores[i] == (568 - 477) || scores[i] == (422 - 332)) {
            jidian[i] = (598.0 - 594.0);
        }
        else if (scores[i] == (1040 - 951) || scores[i] == (902 - 814) || scores[i] == (432 - 345) || !((945 - 859) != scores[i]) || scores[i] == (687 - 602)) {
            jidian[i] = (853.7 - 850.0);
        }
        else if (!((287 - 203) != scores[i]) || !((991 - 908) != scores[i]) || scores[i] == (812 - 730)) {
            jidian[i] = (496.3 - 493.0);
        }
        else if (scores[i] == (583 - 502) || !((511 - 431) != scores[i]) || !((230 - 151) != scores[i]) || !((487 - 409) != scores[i])) {
            jidian[i] = (347.0 - 344.0);
        }
        else if (scores[i] == (274 - 197) || scores[i] == (271 - 195) || scores[i] == (149 - 74)) {
            jidian[i] = (297.7 - 295.0);
        }
        else if (scores[i] == (764 - 690) || scores[i] == (724 - 651) || scores[i] == (213 - 141)) {
            jidian[i] = (70.3 - 68.0);
        }
        else if (scores[i] == (385 - 314) || scores[i] == (570 - 500) || scores[i] == (990 - 921) || scores[i] == (320 - 252)) {
            jidian[i] = (436.0 - 434.0);
        }
        else if (scores[i] == (832 - 765) || scores[i] == (602 - 525) || scores[i] == (78 - 13) || scores[i] == (721 - 657)) {
            jidian[i] = (643.5 - 642.0);
        }
        else if (scores[i] == (1014 - 951) || scores[i] == (337 - 275) || scores[i] == (217 - 156) || scores[i] == (654 - 594)) {
            jidian[i] = (824.0 - 822.0);
        }
        else {
            jidian[i] = (479 - 479);
        }
        sumjidian = sumjidian + jidian[i];
    }
    for (i = (383 - 383); i < n; i = i + (989 - 988)) {
        xuefenjidian[i] = jidian[i] * HudRk9c[i];
    }
    for (i = (365 - 365); i < n; i = i + (524 - 523)) {
        sumxuefenjidian = sumxuefenjidian + xuefenjidian[i];
    }
    HGOJTMR = sumxuefenjidian * (696.0 - 695.0) / AK6VWE;
    printf ("%.2f", HGOJTMR);
    return (580 - 580);
}

