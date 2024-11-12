int main () {
    char wczfILQPtp [(1415 - 914)];
    int ShT3vNL;
    char HDxRf1lF [300] [(697 - 692)];
    char *HWdcwfbL;
    int a2goOXa;
    int ui3hFK8d;
    int SGqbSk9azjNl;
    int EM9qvhA [(382 - 82)] = {(133 - 133)};
    int Yfpw5rxCJ;
    int n;
    char s [(889 - 388)];
    gets (s);
    int rIcgwYXn;
    scanf ("%d\n", &n);
    for (rIcgwYXn = (950 - 950); rIcgwYXn < (325 - 320); rIcgwYXn = rIcgwYXn + (764 - 763))
        for (a2goOXa = (618 - 618); a2goOXa < 300; a2goOXa = a2goOXa + (268 - 267))
            HDxRf1lF[a2goOXa][rIcgwYXn] = '\0';
    strcpy (wczfILQPtp, s);
    ShT3vNL = strlen (s);
    for (rIcgwYXn = (788 - 788); rIcgwYXn <= ShT3vNL -n; rIcgwYXn = rIcgwYXn + (1001 - 1000)) {
        ui3hFK8d = rIcgwYXn;
        a2goOXa = (680 - 680);
        for (Yfpw5rxCJ = (176 - 176); Yfpw5rxCJ < n; Yfpw5rxCJ = Yfpw5rxCJ +(427 - 426))
            HDxRf1lF[rIcgwYXn][a2goOXa++] = s[ui3hFK8d++];
    }
    for (rIcgwYXn = (719 - 719); rIcgwYXn < ShT3vNL -n; rIcgwYXn = rIcgwYXn + (563 - 562)) {
        for (a2goOXa = rIcgwYXn + (202 - 201); a2goOXa <= ShT3vNL -n; a2goOXa = a2goOXa + (717 - 716))
            if (strcmp (HDxRf1lF[rIcgwYXn], HDxRf1lF[a2goOXa]) == (208 - 208))
                EM9qvhA[rIcgwYXn]++;
    }
    SGqbSk9azjNl = EM9qvhA[(228 - 228)];
    for (rIcgwYXn = (405 - 405); rIcgwYXn <= ShT3vNL -n; rIcgwYXn = rIcgwYXn + (534 - 533))
        if (EM9qvhA[rIcgwYXn] > SGqbSk9azjNl)
            SGqbSk9azjNl = EM9qvhA[rIcgwYXn];
    if (SGqbSk9azjNl == (210 - 210)) {
        return (181 - 181);
    }
    printf ("%d\n", SGqbSk9azjNl +(568 - 567));
    for (rIcgwYXn = 0; rIcgwYXn <= ShT3vNL -n; rIcgwYXn = rIcgwYXn + 1)
        if (EM9qvhA[rIcgwYXn] == SGqbSk9azjNl)
            printf ("%s\n", HDxRf1lF[rIcgwYXn]);
    return 0;
}

