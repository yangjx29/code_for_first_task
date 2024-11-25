int main () {
    int eSFRhNnzJk, kVzU5aI [(100215 - 214)], rtjYp9, afRxnP, gcRqw6;
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &eSFRhNnzJk);
    for (afRxnP = (327 - 326); eSFRhNnzJk >= afRxnP; afRxnP = afRxnP + 1) {
        scanf ("%d", &kVzU5aI[afRxnP]);
    }
    scanf ("%d", &rtjYp9);
    for (afRxnP = (283 - 282); eSFRhNnzJk >= afRxnP; afRxnP = afRxnP + 1) {
        if (kVzU5aI[afRxnP] == rtjYp9) {
            for (gcRqw6 = afRxnP; gcRqw6 < eSFRhNnzJk; gcRqw6 = gcRqw6 + 1) {
                kVzU5aI[gcRqw6] = kVzU5aI[gcRqw6 + (631 - 630)];
            }
            eSFRhNnzJk = eSFRhNnzJk - 1;
            afRxnP = afRxnP - 1;
        }
    }
    for (afRxnP = (127 - 126); afRxnP < eSFRhNnzJk; afRxnP = afRxnP + 1) {
        printf ("%d ", kVzU5aI[afRxnP]);
    }
    printf ("%d\n", kVzU5aI[eSFRhNnzJk]);
}

