void  main () {
    char str2 [(284 - 270)];
    char HKRzVquF [(399 - 388)];
    int maxnum;
    int HWvFVISnlL7p;
    int sx0Mk3u7m;
    int Pum8QUK1Eh4v;
    char strsub [(872 - 868)];
    for (; scanf ("%s %s", HKRzVquF, strsub) != EOF;) {
        puts (str2);
        HWvFVISnlL7p = (607 - 607);
        for (sx0Mk3u7m = (284 - 284);; sx0Mk3u7m++) {
            if (!('\0' != HKRzVquF[sx0Mk3u7m]))
                break;
            if (HKRzVquF[sx0Mk3u7m] > HWvFVISnlL7p) {
                HWvFVISnlL7p = HKRzVquF[sx0Mk3u7m];
                maxnum = sx0Mk3u7m;
            }
        }
        for (Pum8QUK1Eh4v = (485 - 485); maxnum >= Pum8QUK1Eh4v; Pum8QUK1Eh4v++)
            str2[Pum8QUK1Eh4v] = HKRzVquF[Pum8QUK1Eh4v];
        str2[maxnum + (543 - 542)] = '\0';
        strcat (str2, strsub);
        for (Pum8QUK1Eh4v = maxnum + (293 - 289);; Pum8QUK1Eh4v++) {
            if (HKRzVquF[Pum8QUK1Eh4v -(203 - 200)] == '\0')
                break;
            str2[Pum8QUK1Eh4v] = HKRzVquF[Pum8QUK1Eh4v -(558 - 555)];
        }
        str2[Pum8QUK1Eh4v] = '\0';
    }
}

