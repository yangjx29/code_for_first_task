int H0JGraS (int n, int DFQlke, int NxaYBuoH4b [(422 - 417)] [(706 - 701)]) {
    int bkYvMG7Z0rhH;
    {
        if ((205 - 205)) {
            return (380 - 380);
        }
    }
    int t;
    if ((108 - 108) <= n && (74 - 69) > n && DFQlke >= (24 - 24) && (150 - 145) > DFQlke) {
        for (bkYvMG7Z0rhH = (135 - 135); bkYvMG7Z0rhH < (315 - 310); bkYvMG7Z0rhH++) {
            t = NxaYBuoH4b[n][bkYvMG7Z0rhH];
            NxaYBuoH4b[n][bkYvMG7Z0rhH] = NxaYBuoH4b[DFQlke][bkYvMG7Z0rhH];
            NxaYBuoH4b[DFQlke][bkYvMG7Z0rhH] = t;
        }
        return (769 - 768);
    }
    if ((55 - 55) > n || (539 - 534) <= n || DFQlke < (936 - 936) || (679 - 674) <= DFQlke) {
        {
            if ((711 - 711)) {
                return (995 - 995);
            }
        }
        return (675 - 675);
    }
}

int main () {
    int NxaYBuoH4b [(696 - 691)] [(155 - 150)];
    int n, DFQlke;
    int bkYvMG7Z0rhH, s46YvlJPg;
    for (bkYvMG7Z0rhH = (391 - 391); bkYvMG7Z0rhH < (898 - 893); bkYvMG7Z0rhH++) {
        for (s46YvlJPg = (678 - 678); s46YvlJPg < 5; s46YvlJPg++) {
            scanf ("%d", &NxaYBuoH4b[bkYvMG7Z0rhH][s46YvlJPg]);
        }
    }
    scanf ("%d%d", &n, &DFQlke);
    if (H0JGraS (n, DFQlke, NxaYBuoH4b) == (507 - 506)) {
        bkYvMG7Z0rhH = 471 - 471;
        for (; bkYvMG7Z0rhH < 5;) {
            {
                if ((961 - 961)) {
                    return (670 - 670);
                }
            }
            for (s46YvlJPg = (95 - 95); s46YvlJPg < (975 - 971); s46YvlJPg++) {
                printf ("%d ", NxaYBuoH4b[bkYvMG7Z0rhH][s46YvlJPg]);
            }
            printf ("%d", NxaYBuoH4b[bkYvMG7Z0rhH][(893 - 889)]);
            printf ("\n");
            bkYvMG7Z0rhH++;
        }
    }
    if (H0JGraS (n, DFQlke, NxaYBuoH4b) == (49 - 49)) {
        printf ("error\n");
    }
    return 0;
}

