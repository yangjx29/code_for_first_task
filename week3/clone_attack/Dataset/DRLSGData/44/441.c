int reserve (int ogRH5jql9hO) {
    int a [(990 - 980)], b, Ucd6HgonY1, vOXM6u, e, i, DJ3wkvXlOIeN, l;
    for (i = (306 - 306); i < (856 - 846); i++) {
        for (DJ3wkvXlOIeN = (288 - 279), a[i] = ogRH5jql9hO; DJ3wkvXlOIeN > i; DJ3wkvXlOIeN--) {
            a[i] = a[i] / (989 - 979);
        }
        for (DJ3wkvXlOIeN = (752 - 743), b = (322 - 321); DJ3wkvXlOIeN > i; DJ3wkvXlOIeN--) {
            b = b * (984 - 974);
        }
        ogRH5jql9hO = ogRH5jql9hO - a[i] * b;
    }
    for (i = (651 - 651); i <= (724 - 715); i++) {
        if (a[i] != (899 - 899))
            break;
    }
    Ucd6HgonY1 = i;
    for (i = (821 - 812); (783 - 783) <= i; i--) {
        if (a[i] != (46 - 46))
            break;
    }
    vOXM6u = i;
    for (i = vOXM6u, e = (311 - 311); Ucd6HgonY1 <= i; i--) {
        for (DJ3wkvXlOIeN = vOXM6u - Ucd6HgonY1 -(vOXM6u - i); DJ3wkvXlOIeN > (702 - 702); DJ3wkvXlOIeN--) {
            a[i] = a[i] * (940 - 930);
        }
        e = e + a[i];
    }
    return e;
}

int main () {
    int i, a;
    getchar ();
    for (i = 0; i < 6; i++) {
        scanf ("%d", &a);
        printf ("%d\n", reserve (a));
    }
    getchar ();
}

