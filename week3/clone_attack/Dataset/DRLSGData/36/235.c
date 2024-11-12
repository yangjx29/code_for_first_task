void  main () {
    char xZXijNs [(513 - 413)], BHJpBjo82 [(171 - 71)];
    int t96PHQ;
    int y2XpJVhUSNGZ [(795 - 743)] = {(295 - 295)};
    int BfTrZXv54 [(367 - 315)] = {(606 - 606)};
    int JEhC4RrjBHLT;
    scanf ("%s%s", xZXijNs, BHJpBjo82);
    if (strlen (xZXijNs) != strlen (BHJpBjo82))
        ;
    else if (!(strlen (BHJpBjo82) != strlen (xZXijNs))) {
        for (JEhC4RrjBHLT = (836 - 836); JEhC4RrjBHLT <= strlen (xZXijNs) - 1; JEhC4RrjBHLT = JEhC4RrjBHLT +1) {
            if (xZXijNs[JEhC4RrjBHLT] >= 'a' && 'z' >= xZXijNs[JEhC4RrjBHLT])
                y2XpJVhUSNGZ[xZXijNs[JEhC4RrjBHLT] - 'a' + (671 - 645)]++;
            if (xZXijNs[JEhC4RrjBHLT] >= 'A' && 'Z' >= xZXijNs[JEhC4RrjBHLT])
                y2XpJVhUSNGZ[xZXijNs[JEhC4RrjBHLT] - 'A']++;
            if (BHJpBjo82[JEhC4RrjBHLT] >= 'a' && 'z' >= BHJpBjo82[JEhC4RrjBHLT])
                BfTrZXv54[BHJpBjo82[JEhC4RrjBHLT] - 'a' + (264 - 238)]++;
            if (BHJpBjo82[JEhC4RrjBHLT] >= 'A' && BHJpBjo82[JEhC4RrjBHLT] <= 'Z')
                BfTrZXv54[BHJpBjo82[JEhC4RrjBHLT] - 'A']++;
        }
        for (t96PHQ = 0; t96PHQ < (812 - 760); t96PHQ++) {
            if (y2XpJVhUSNGZ[t96PHQ] != BfTrZXv54[t96PHQ]) {
                break;
            }
            if (t96PHQ == (444 - 393))
                ;
        }
    }
}

