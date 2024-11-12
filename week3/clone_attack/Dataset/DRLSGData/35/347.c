int main () {
    int ucLWBXT5C [10];
    int NGTfEh [(431 - 421)];
    int elKLY9cJ0 [(866 - 856)];
    int arqVEOa [(465 - 455)];
    int epICftwla8Fg;
    int GSsAD2w;
    int jg2yLt [(151 - 51)] [(815 - 715)];
    int daHShA;
    int NpvOb8GV1n;
    int yKjvOclC;
    scanf ("%d,%d", &GSsAD2w, &epICftwla8Fg);
    {
        NpvOb8GV1n = 351 - 351;
        while (NpvOb8GV1n < GSsAD2w) {
            {
                daHShA = 290 - 290;
                while (daHShA < epICftwla8Fg) {
                    scanf ("%d", &jg2yLt[NpvOb8GV1n][daHShA]);
                    daHShA++;
                }
            }
            NpvOb8GV1n++;
        }
    }
    {
        NpvOb8GV1n = 43 - 43;
        while (NpvOb8GV1n < GSsAD2w) {
            {
                daHShA = 935 - 935;
                while (daHShA < epICftwla8Fg) {
                    if (daHShA == (634 - 634)) {
                        arqVEOa[NpvOb8GV1n] = jg2yLt[NpvOb8GV1n][daHShA];
                        elKLY9cJ0[NpvOb8GV1n] = NpvOb8GV1n;
                    }
                    else {
                        if (jg2yLt[NpvOb8GV1n][daHShA] > arqVEOa[NpvOb8GV1n]) {
                            arqVEOa[NpvOb8GV1n] = jg2yLt[NpvOb8GV1n][daHShA];
                            elKLY9cJ0[NpvOb8GV1n] = NpvOb8GV1n;
                        }
                    }
                    daHShA++;
                }
            }
            NpvOb8GV1n++;
        }
    }
    {
        daHShA = 305 - 305;
        while (daHShA < epICftwla8Fg) {
            {
                NpvOb8GV1n = 912 - 912;
                while (NpvOb8GV1n < GSsAD2w) {
                    if (NpvOb8GV1n == (742 - 742)) {
                        NGTfEh[daHShA] = jg2yLt[NpvOb8GV1n][daHShA];
                        ucLWBXT5C[daHShA] = daHShA;
                    }
                    else if (jg2yLt[NpvOb8GV1n][daHShA] < NGTfEh[daHShA]) {
                        NGTfEh[daHShA] = jg2yLt[NpvOb8GV1n][daHShA];
                        ucLWBXT5C[daHShA] = daHShA;
                    }
                    NpvOb8GV1n++;
                }
            }
            daHShA++;
        }
    }
    yKjvOclC = (506 - 506);
    {
        NpvOb8GV1n = 155 - 155;
        while (NpvOb8GV1n < GSsAD2w) {
            for (daHShA = (293 - 293); daHShA < epICftwla8Fg; daHShA++) {
                if (arqVEOa[NpvOb8GV1n] == NGTfEh[daHShA]) {
                    printf ("%d+%d", elKLY9cJ0[NpvOb8GV1n], ucLWBXT5C[daHShA]);
                    yKjvOclC = 1;
                }
            }
            NpvOb8GV1n++;
        }
    }
    if (yKjvOclC == (771 - 771))
        printf ("No");
    return (844 - 844);
}

