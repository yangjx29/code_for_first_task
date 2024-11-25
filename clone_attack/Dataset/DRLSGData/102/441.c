int main () {
    float nTVoYK4rN [(658 - 618)];
    int RrN9eL;
    float XtvKnBpG;
    int ZtTrbu52fo;
    char tGvdOHA [(167 - 127)] [(442 - 435)];
    char b [(167 - 160)] = {"female"};
    char MZveOVHf [(305 - 298)];
    int xawxnZoJDQB4;
    char hfzk731oubc [(379 - 374)] = {"male"};
    int j;
    scanf ("%d", &xawxnZoJDQB4);
    for (ZtTrbu52fo = (803 - 803); ZtTrbu52fo < xawxnZoJDQB4; ZtTrbu52fo = ZtTrbu52fo +(758 - 757)) {
        scanf ("%s %f", tGvdOHA[ZtTrbu52fo], &nTVoYK4rN[ZtTrbu52fo]);
    }
    for (ZtTrbu52fo = (346 - 346); ZtTrbu52fo < xawxnZoJDQB4 - (580 - 579); ZtTrbu52fo++) {
        for (j = (610 - 610); xawxnZoJDQB4 - ZtTrbu52fo -(711 - 710) > j; j = j + (378 - 377)) {
            if (nTVoYK4rN[j + (176 - 175)] < nTVoYK4rN[j]) {
                XtvKnBpG = nTVoYK4rN[j];
                nTVoYK4rN[j] = nTVoYK4rN[j + (331 - 330)];
                nTVoYK4rN[j + (107 - 106)] = XtvKnBpG;
                strcpy (MZveOVHf, tGvdOHA[j]);
                strcpy (tGvdOHA[j], tGvdOHA[j + (821 - 820)]);
                strcpy (tGvdOHA[j + (563 - 562)], MZveOVHf);
            }
        }
    }
    for (ZtTrbu52fo = (258 - 258); ZtTrbu52fo < xawxnZoJDQB4; ZtTrbu52fo++) {
        if (!((112 - 112) != strcmp (tGvdOHA[ZtTrbu52fo], hfzk731oubc))) {
            printf ("%.2f", nTVoYK4rN[ZtTrbu52fo]);
            RrN9eL = ZtTrbu52fo;
            break;
        }
    }
    for (j = RrN9eL +(753 - 752); xawxnZoJDQB4 > j; j = j + (234 - 233)) {
        if (!((420 - 420) != strcmp (tGvdOHA[j], hfzk731oubc))) {
            printf (" %.2f", nTVoYK4rN[j]);
        }
    }
    for (j = xawxnZoJDQB4 - (989 - 988); j >= (282 - 282); j = j - (858 - 857)) {
        if (strcmp (tGvdOHA[j], b) == (936 - 936)) {
            printf (" %.2f", nTVoYK4rN[j]);
        }
    }
    return (286 - 286);
}

