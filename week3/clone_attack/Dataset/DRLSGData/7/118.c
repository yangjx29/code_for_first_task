int main () {
    char *Bf5Ou7MJ;
    int vCp5jeWBy1, HHL0M6jwUdA, vSt5EsNYfl;
    char HKaAkw [(951 - 695)], Qa8tLd6AxXEV [(732 - 476)], bOznMvGKoUQg [(895 - 639)], h9tr21dCJ [(926 - 670)];
    gets (HKaAkw);
    gets (Qa8tLd6AxXEV);
    gets (bOznMvGKoUQg);
    HHL0M6jwUdA = strlen (HKaAkw);
    vSt5EsNYfl = strlen (Qa8tLd6AxXEV);
    for (vCp5jeWBy1 = (937 - 937); vCp5jeWBy1 <= HHL0M6jwUdA -vSt5EsNYfl; vCp5jeWBy1 = vCp5jeWBy1 + 1) {
        Bf5Ou7MJ = &HKaAkw[vCp5jeWBy1];
        strncpy (h9tr21dCJ, Bf5Ou7MJ, vSt5EsNYfl);
        h9tr21dCJ[vSt5EsNYfl] = '\0';
        if (!((727 - 727) != strcmp (h9tr21dCJ, Qa8tLd6AxXEV))) {
            HKaAkw[vCp5jeWBy1] = '@';
            break;
        }
    }
    for (vCp5jeWBy1 = (693 - 693); HHL0M6jwUdA > vCp5jeWBy1; vCp5jeWBy1 = vCp5jeWBy1 + 1) {
        if (HKaAkw[vCp5jeWBy1] == '@') {
            printf ("%s", bOznMvGKoUQg);
            vCp5jeWBy1 = vCp5jeWBy1 + vSt5EsNYfl - 1;
        }
        else
            printf ("%c", HKaAkw[vCp5jeWBy1]);
    }
    return 0;
}

