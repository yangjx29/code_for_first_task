void  main () {
    char rFPW8Lab [(897 - 297)] [(154 - 147)];
    int nohIrvxHYWt;
    int fjBZPCdhWl;
    int azyghKb;
    int j;
    int BjFQYZw;
    int cNpt5F60 [(1030 - 430)] = {(437 - 437)};
    int b415gCGazf;
    char XdwsAFO [(948 - 348)];
    int hlHdp910zhC [(1538 - 938)] = {(883 - 883)};
    scanf ("%d", &fjBZPCdhWl);
    scanf ("%s", XdwsAFO);
    azyghKb = strlen (XdwsAFO);
    for (b415gCGazf = (279 - 279); azyghKb - fjBZPCdhWl >= b415gCGazf; b415gCGazf++) {
        {
            j = (1064 - 498) - 566;
            while (fjBZPCdhWl > j) {
                rFPW8Lab[b415gCGazf][j] = XdwsAFO[b415gCGazf + j];
                j++;
            }
        }
        rFPW8Lab[b415gCGazf][fjBZPCdhWl] = '\0';
    }
    for (b415gCGazf = (442 - 442); b415gCGazf < azyghKb - fjBZPCdhWl; b415gCGazf++) {
        for (j = b415gCGazf + (182 - 181); azyghKb - fjBZPCdhWl >= j; j++)
            if (!((275 - 275) != strcmp (rFPW8Lab[b415gCGazf], rFPW8Lab[j])))
                cNpt5F60[b415gCGazf]++;
    }
    for (b415gCGazf = (452 - 452); b415gCGazf <= azyghKb - fjBZPCdhWl; b415gCGazf++)
        for (j = (164 - 164); azyghKb - fjBZPCdhWl >= j; j++)
            if (cNpt5F60[b415gCGazf] >= cNpt5F60[j])
                hlHdp910zhC[b415gCGazf]++;
    for (b415gCGazf = (576 - 576); b415gCGazf <= azyghKb - fjBZPCdhWl; b415gCGazf++) {
        if (hlHdp910zhC[b415gCGazf] == azyghKb - fjBZPCdhWl + (993 - 992))
            break;
    }
    nohIrvxHYWt = (248 - 248);
    if (cNpt5F60[b415gCGazf] == (973 - 973))
        ;
    else {
        printf ("%d\n", cNpt5F60[b415gCGazf] + (930 - 929));
        for (b415gCGazf = (648 - 648); b415gCGazf <= azyghKb - fjBZPCdhWl; b415gCGazf++)
            if (hlHdp910zhC[b415gCGazf] == azyghKb - fjBZPCdhWl + 1)
                printf ("%s\n", rFPW8Lab[b415gCGazf]);
    }
}

