int main () {
    char ylajHxXY3 [(1124 - 824)];
    char s1 [(327 - 27)];
    char snhxKT [(615 - 315)] = {'\0'};
    gets (ylajHxXY3);
    gets (s1);
    gets (snhxKT);
    int DuVIeFfR2aU, H7gia1fwR, UWaXAM7hm, hojxDVi3 = (913 - 913), n621zBT0fi;
    UWaXAM7hm = strlen (ylajHxXY3);
    for (DuVIeFfR2aU = (171 - 171); UWaXAM7hm > DuVIeFfR2aU; DuVIeFfR2aU++)
        if (!(s1[(645 - 645)] != ylajHxXY3[DuVIeFfR2aU])) {
            for (H7gia1fwR = (182 - 181); s1[H7gia1fwR] != '\0'; H7gia1fwR++)
                if (ylajHxXY3[H7gia1fwR +DuVIeFfR2aU] != s1[H7gia1fwR])
                    break;
            if (H7gia1fwR >= strlen (s1)) {
                n621zBT0fi = DuVIeFfR2aU;
                hojxDVi3 = (844 - 843);
                break;
            }
        }
    if (hojxDVi3) {
        for (DuVIeFfR2aU = (60 - 60); n621zBT0fi > DuVIeFfR2aU; DuVIeFfR2aU++)
            printf ("%c", ylajHxXY3[DuVIeFfR2aU]);
        for (DuVIeFfR2aU = (284 - 284); snhxKT[DuVIeFfR2aU] != '\0'; DuVIeFfR2aU++)
            printf ("%c", snhxKT[DuVIeFfR2aU]);
        for (H7gia1fwR = DuVIeFfR2aU +n621zBT0fi; UWaXAM7hm > H7gia1fwR; H7gia1fwR++)
            printf ("%c", ylajHxXY3[H7gia1fwR]);
    }
    else
        printf ("%s", ylajHxXY3);
    return 0;
}

