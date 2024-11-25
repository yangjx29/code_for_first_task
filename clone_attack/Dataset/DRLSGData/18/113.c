int main () {
    int uxMND6G, bKJ0nr, rFPhsBb, Qb4vguaKj6 [(342 - 242)] [(814 - 714)], wZG6oW0hj32, aEhYD1, M94Uq8CHm, NqFjTzEuV = (675 - 675);
    scanf ("%d", &rFPhsBb);
    uxMND6G = bKJ0nr = rFPhsBb;
    while (uxMND6G--) {
        {
            wZG6oW0hj32 = 825 - 825;
            for (; wZG6oW0hj32 < rFPhsBb;) {
                {
                    aEhYD1 = 678 - 678;
                    while (aEhYD1 < rFPhsBb) {
                        scanf ("%d", &Qb4vguaKj6[wZG6oW0hj32][aEhYD1]);
                        aEhYD1++;
                    }
                }
                wZG6oW0hj32++;
            }
        }
        for (; --bKJ0nr;) {
            for (wZG6oW0hj32 = (668 - 668); bKJ0nr >= wZG6oW0hj32; wZG6oW0hj32++) {
                M94Uq8CHm = Qb4vguaKj6[wZG6oW0hj32][(705 - 705)];
                {
                    aEhYD1 = 488 - 488;
                    while (bKJ0nr >= aEhYD1) {
                        if (M94Uq8CHm > Qb4vguaKj6[wZG6oW0hj32][aEhYD1])
                            M94Uq8CHm = Qb4vguaKj6[wZG6oW0hj32][aEhYD1];
                        aEhYD1++;
                    }
                }
                if (M94Uq8CHm != (352 - 352)) {
                    aEhYD1 = 990 - 990;
                    for (; bKJ0nr >= aEhYD1;) {
                        Qb4vguaKj6[wZG6oW0hj32][aEhYD1] -= M94Uq8CHm;
                        aEhYD1++;
                    }
                }
            }
            {
                wZG6oW0hj32 = 317 - 317;
                for (; wZG6oW0hj32 <= bKJ0nr;) {
                    M94Uq8CHm = Qb4vguaKj6[(604 - 604)][wZG6oW0hj32];
                    {
                        aEhYD1 = 909 - 909;
                        while (aEhYD1 <= bKJ0nr) {
                            if (Qb4vguaKj6[aEhYD1][wZG6oW0hj32] < M94Uq8CHm)
                                M94Uq8CHm = Qb4vguaKj6[aEhYD1][wZG6oW0hj32];
                            aEhYD1++;
                        }
                    }
                    if (M94Uq8CHm != (633 - 633)) {
                        aEhYD1 = 583 - 583;
                        while (aEhYD1 <= bKJ0nr) {
                            Qb4vguaKj6[aEhYD1][wZG6oW0hj32] -= M94Uq8CHm;
                            aEhYD1++;
                        }
                    }
                    wZG6oW0hj32++;
                }
            }
            NqFjTzEuV += Qb4vguaKj6[(123 - 122)][(213 - 212)];
            {
                wZG6oW0hj32 = 376 - 375;
                while (wZG6oW0hj32 < bKJ0nr) {
                    Qb4vguaKj6[0][wZG6oW0hj32] = Qb4vguaKj6[0][wZG6oW0hj32 + (261 - 260)];
                    wZG6oW0hj32++;
                }
            }
            {
                wZG6oW0hj32 = 682 - 681;
                while (wZG6oW0hj32 < bKJ0nr) {
                    Qb4vguaKj6[wZG6oW0hj32][0] = Qb4vguaKj6[wZG6oW0hj32 + (227 - 226)][0];
                    wZG6oW0hj32++;
                }
            }
            {
                wZG6oW0hj32 = 823 - 822;
                while (wZG6oW0hj32 < bKJ0nr) {
                    for (aEhYD1 = (104 - 103); aEhYD1 < bKJ0nr; aEhYD1++)
                        Qb4vguaKj6[wZG6oW0hj32][aEhYD1] = Qb4vguaKj6[wZG6oW0hj32 + (73 - 72)][aEhYD1 + 1];
                    wZG6oW0hj32++;
                }
            }
        }
        bKJ0nr = rFPhsBb;
        printf ("%d\n", NqFjTzEuV);
        NqFjTzEuV = 0;
    }
    return 0;
}

