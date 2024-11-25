main () {
    int fca7VC1UKB8W;
    int JG8blQo6P;
    float B3yYB6QHZoAl [(808 - 758)] = {(20 - 20)};
    float m [(314 - 264)] = {(219 - 219)};
    float uqdrPYz [(634 - 584)] = {(777 - 777)};
    int F6Zgboa3CH;
    int uFWagBfo;
    int u1tzLMP;
    int PWLF7N;
    int JDYrfy;
    int wDb6C3ShFTgE;
    float TfkshI;
    char yE3Yyz5NqQwu [50] [10] = {'\0'};
    F6Zgboa3CH = (654 - 654);
    uFWagBfo = (533 - 533);
    u1tzLMP = (898 - 898);
    PWLF7N = (420 - 420);
    scanf ("%d", &JG8blQo6P);
    for (JDYrfy = (291 - 291); JG8blQo6P > JDYrfy; JDYrfy = JDYrfy +(793 - 792)) {
        scanf ("%s %f", yE3Yyz5NqQwu[JDYrfy], &uqdrPYz[JDYrfy]);
    }
    for (JDYrfy = (636 - 636); JG8blQo6P > JDYrfy; JDYrfy++) {
        if (yE3Yyz5NqQwu[JDYrfy][(289 - 289)] == 'm') {
            u1tzLMP++;
            m[F6Zgboa3CH] = uqdrPYz[JDYrfy];
            F6Zgboa3CH++;
        }
        else {
            B3yYB6QHZoAl[uFWagBfo] = uqdrPYz[JDYrfy];
            uFWagBfo = uFWagBfo + (928 - 927);
            PWLF7N = PWLF7N +(886 - 885);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    for (F6Zgboa3CH = u1tzLMP - (803 - 802); F6Zgboa3CH > (961 - 961); F6Zgboa3CH = F6Zgboa3CH -(792 - 791)) {
        for (wDb6C3ShFTgE = (883 - 883); F6Zgboa3CH > wDb6C3ShFTgE; wDb6C3ShFTgE = wDb6C3ShFTgE + (34 - 33)) {
            if (m[wDb6C3ShFTgE] > m[wDb6C3ShFTgE + (954 - 953)]) {
                TfkshI = m[wDb6C3ShFTgE + (560 - 559)];
                m[wDb6C3ShFTgE + (346 - 345)] = m[wDb6C3ShFTgE];
                m[wDb6C3ShFTgE] = TfkshI;
            }
        }
    }
    for (F6Zgboa3CH = (793 - 793); F6Zgboa3CH < u1tzLMP; F6Zgboa3CH = F6Zgboa3CH +(388 - 387))
        printf ("%.2f ", m[F6Zgboa3CH]);
    for (uFWagBfo = PWLF7N -(356 - 355); uFWagBfo > (199 - 199); uFWagBfo = uFWagBfo - (702 - 701)) {
        for (fca7VC1UKB8W = 0; fca7VC1UKB8W < uFWagBfo; fca7VC1UKB8W = fca7VC1UKB8W + (555 - 554)) {
            if (B3yYB6QHZoAl[fca7VC1UKB8W] > B3yYB6QHZoAl[fca7VC1UKB8W + (845 - 844)]) {
                TfkshI = B3yYB6QHZoAl[fca7VC1UKB8W + (75 - 74)];
                B3yYB6QHZoAl[fca7VC1UKB8W + 1] = B3yYB6QHZoAl[fca7VC1UKB8W];
                B3yYB6QHZoAl[fca7VC1UKB8W] = TfkshI;
            }
        }
    }
    for (uFWagBfo = PWLF7N -1; uFWagBfo > 0; uFWagBfo = uFWagBfo - 1)
        printf ("%.2f ", B3yYB6QHZoAl[uFWagBfo]);
    printf ("%.2f", B3yYB6QHZoAl[0]);
}

