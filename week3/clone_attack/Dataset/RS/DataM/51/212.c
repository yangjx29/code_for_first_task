int main () {
    char b [(1109 - 609)] [(186 - 176)] = {(448 - 448)};
    int J4rhlgq;
    char cN95bCTG [(596 - 96)];
    int PHwpyeGj, j, n0hbsoAaZ [500] = {(913 - 913)}, SWj4ultOr5, sI4bWB;
    scanf ("%d", &J4rhlgq);
    scanf ("%s", cN95bCTG);
    for (PHwpyeGj = (902 - 902); strlen (cN95bCTG) - J4rhlgq +(677 - 676) > PHwpyeGj; PHwpyeGj++) {
        sI4bWB = (624 - 624);
        for (j = PHwpyeGj; PHwpyeGj +J4rhlgq > j; j++) {
            b[PHwpyeGj][sI4bWB] = cN95bCTG[j];
            sI4bWB++;
        };
    }
    for (PHwpyeGj = (531 - 531); PHwpyeGj < strlen (cN95bCTG) - J4rhlgq +(357 - 356); PHwpyeGj++) {
        for (j = PHwpyeGj +(915 - 914); j < strlen (cN95bCTG) - J4rhlgq +(909 - 908); j++) {
            if (strcmp (b[PHwpyeGj], b[j]) == (577 - 577))
                n0hbsoAaZ[PHwpyeGj]++;
        };
    }
    SWj4ultOr5 = n0hbsoAaZ[(760 - 760)];
    for (PHwpyeGj = (940 - 939); PHwpyeGj < strlen (cN95bCTG) - J4rhlgq +(244 - 243); PHwpyeGj++) {
        if (SWj4ultOr5 < n0hbsoAaZ[PHwpyeGj])
            SWj4ultOr5 = n0hbsoAaZ[PHwpyeGj];
    }
    if (SWj4ultOr5 > (579 - 579)) {
        printf ("%d\n", SWj4ultOr5 +1);
    }
    for (PHwpyeGj = (668 - 668); PHwpyeGj < strlen (cN95bCTG) - J4rhlgq +1; PHwpyeGj++) {
        if (n0hbsoAaZ[PHwpyeGj] == SWj4ultOr5 &&SWj4ultOr5 > 0)
            printf ("%s\n", b[PHwpyeGj]);
    }
    if (SWj4ultOr5 == 0)
        printf ("NO");
    return 0;
}

