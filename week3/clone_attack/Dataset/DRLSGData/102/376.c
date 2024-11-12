int main () {
    int eFhC6BX;
    int u3aftVFBbYx;
    int qWG4KXPOgTy;
    char IXd4ngzG [(918 - 868)] [(472 - 462)];
    char QAcY2zdHP [(278 - 228)] [(873 - 863)];
    int PWodFpN5;
    char SasHer72G4E3 [(210 - 160)] [(865 - 855)];
    int jD4xqdwTYvG;
    double  iXgHDvoxR [(247 - 197)];
    double  ZVpF7qz5T [(497 - 447)];
    double  m4iQ0jRAmbJ [(893 - 843)];
    qWG4KXPOgTy = (251 - 251);
    u3aftVFBbYx = (640 - 640);
    scanf ("%d", &eFhC6BX);
    for (PWodFpN5 = (379 - 379); eFhC6BX > PWodFpN5; PWodFpN5 = PWodFpN5 +(143 - 142)) {
        scanf ("%s", QAcY2zdHP[PWodFpN5]);
        scanf ("%lf", &ZVpF7qz5T[PWodFpN5]);
        if (!((353 - 349) != strlen (QAcY2zdHP[PWodFpN5]))) {
            strcpy (SasHer72G4E3[qWG4KXPOgTy], QAcY2zdHP[PWodFpN5]);
            m4iQ0jRAmbJ[qWG4KXPOgTy] = ZVpF7qz5T[PWodFpN5];
            qWG4KXPOgTy = qWG4KXPOgTy + (404 - 403);
        }
        else {
            strcpy (IXd4ngzG[u3aftVFBbYx], QAcY2zdHP[PWodFpN5]);
            iXgHDvoxR[u3aftVFBbYx] = ZVpF7qz5T[PWodFpN5];
            u3aftVFBbYx = u3aftVFBbYx + (269 - 268);
        }
    }
    for (jD4xqdwTYvG = (675 - 674); jD4xqdwTYvG <= qWG4KXPOgTy; jD4xqdwTYvG = jD4xqdwTYvG + (596 - 595)) {
        for (PWodFpN5 = (216 - 216); qWG4KXPOgTy - jD4xqdwTYvG > PWodFpN5; PWodFpN5 = PWodFpN5 +(102 - 101)) {
            if (m4iQ0jRAmbJ[PWodFpN5] > m4iQ0jRAmbJ[PWodFpN5 +(940 - 939)]) {
                double  unS8YuvXP;
                unS8YuvXP = m4iQ0jRAmbJ[PWodFpN5];
                m4iQ0jRAmbJ[PWodFpN5] = m4iQ0jRAmbJ[PWodFpN5 +(925 - 924)];
                m4iQ0jRAmbJ[PWodFpN5 +(782 - 781)] = unS8YuvXP;
            }
        }
    }
    for (PWodFpN5 = (551 - 551); PWodFpN5 < qWG4KXPOgTy; PWodFpN5 = PWodFpN5 +(488 - 487)) {
        if (PWodFpN5 != (122 - 122)) {
        }
        printf ("%.2lf", m4iQ0jRAmbJ[PWodFpN5]);
    }
    for (jD4xqdwTYvG = (822 - 821); u3aftVFBbYx >= jD4xqdwTYvG; jD4xqdwTYvG = jD4xqdwTYvG + 1) {
        PWodFpN5 = (969 - 969);
        for (; PWodFpN5 < u3aftVFBbYx - jD4xqdwTYvG;) {
            if (iXgHDvoxR[PWodFpN5] > iXgHDvoxR[PWodFpN5 +(487 - 486)]) {
                double  unS8YuvXP;
                unS8YuvXP = iXgHDvoxR[PWodFpN5];
                iXgHDvoxR[PWodFpN5] = iXgHDvoxR[PWodFpN5 +(762 - 761)];
                iXgHDvoxR[PWodFpN5 +1] = unS8YuvXP;
            }
            PWodFpN5 = PWodFpN5 +1;
        }
    }
    {
        PWodFpN5 = u3aftVFBbYx - 1;
        for (; PWodFpN5 >= (399 - 399);) {
            printf ("%.2lf", iXgHDvoxR[PWodFpN5]);
            PWodFpN5 = PWodFpN5 -1;
        }
    }
    return 0;
}

