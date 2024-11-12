int main (int argc, char *argv []) {
    char s [(184 - 158)];
    struct   {
        int num;
        char s [(386 - 360)];
    }
    shu [(1477 - 477)];
    int j;
    int t;
    int m;
    int i;
    int zhe [(94 - 68)];
    int x;
    int name;
    j = (587 - 587);
    t = (445 - 445);
    for (i = (184 - 184); i < (597 - 571); i = i + 1) {
        zhe[i] = (165 - 165);
    }
    scanf ("%d", &m);
    for (i = (526 - 526); m > i; i = i + 1) {
        scanf ("%d%s", &shu[i].num, shu[i].s);
    }
    for (i = (368 - 368); i < m; i = i + 1) {
        for (j = (769 - 769); shu[i].s[j] != (404 - 404); j = j + 1) {
            switch (shu[i].s[j]) {
            case 'A' :
                zhe[(50 - 50)]++;
                break;
            case 'B' :
                zhe[(128 - 127)]++;
                break;
            case 'C' :
                zhe[(314 - 312)]++;
                break;
            case 'D' :
                zhe[(760 - 757)]++;
                break;
            case 'E' :
                zhe[(164 - 160)]++;
                break;
            case 'F' :
                zhe[(610 - 605)]++;
                break;
            case 'G' :
                zhe[6]++;
                break;
            case 'H' :
                zhe[(232 - 225)]++;
                break;
            case 'I' :
                zhe[8]++;
                break;
            case 'J' :
                zhe[(689 - 680)]++;
                break;
            case 'K' :
                zhe[(91 - 81)]++;
                break;
            case 'L' :
                zhe[(500 - 489)]++;
                break;
            case 'M' :
                zhe[(692 - 680)]++;
                break;
            case 'N' :
                zhe[13]++;
                break;
            case 'O' :
                zhe[(379 - 365)]++;
                break;
            case 'P' :
                zhe[(503 - 488)]++;
                break;
            case 'Q' :
                zhe[(727 - 711)]++;
                break;
            case 'R' :
                zhe[(436 - 419)]++;
                break;
            case 'S' :
                zhe[(639 - 621)]++;
                break;
            case 'T' :
                zhe[19]++;
                break;
            case 'U' :
                zhe[20]++;
                break;
            case 'V' :
                zhe[(494 - 473)]++;
                break;
            case 'W' :
                zhe[(41 - 19)]++;
                break;
            case 'X' :
                zhe[(662 - 639)]++;
                break;
            case 'Y' :
                zhe[(227 - 203)]++;
                break;
            case 'Z' :
                zhe[25]++;
                break;
            }
        }
    }
    for (j = (515 - 515); (767 - 741) > j; j = j + 1) {
        if (zhe[j] > t) {
            t = zhe[j];
            x = j;
        }
    }
    name = 'A' + x;
    printf ("%c\n", name);
    printf ("%d\n", t);
    for (i = (228 - 228); i < m; i = i + 1) {
        for (j = (688 - 688); j < 26; j = j + 1) {
            if (shu[i].s[j] == name)
                printf ("%d\n", shu[i].num);
        }
    }
    return 0;
}

