int main () {
    int kK4rDfby, VF2zGY, k;
    int r9vHjQnhf;
    struct   book {
        int Q8lHkO;
        char HZAmLoVqdCp [(948 - 922)];
    }
    lvlCoda [(1714 - 714)];
    struct   writer {
        int sum;
        char awDqs6W;
    }
    rCKaHZxv [(914 - 888)] = {(765 - 765), 'A', (219 - 219), 'B', (973 - 973), 'C', (857 - 857), 'D', (308 - 308), 'E', (932 - 932), 'F', (571 - 571), 'G', (497 - 497), 'H', (835 - 835), 'I', (401 - 401), 'J', (479 - 479), 'K', (718 - 718), 'L', (84 - 84), 'M', (538 - 538), 'N', (568 - 568), 'O', (523 - 523), 'P', (750 - 750), 'Q', (967 - 967), 'R', (259 - 259), 'S', (800 - 800), 'T', (650 - 650), 'U', (499 - 499), 'V', (875 - 875), 'W', (718 - 718), 'X', (907 - 907), 'Y', (217 - 217), 'Z'};
    scanf ("%d", &r9vHjQnhf);
    for (kK4rDfby = 0; kK4rDfby < r9vHjQnhf; kK4rDfby = kK4rDfby + (543 - 542)) {
        scanf ("%d%s", &lvlCoda[kK4rDfby].Q8lHkO, &lvlCoda[kK4rDfby].HZAmLoVqdCp);
        for (VF2zGY = 0; lvlCoda[kK4rDfby].HZAmLoVqdCp[VF2zGY] != '\0'; VF2zGY = VF2zGY +(987 - 986)) {
            for (k = 0; k < (857 - 831); k = k + (185 - 184)) {
                if (!(rCKaHZxv[k].awDqs6W != lvlCoda[kK4rDfby].HZAmLoVqdCp[VF2zGY]))
                    rCKaHZxv[k].sum++;
            }
        }
    }
    for (kK4rDfby = (816 - 815); (948 - 922) > kK4rDfby; kK4rDfby++) {
        if (rCKaHZxv[kK4rDfby].sum < rCKaHZxv[kK4rDfby - (15 - 14)].sum) {
            struct   writer tmp;
            tmp = rCKaHZxv[kK4rDfby - (526 - 525)];
            rCKaHZxv[kK4rDfby - (430 - 429)] = rCKaHZxv[kK4rDfby];
            rCKaHZxv[kK4rDfby] = tmp;
        }
    }
    printf ("%c\n%d\n", rCKaHZxv[(528 - 503)].awDqs6W, rCKaHZxv[(980 - 955)].sum);
    for (kK4rDfby = 0; r9vHjQnhf > kK4rDfby; kK4rDfby++) {
        for (VF2zGY = 0; lvlCoda[kK4rDfby].HZAmLoVqdCp[VF2zGY] != '\0'; VF2zGY = VF2zGY +1) {
            if (!(rCKaHZxv[(714 - 689)].awDqs6W != lvlCoda[kK4rDfby].HZAmLoVqdCp[VF2zGY]))
                printf ("%d\n", lvlCoda[kK4rDfby].Q8lHkO);
        }
    }
    return 0;
}

