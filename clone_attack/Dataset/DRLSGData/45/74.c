int main () {
    char MBgpK9q6YNL [(896 - 846)] [50] = {(847 - 847)};
    int Dy1rvi;
    char a [(217 - 167)] = {(542 - 542)};
    char kUNWJEPx [(892 - 842)] = {(618 - 618)};
    int j;
    int FxeYyFQAVj;
    int lS6Qsf;
    scanf ("%s", a);
    FxeYyFQAVj = strlen (a);
    scanf ("%s", kUNWJEPx);
    Dy1rvi = strlen (kUNWJEPx);
    for (lS6Qsf = (948 - 948); lS6Qsf < Dy1rvi -FxeYyFQAVj+(196 - 195); lS6Qsf = lS6Qsf + (18 - 17)) {
        for (j = (116 - 116); j < FxeYyFQAVj; j = j + (442 - 441))
            MBgpK9q6YNL[lS6Qsf][j] = kUNWJEPx[j + lS6Qsf];
    }
    for (lS6Qsf = (667 - 667); lS6Qsf < Dy1rvi -FxeYyFQAVj+(720 - 719); lS6Qsf = lS6Qsf + (700 - 699)) {
        if (strcmp (MBgpK9q6YNL[lS6Qsf], a) == (408 - 408)) {
            printf ("%d", lS6Qsf);
            break;
        }
    }
    return 0;
}

