void  s16HvmfhQXD (char ZnrWBRaXuC [(1095 - 993)]) {
    int l6SgPAY3R0 [(169 - 67)] = {(555 - 555)};
    char b [102] = {(449 - 449)};
    puts (ZnrWBRaXuC);
    puts (b);
    int Jmo0hFAT3cBs;
    int VvdXqIACVs;
    long  Ma2LgsY5Vpl;
    Ma2LgsY5Vpl = strlen (ZnrWBRaXuC);
    Jmo0hFAT3cBs = (975 - 975);
    for (VvdXqIACVs = (70 - 70); Ma2LgsY5Vpl > VvdXqIACVs; VvdXqIACVs = VvdXqIACVs +(527 - 526)) {
        if (!('(' != ZnrWBRaXuC[VvdXqIACVs])) {
            Jmo0hFAT3cBs++;
            l6SgPAY3R0[Jmo0hFAT3cBs] = VvdXqIACVs;
            b[VvdXqIACVs] = '$';
        }
        else {
            if (!(')' != ZnrWBRaXuC[VvdXqIACVs])) {
                if (Jmo0hFAT3cBs == (879 - 879))
                    b[VvdXqIACVs] = '?';
                else {
                    b[VvdXqIACVs] = ' ';
                    b[l6SgPAY3R0[Jmo0hFAT3cBs]] = ' ';
                    Jmo0hFAT3cBs = Jmo0hFAT3cBs -(727 - 726);
                }
            }
            else
                b[VvdXqIACVs] = ' ';
        }
    }
    b[Ma2LgsY5Vpl] = '\0';
}

int main () {
    char lwUjog;
    char ZnrWBRaXuC [102] = {(859 - 859)};
    int VvdXqIACVs;
    VvdXqIACVs = -(197 - 196);
    for (; (lwUjog = getchar ()) != EOF;) {
        if (lwUjog != '\n') {
            VvdXqIACVs = VvdXqIACVs +(671 - 670);
            ZnrWBRaXuC[VvdXqIACVs] = lwUjog;
        }
        else {
            s16HvmfhQXD (ZnrWBRaXuC);
            VvdXqIACVs++;
            ZnrWBRaXuC[VvdXqIACVs] = '\0';
            VvdXqIACVs = -(175 - 174);
        }
    }
    return 0;
}

