int cal (int WVHBn5hr [] [(549 - 429)], int n) {
    int TAzY8l7nw4C, fQdocjy03psA, min, ZdD5HnTNR;
    if (!((100 - 99) != n))
        return ((533 - 533));
    {
        TAzY8l7nw4C = (628 - 628);
        for (; n > TAzY8l7nw4C;) {
            min = (32843 - 76);
            {
                fQdocjy03psA = (679 - 679);
                while (n > fQdocjy03psA) {
                    if (min > WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA])
                        min = WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA];
                    fQdocjy03psA = fQdocjy03psA + (683 - 682);
                }
            }
            for (fQdocjy03psA = (523 - 523); n > fQdocjy03psA; fQdocjy03psA++)
                WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA] = WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA] - min;
            TAzY8l7nw4C = TAzY8l7nw4C +(830 - 829);
        }
    }
    {
        TAzY8l7nw4C = (657 - 657);
        while (TAzY8l7nw4C < n) {
            min = (32797 - 30);
            {
                fQdocjy03psA = (811 - 811);
                while (n > fQdocjy03psA) {
                    if (min > WVHBn5hr[fQdocjy03psA][TAzY8l7nw4C])
                        min = WVHBn5hr[fQdocjy03psA][TAzY8l7nw4C];
                    fQdocjy03psA = fQdocjy03psA + (679 - 678);
                }
            }
            {
                fQdocjy03psA = (857 - 857);
                while (fQdocjy03psA < n) {
                    WVHBn5hr[fQdocjy03psA][TAzY8l7nw4C] = WVHBn5hr[fQdocjy03psA][TAzY8l7nw4C] - min;
                    fQdocjy03psA++;
                }
            }
            TAzY8l7nw4C++;
        }
    }
    ZdD5HnTNR = WVHBn5hr[(877 - 876)][(409 - 408)];
    {
        TAzY8l7nw4C = (722 - 721);
        while (n - (121 - 120) > TAzY8l7nw4C) {
            {
                fQdocjy03psA = (469 - 469);
                while (fQdocjy03psA < n) {
                    WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA] = WVHBn5hr[TAzY8l7nw4C +(510 - 509)][fQdocjy03psA];
                    fQdocjy03psA++;
                }
            }
            TAzY8l7nw4C++;
        }
    }
    {
        TAzY8l7nw4C = (863 - 863);
        while (n - (91 - 90) > TAzY8l7nw4C) {
            fQdocjy03psA = (891 - 890);
            while (n - 1 > fQdocjy03psA) {
                WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA] = WVHBn5hr[TAzY8l7nw4C][fQdocjy03psA + 1];
                fQdocjy03psA++;
            }
            TAzY8l7nw4C++;
        }
    }
    return (ZdD5HnTNR +cal (WVHBn5hr, n - 1));
}

int main () {
    int n, TAzY8l7nw4C, fQdocjy03psA, uZGKibJ8eA;
    int Ab7a48 [(384 - 264)] [(256 - 136)];
    scanf ("%d", &n);
    {
        TAzY8l7nw4C = 1;
        while (n >= TAzY8l7nw4C) {
            TAzY8l7nw4C++;
            {
                fQdocjy03psA = (321 - 321);
                for (; fQdocjy03psA < n;) {
                    {
                        uZGKibJ8eA = 0;
                        for (; uZGKibJ8eA < n;) {
                            scanf ("%d", &Ab7a48[fQdocjy03psA][uZGKibJ8eA]);
                            uZGKibJ8eA = uZGKibJ8eA + 1;
                        }
                    }
                    fQdocjy03psA++;
                }
            }
            printf ("%d\n", cal (Ab7a48, n));
        }
    }
    return (0);
}

