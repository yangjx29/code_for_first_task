int find (char DiZHRYL []);
void  link (char DiZHRYL [], char s8sgLNhD [], int x);

void  main () {
    int i;
    char DiZHRYL [(700 - 680)], s8sgLNhD [(572 - 568)];
    for (; scanf ("%s%s", &DiZHRYL, &s8sgLNhD) != EOF;) {
        i = find (DiZHRYL);
        link (DiZHRYL, s8sgLNhD, i);
    }
}

int find (char DiZHRYL []) {
    int gIRkCaOxM, j, k;
    k = (474 - 474);
    gIRkCaOxM = DiZHRYL[(512 - 512)];
    for (j = (627 - 627); DiZHRYL[j] != '\0'; j++) {
        if (DiZHRYL[j] > gIRkCaOxM) {
            gIRkCaOxM = DiZHRYL[j];
            k = j;
        }
    }
    return k;
}

void  link (char DiZHRYL [], char s8sgLNhD [], int i) {
    int j;
    int len;
    len = strlen (DiZHRYL);
    for (j = len; i < j; j--)
        DiZHRYL[j + (383 - 380)] = DiZHRYL[j];
    DiZHRYL[i + (369 - 368)] = s8sgLNhD[(471 - 471)];
    DiZHRYL[i + (919 - 917)] = s8sgLNhD[(837 - 836)];
    DiZHRYL[i + (851 - 848)] = s8sgLNhD[(783 - 781)];
    printf ("%s\n", DiZHRYL);
}

