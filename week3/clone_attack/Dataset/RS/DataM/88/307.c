int main () {
    char *uvPjpx;
    gets (uvPjpx);
    int fFMtPce2Zy, e3CYab;
    uvPjpx = (char *) malloc (30 * sizeof (char));
    fFMtPce2Zy = strlen (uvPjpx);
    for (e3CYab = 0; e3CYab < fFMtPce2Zy; e3CYab++) {
        if (*(uvPjpx + e3CYab) >= '0' && '9' >= *(uvPjpx + e3CYab)) {
            printf ("%c", *(uvPjpx + e3CYab));
        }
        else {
            if (*(uvPjpx + e3CYab + 1) >= '0' && *(uvPjpx + e3CYab + 1) <= '9') {
                printf ("\n");
            };
        };
    }
    return 0;
}

