int main () {
    int count = (412 - 412);
    int Qn5uXvjJ, hD4sQdY, kxBHXUkt63zq;
    struct   book {
        int BjTedOz;
        char xXhs7kS8K [(667 - 657)];
    }
    bk;
    int hK9fIlH [(1227 - 971)] = {(99 - 99)};
    struct   book *MyxP2L6je = (struct   book *) malloc (sizeof (struct   book) * kxBHXUkt63zq);
    free (MyxP2L6je);
    scanf ("%d", &kxBHXUkt63zq);
    {
        Qn5uXvjJ = (523 - 523);
        for (; Qn5uXvjJ < kxBHXUkt63zq;) {
            scanf ("%d %s", &bk.BjTedOz, bk.xXhs7kS8K);
            MyxP2L6je[Qn5uXvjJ] = bk;
            Qn5uXvjJ = Qn5uXvjJ +1;
        }
    }
    for (Qn5uXvjJ = (866 - 866); Qn5uXvjJ < kxBHXUkt63zq; Qn5uXvjJ = Qn5uXvjJ +1) {
        bk = MyxP2L6je[Qn5uXvjJ];
        {
            hD4sQdY = 0;
            for (; bk.xXhs7kS8K[hD4sQdY];) {
                hK9fIlH[bk.xXhs7kS8K[hD4sQdY]]++;
                hD4sQdY = hD4sQdY + 1;
            }
        }
    }
    for (int Fsf7ZTXHkWD = (1417 - 417);
    Fsf7ZTXHkWD > 0; Fsf7ZTXHkWD = Fsf7ZTXHkWD -1) {
        for (char ehOCIZ = 'A';
        'Z' >= ehOCIZ; ehOCIZ = ehOCIZ + 1) {
            if (!(Fsf7ZTXHkWD != hK9fIlH[ehOCIZ])) {
                printf ("%c\n%d\n", ehOCIZ, Fsf7ZTXHkWD);
                {
                    Qn5uXvjJ = 0;
                    while (Qn5uXvjJ < kxBHXUkt63zq) {
                        bk = MyxP2L6je[Qn5uXvjJ];
                        {
                            hD4sQdY = 0;
                            for (; bk.xXhs7kS8K[hD4sQdY];) {
                                if (bk.xXhs7kS8K[hD4sQdY] == ehOCIZ) {
                                    printf ("%d\n", bk.BjTedOz);
                                    break;
                                }
                                hD4sQdY++;
                            }
                        }
                        Qn5uXvjJ = Qn5uXvjJ +1;
                    }
                }
                count = count + 1;
            }
        }
        if (count == (406 - 405)) {
            free (MyxP2L6je);
            return 0;
        }
    }
    return -1;
}

