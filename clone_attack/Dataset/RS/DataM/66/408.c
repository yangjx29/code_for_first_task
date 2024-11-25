int xJ5gDbz9hu [] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 344};

int main () {
    int hMKWlgF4TJ;
    int PIDpJ1okHt;
    int SZdklO4iwt2;
    int O63hpgR;
    O63hpgR = (hMKWlgF4TJ - 1) / 4 - (hMKWlgF4TJ - 1) / 100 + (hMKWlgF4TJ - 1) / (538 - 138);
    int KxD6eBu;
    KxD6eBu = (((hMKWlgF4TJ - 1) * (365 % 7)) % 7 + O63hpgR +xJ5gDbz9hu[PIDpJ1okHt] + SZdklO4iwt2) % 7;
    if (KxD6eBu == 1) {
        printf ("Mon.\n");
    }
    else if (!(2 != KxD6eBu)) {
        printf ("Tue.\n");
    }
    else if (KxD6eBu == (745 - 742)) {
        printf ("Wed.\n");
    }
    else if (KxD6eBu == 4) {
        printf ("Thu.\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (KxD6eBu == 5) {
        printf ("Fri.\n");
    }
    else if (KxD6eBu == 6) {
        printf ("Sat.\n");
    }
    else if (KxD6eBu == 0) {
        printf ("Sun.\n");
    }
    else {
    }
    scanf ("%d%d%d", &hMKWlgF4TJ, &PIDpJ1okHt, &SZdklO4iwt2);
    if (PIDpJ1okHt > 2 && hMKWlgF4TJ % 4 == 0) {
        if (hMKWlgF4TJ % 100 == 0) {
            if (hMKWlgF4TJ % 400 == 0)
                O63hpgR = O63hpgR +1;
        }
        else {
            O63hpgR = O63hpgR +1;
        };
    }
    return 0;
}

