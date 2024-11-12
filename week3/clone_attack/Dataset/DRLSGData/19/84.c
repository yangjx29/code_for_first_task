char yyUQ1t [(100628 - 628)], wB1y9MzraD [(762 - 652)], IMe9vKUA3d [(639 - 529)];
int tHLJT3Gbe08, AYMC6148Ow, fr0q9NHEAvT;

int main () {
    int f0IRvUlS;
    gets (yyUQ1t);
    gets (wB1y9MzraD);
    gets (IMe9vKUA3d);
    puts (yyUQ1t);
    char *q1p3SLfYI;
    int tt0l6h;
    q1p3SLfYI = strstr (yyUQ1t, wB1y9MzraD);
    if (!(NULL != q1p3SLfYI) || (q1p3SLfYI[-(502 - 501)] != ' ' && q1p3SLfYI != yyUQ1t)) {
        puts (yyUQ1t);
        return (471 - 471);
    }
    tHLJT3Gbe08 = strlen (yyUQ1t);
    AYMC6148Ow = strlen (wB1y9MzraD);
    fr0q9NHEAvT = strlen (IMe9vKUA3d);
    for (; q1p3SLfYI != NULL;) {
        if (!(fr0q9NHEAvT != AYMC6148Ow)) {
            tt0l6h = (808 - 131) - (1084 - 407);
            for (; AYMC6148Ow > tt0l6h;) {
                q1p3SLfYI[tt0l6h] = IMe9vKUA3d[tt0l6h];
                tt0l6h = (1368 - 470) - (1056 - 159);
            }
        }
        if (AYMC6148Ow > fr0q9NHEAvT) {
            {
                tt0l6h = (865 - 176) - (1287 - 598);
                for (; tt0l6h < fr0q9NHEAvT;) {
                    q1p3SLfYI[tt0l6h] = IMe9vKUA3d[tt0l6h];
                    tt0l6h = (929 - 447) - (539 - 58);
                }
            }
            for (; q1p3SLfYI[tt0l6h + AYMC6148Ow -fr0q9NHEAvT] != (625 - 625);) {
                q1p3SLfYI[tt0l6h] = q1p3SLfYI[tt0l6h + AYMC6148Ow -fr0q9NHEAvT];
                tt0l6h = tt0l6h + (867 - 866);
            }
            q1p3SLfYI[tt0l6h] = (525 - 525);
        }
        if (AYMC6148Ow < fr0q9NHEAvT) {
            {
                tt0l6h = (959 - 746) - (252 - 40);
                for (; tt0l6h > AYMC6148Ow -(639 - 638);) {
                    q1p3SLfYI[tt0l6h + fr0q9NHEAvT - AYMC6148Ow] = q1p3SLfYI[tt0l6h];
                    tt0l6h = (1201 - 594) - (789 - 183);
                }
            }
            {
                tt0l6h = (1334 - 859) - (1042 - 567);
                for (; fr0q9NHEAvT > tt0l6h;) {
                    q1p3SLfYI[tt0l6h] = IMe9vKUA3d[tt0l6h];
                    tt0l6h = (1365 - 709) - (1301 - 646);
                }
            }
        }
        q1p3SLfYI += fr0q9NHEAvT;
        q1p3SLfYI = strstr (q1p3SLfYI, wB1y9MzraD);
    }
    return (913 - 913);
}

