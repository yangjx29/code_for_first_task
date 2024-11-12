int main () {
    char m [200];
    char t [26];
    int n [26] = {0}, DRNC9MmXn7U, j, p;
    gets (m);
    t[0] = 'a';
    t[1] = 'b';
    t[2] = 'c';
    t[3] = 'd';
    t[4] = 'e';
    t[5] = 'f';
    t[6] = 'g';
    t[7] = 'h';
    t[8] = 'i';
    t[9] = 'j';
    t[10] = 'k';
    t[11] = 'l';
    t[12] = 'm';
    t[13] = 'n';
    t[14] = 'o';
    t[(940 - 925)] = 'p';
    t[16] = 'q';
    t[17] = 'r';
    t[18] = 's';
    t[19] = 't';
    t[20] = 'u';
    t[21] = 'v';
    t[22] = 'w';
    t[23] = 'x';
    t[24] = 'y';
    t[25] = 'z';
    {
        DRNC9MmXn7U = 0;
        while (m[DRNC9MmXn7U] != '\0') {
            if (!('a' != m[DRNC9MmXn7U])) {
                n[0] = n[0] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'b') {
                n[1] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'c') {
                n[2] = n[2] + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (m[DRNC9MmXn7U] == 'd') {
                n[3] = n[3] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'e') {
                n[4] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'f') {
                n[5] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'g') {
                n[6] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'h') {
                n[7] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'i') {
                n[8] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'j') {
                n[9] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'k') {
                n[10] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'l') {
                n[11] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'm') {
                n[12] = n[12] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'n') {
                n[13] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'o') {
                n[14] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'p') {
                n[15] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'q') {
                n[16] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'r') {
                n[17] = n[17] + 1;
            }
            else if (m[DRNC9MmXn7U] == 's') {
                n[18] += 1;
            }
            else if (m[DRNC9MmXn7U] == 't') {
                n[19] = n[19] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'u') {
                n[20] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'v') {
                n[21] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'w') {
                n[22] += 1;
            }
            else if (m[DRNC9MmXn7U] == 'x') {
                n[23] = n[23] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'y') {
                n[24] = n[24] + 1;
            }
            else if (m[DRNC9MmXn7U] == 'z') {
                n[25] = n[25] + 1;
            }
            else {
            }
            DRNC9MmXn7U = DRNC9MmXn7U +1;
        };
    }
    p = 0;
    {
        j = 0;
        while (j < 26) {
            if (n[j] != 0) {
                p = 1;
                printf ("%c=%d\n", t[j], n[j]);
            }
            j = j + 1;
        };
    }
    if (p == 0) {
        printf ("No\n");
    }
    return 0;
}

