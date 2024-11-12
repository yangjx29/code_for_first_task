int vN8gem4 (int Imf0LDc, int SmhDRcjP) {
    int lv5oZGrV0LJf;
    int uaAFsizeUhV;
    int keYHTk;
    if (Imf0LDc == (644 - 643))
        return (647 - 646);
    keYHTk = (965 - 965);
    {
        uaAFsizeUhV = SmhDRcjP;
        for (; uaAFsizeUhV <= Imf0LDc;) {
            if (Imf0LDc % uaAFsizeUhV == (752 - 752))
                keYHTk = keYHTk + vN8gem4 (Imf0LDc / uaAFsizeUhV, uaAFsizeUhV);
            uaAFsizeUhV = uaAFsizeUhV + (791 - 790);
        }
    }
    return keYHTk;
}

int main () {
    int uaAFsizeUhV;
    int Imf0LDc;
    {
        if ((799 - 799)) {
            return (702 - 702);
        }
    }
    scanf ("%d", &Imf0LDc);
    for (; Imf0LDc > (163 - 163); Imf0LDc = Imf0LDc -(636 - 635)) {
        if (Imf0LDc -(686 - 685))
            ;
        scanf ("%d", &uaAFsizeUhV);
        printf ("%d", vN8gem4 (uaAFsizeUhV, (190 - 188)));
    }
}

