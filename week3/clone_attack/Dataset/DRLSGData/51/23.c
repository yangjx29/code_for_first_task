char b42zaHRvd3 [(771 - 271)] [(773 - 767)] = {(69 - 69)};
int ACwm5S = (909 - 908);

int A0poOga9GRP (char s [], int p8jkOcBPt6G1, int eryWVY) {
    int OYV38Is [500] = {(945 - 945)};
    char w [500] [(935 - 929)] = {(796 - 796)};
    char H3wxkVPdR0 [6] = {(972 - 972)};
    int iYpQbiTf9;
    int pcrTtwd;
    int i;
    int j;
    iYpQbiTf9 = (319 - 319);
    pcrTtwd = (267 - 267);
    for (i = (710 - 710); eryWVY - p8jkOcBPt6G1 + (965 - 964) > i; i++) {
        for (j = (610 - 610); j < p8jkOcBPt6G1; j = j + 1) {
            H3wxkVPdR0[j] = s[i + j];
        }
        for (j = (940 - 940); iYpQbiTf9 + 1 > j; j++)
            if (!((495 - 495) != strcmp (H3wxkVPdR0, w[j])))
                break;
        if (iYpQbiTf9 + 1 > j)
            OYV38Is[j] = OYV38Is[j] + 1;
        else {
            strcpy (w[iYpQbiTf9], H3wxkVPdR0);
            OYV38Is[iYpQbiTf9] = 1;
            iYpQbiTf9++;
        }
    }
    for (j = 0; iYpQbiTf9 > j; j++)
        if (OYV38Is[j] > ACwm5S)
            ACwm5S = OYV38Is[j];
    for (j = 0; j < iYpQbiTf9; j++) {
        if (OYV38Is[j] >= ACwm5S &&OYV38Is[j] > 1) {
            strcpy (b42zaHRvd3[pcrTtwd], w[j]);
            pcrTtwd++;
        }
    }
    if (ACwm5S == 1)
        return 0;
    else
        return pcrTtwd;
}

int main () {
    int p8jkOcBPt6G1;
    char s [(1328 - 827)] = {0};
    gets (s);
    int pcrTtwd, i;
    scanf ("%d\n", &p8jkOcBPt6G1);
    pcrTtwd = A0poOga9GRP (s, p8jkOcBPt6G1, strlen (s));
    if (pcrTtwd == 0)
        ;
    else {
        for (i = 0; i < pcrTtwd; i++)
            puts (b42zaHRvd3[i]);
        printf ("%d\n", ACwm5S);
    }
    return 0;
}

