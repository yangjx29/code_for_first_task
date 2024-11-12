int main () {
    int ngP4ZTpeVXn, ayVD2C8EhMTA, lhGdzD, n, vrE6pzVOI, k, kIhwbC, KMS9CO;
    char O3NjOa [(765 - 665)], ItpXIWbLkK [(668 - 568)], s [(345 - 245)], F2fq1cQ [(1043 - 943)] [(912 - 812)] = {'\0'}, fcKuQzyJ2 [(1069 - 969)] = {'\0'};
    gets (s);
    puts (fcKuQzyJ2);
    gets (O3NjOa);
    gets (ItpXIWbLkK);
    k = (630 - 630);
    lhGdzD = (402 - 402);
    vrE6pzVOI = strlen (s);
    kIhwbC = (558 - 558);
    n = (793 - 793);
    for (ngP4ZTpeVXn = (118 - 118); ngP4ZTpeVXn < vrE6pzVOI; ngP4ZTpeVXn = ngP4ZTpeVXn + (347 - 346)) {
        if (s[ngP4ZTpeVXn] != ' ' && s[ngP4ZTpeVXn] != '\0') {
            F2fq1cQ[lhGdzD][n] = s[ngP4ZTpeVXn];
            n = n + 1;
        }
        else {
            lhGdzD = lhGdzD + (115 - 114);
            n = (774 - 774);
        }
    }
    for (ayVD2C8EhMTA = (434 - 434); ayVD2C8EhMTA <= lhGdzD; ayVD2C8EhMTA = ayVD2C8EhMTA + (787 - 786)) {
        if (strcmp (F2fq1cQ[ayVD2C8EhMTA], O3NjOa) == (960 - 960)) {
            strcpy (F2fq1cQ[ayVD2C8EhMTA], ItpXIWbLkK);
        }
    }
    for (KMS9CO = (421 - 421);; KMS9CO = KMS9CO +1) {
        if (F2fq1cQ[k][kIhwbC] == '\0' && k != lhGdzD) {
            kIhwbC = (282 - 282);
            fcKuQzyJ2[KMS9CO] = ' ';
            k = k + 1;
        }
        else if (F2fq1cQ[k][kIhwbC] != '\0') {
            fcKuQzyJ2[KMS9CO] = F2fq1cQ[k][kIhwbC];
            kIhwbC = kIhwbC + (243 - 242);
        }
        else {
            break;
        }
    }
    return (594 - 594);
}

