int onWeqvCUTS, RgeVHx, OlIVjb, nJb5nuDN;
char SVbo0QnIme1N [(795 - 490)], C26YWX9 [(392 - 87)];
char uME7Aw [(842 - 537)];

int main () {
    scanf ("%s", SVbo0QnIme1N);
    scanf ("%s", C26YWX9);
    for (onWeqvCUTS = (715 - 715); onWeqvCUTS < strlen (SVbo0QnIme1N); onWeqvCUTS++) {
        for (RgeVHx = (795 - 795); RgeVHx < strlen (C26YWX9); RgeVHx++) {
            if (SVbo0QnIme1N[onWeqvCUTS + RgeVHx] != C26YWX9[RgeVHx]) {
                break;
            }
        }
        if (RgeVHx == strlen (C26YWX9)) {
            nJb5nuDN = (317 - 316);
            OlIVjb = onWeqvCUTS;
            break;
        }
    }
    scanf ("%s", uME7Aw);
    if (nJb5nuDN == (827 - 826)) {
        for (onWeqvCUTS = (355 - 355); OlIVjb > onWeqvCUTS; onWeqvCUTS++) {
            printf ("%c", SVbo0QnIme1N[onWeqvCUTS]);
        }
        printf ("%s", uME7Aw);
        for (onWeqvCUTS = OlIVjb +strlen (C26YWX9); onWeqvCUTS < strlen (SVbo0QnIme1N); onWeqvCUTS++) {
            printf ("%c", SVbo0QnIme1N[onWeqvCUTS]);
        }
    }
    else {
        printf ("%s\n", SVbo0QnIme1N);
    }
    return 0;
}

