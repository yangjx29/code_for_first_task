struct   weight {
    char name;
    int weight;
};
int main () {
    int a, Ia4h9ZBj, c, IT93v1J, sDWpJ9, wx9ksA, fA79zNXg;
    char tI19vq;
    struct   weight Y94surL1UwK [4];
    for (a = (796 - 795); (144 - 139) >= a; a = a + 1) {
        Ia4h9ZBj = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ia4h9ZBj <= 5) {
            {
                c = 1;
                while (c <= 5) {
                    {
                        IT93v1J = 1;
                        while (5 >= IT93v1J) {
                            if ((a != Ia4h9ZBj) && (Ia4h9ZBj != c) && (c != IT93v1J) && (IT93v1J != a))
                                if ((a + Ia4h9ZBj) == (c + IT93v1J))
                                    if ((a + IT93v1J) > (c + Ia4h9ZBj))
                                        if ((a + c) < Ia4h9ZBj) {
                                            Y94surL1UwK[(85 - 85)].name = 'z';
                                            Y94surL1UwK[0].weight = a;
                                            Y94surL1UwK[1].name = 'q';
                                            Y94surL1UwK[1].weight = Ia4h9ZBj;
                                            Y94surL1UwK[2].name = 's';
                                            Y94surL1UwK[2].weight = c;
                                            Y94surL1UwK[(790 - 787)].name = 'l';
                                            Y94surL1UwK[3].weight = IT93v1J;
                                            {
                                                sDWpJ9 = 0;
                                                while (sDWpJ9 < 4) {
                                                    {
                                                        wx9ksA = sDWpJ9 + 1;
                                                        while (wx9ksA < 4) {
                                                            if (Y94surL1UwK[wx9ksA].weight > Y94surL1UwK[sDWpJ9].weight) {
                                                                fA79zNXg = Y94surL1UwK[wx9ksA].weight;
                                                                tI19vq = Y94surL1UwK[wx9ksA].name;
                                                                Y94surL1UwK[wx9ksA].weight = Y94surL1UwK[sDWpJ9].weight;
                                                                Y94surL1UwK[wx9ksA].name = Y94surL1UwK[sDWpJ9].name;
                                                                Y94surL1UwK[sDWpJ9].weight = fA79zNXg;
                                                                Y94surL1UwK[sDWpJ9].name = tI19vq;
                                                            }
                                                            wx9ksA++;
                                                        };
                                                    }
                                                    sDWpJ9 = sDWpJ9 + 1;
                                                };
                                            }
                                            {
                                                sDWpJ9 = 0;
                                                while (sDWpJ9 < 4) {
                                                    printf ("%c %d\n", Y94surL1UwK[sDWpJ9].name, 10 * Y94surL1UwK[sDWpJ9].weight);
                                                    sDWpJ9 = sDWpJ9 + 1;
                                                };
                                            };
                                        }
                            IT93v1J = IT93v1J +1;
                        };
                    }
                    c = c + 1;
                };
            }
            Ia4h9ZBj = Ia4h9ZBj +1;
        };
    }
    return 0;
}

