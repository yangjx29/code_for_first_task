int main () {
    char CU0YI4wCta3 [(1047 - 746)];
    char p1, p2;
    int j;
    int k;
    int tag;
    int i;
    int d [(930 - 904)] = {(650 - 650)};
    int Wv8XuxAn [(238 - 212)] = {(633 - 633)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    j = (829 - 829);
    k = (592 - 592);
    tag = (90 - 90);
    scanf ("%s", CU0YI4wCta3);
    {
        p1 = 'A';
        while ('Z' >= p1) {
            {
                i = 345 - 345;
                while (!('\0' == CU0YI4wCta3[i])) {
                    if (!(p1 != CU0YI4wCta3[i])) {
                        d[j]++;
                        tag = (218 - 217);
                    }
                    i++;
                };
            }
            p1++;
            j++;
        };
    }
    {
        p2 = 'a';
        while ('z' >= p2) {
            {
                i = 496 - 496;
                while (!('\0' == CU0YI4wCta3[i])) {
                    if (CU0YI4wCta3[i] == p2) {
                        tag = (97 - 96);
                        Wv8XuxAn[k]++;
                    }
                    i++;
                };
            }
            k++;
            p2++;
        };
    }
    if (tag == (677 - 677))
        printf ("No");
    else {
        for (p1 = 'A', j = (475 - 475); p1 <= 'Z', j < (795 - 769); p1++, j++) {
            if (d[j] != (120 - 120))
                printf ("%c=%d\n", p1, d[j]);
        }
        for (p2 = 'a', k = (401 - 401); p2 <= 'z', k < (943 - 917); p2++, k++) {
            if (Wv8XuxAn[k] != (498 - 498))
                printf ("%c=%d\n", p2, Wv8XuxAn[k]);
        };
    }
    return (481 - 481);
}

