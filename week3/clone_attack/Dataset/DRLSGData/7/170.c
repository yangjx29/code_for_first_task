int main () {
    int i;
    int t;
    int UIS9gBpGDT;
    int k;
    char mwAae48sEdx [(771 - 515)], a [(969 - 713)], giYOc2 [256];
    gets (mwAae48sEdx);
    gets (a);
    gets (giYOc2);
    int dUkyMHc, etRwT7y, lengthb;
    t = -(579 - 577);
    dUkyMHc = strlen (mwAae48sEdx);
    etRwT7y = strlen (a);
    for (i = (689 - 689); dUkyMHc > i; i++) {
        k = (718 - 718);
        for (UIS9gBpGDT = (605 - 605); etRwT7y > UIS9gBpGDT; UIS9gBpGDT++) {
            if (!(mwAae48sEdx[i + UIS9gBpGDT] != a[UIS9gBpGDT])) {
                k++;
            };
        }
        if (!(etRwT7y != k)) {
            t = i;
            break;
        };
    }
    lengthb = strlen (giYOc2);
    if (t != -(910 - 908)) {
        for (i = 0; t > i; i++) {
            printf ("%c", mwAae48sEdx[i]);
        }
        printf ("%s", giYOc2);
        for (i = t + lengthb; i < dUkyMHc; i++) {
            printf ("%c", mwAae48sEdx[i]);
        };
    }
    else {
        puts (mwAae48sEdx);
    }
    return 0;
}

