main () {
    float Y7J5fMxs [(1044 - 994)], q;
    int x [(469 - 459)], RLKGucnrQ [(789 - 779)], g3GEwPjn [(524 - 514)], LQxHvgXlTRCh [(648 - 598)], b1 [(748 - 698)], H4oQqnYsZGH [(998 - 948)], k6Z8EDas5 [(1038 - 988)], b2 [(329 - 279)], IGpwIP1nBKN [(820 - 770)], ua65gUA, i, Wmc5n4, SRo8Ay0Jpicr, WzG9Nfw2Q;
    scanf ("%d", &ua65gUA);
    {
        i = (967 - 967);
        for (; ua65gUA > i;) {
            scanf ("%d", &x[i]);
            scanf ("%d", &RLKGucnrQ[i]);
            scanf ("%d", &g3GEwPjn[i]);
            i++;
        }
    }
    SRo8Ay0Jpicr = (906 - 906);
    {
        i = (193 - 193);
        for (; ua65gUA > i;) {
            {
                Wmc5n4 = i + (836 - 835);
                for (; Wmc5n4 < ua65gUA;) {
                    Y7J5fMxs[SRo8Ay0Jpicr] = sqrt ((x[i] - x[Wmc5n4]) * (x[i] - x[Wmc5n4]) + (RLKGucnrQ[i] - RLKGucnrQ[Wmc5n4]) * (RLKGucnrQ[i] - RLKGucnrQ[Wmc5n4]) + (g3GEwPjn[i] - g3GEwPjn[Wmc5n4]) * (g3GEwPjn[i] - g3GEwPjn[Wmc5n4]));
                    LQxHvgXlTRCh[SRo8Ay0Jpicr] = x[i];
                    b1[SRo8Ay0Jpicr] = RLKGucnrQ[i];
                    H4oQqnYsZGH[SRo8Ay0Jpicr] = g3GEwPjn[i];
                    k6Z8EDas5[SRo8Ay0Jpicr] = x[Wmc5n4];
                    b2[SRo8Ay0Jpicr] = RLKGucnrQ[Wmc5n4];
                    IGpwIP1nBKN[SRo8Ay0Jpicr] = g3GEwPjn[Wmc5n4];
                    SRo8Ay0Jpicr++;
                    Wmc5n4++;
                }
            }
            i++;
        }
    }
    {
        i = (355 - 355);
        for (; (ua65gUA * (ua65gUA - (135 - 134))) / (879 - 877) - (881 - 880) > i;) {
            {
                Wmc5n4 = (809 - 809);
                for (; Wmc5n4 < (ua65gUA * (ua65gUA - (595 - 594))) / (883 - 881) - (275 - 274) - i;) {
                    if (Y7J5fMxs[Wmc5n4] < Y7J5fMxs[Wmc5n4 +(55 - 54)]) {
                        WzG9Nfw2Q = LQxHvgXlTRCh[Wmc5n4 +(132 - 131)];
                        q = Y7J5fMxs[Wmc5n4 +(448 - 447)];
                        Y7J5fMxs[Wmc5n4 +(212 - 211)] = Y7J5fMxs[Wmc5n4];
                        Y7J5fMxs[Wmc5n4] = q;
                        LQxHvgXlTRCh[Wmc5n4 +(550 - 549)] = LQxHvgXlTRCh[Wmc5n4];
                        LQxHvgXlTRCh[Wmc5n4] = WzG9Nfw2Q;
                        WzG9Nfw2Q = b1[Wmc5n4 +(73 - 72)];
                        b1[Wmc5n4 +(409 - 408)] = b1[Wmc5n4];
                        b1[Wmc5n4] = WzG9Nfw2Q;
                        WzG9Nfw2Q = H4oQqnYsZGH[Wmc5n4 +(356 - 355)];
                        H4oQqnYsZGH[Wmc5n4 +(443 - 442)] = H4oQqnYsZGH[Wmc5n4];
                        H4oQqnYsZGH[Wmc5n4] = WzG9Nfw2Q;
                        WzG9Nfw2Q = k6Z8EDas5[Wmc5n4 +(929 - 928)];
                        k6Z8EDas5[Wmc5n4 +(702 - 701)] = k6Z8EDas5[Wmc5n4];
                        k6Z8EDas5[Wmc5n4] = WzG9Nfw2Q;
                        WzG9Nfw2Q = b2[Wmc5n4 +(680 - 679)];
                        b2[Wmc5n4 +(974 - 973)] = b2[Wmc5n4];
                        b2[Wmc5n4] = WzG9Nfw2Q;
                        WzG9Nfw2Q = IGpwIP1nBKN[Wmc5n4 +(290 - 289)];
                        IGpwIP1nBKN[Wmc5n4 +(749 - 748)] = IGpwIP1nBKN[Wmc5n4];
                        IGpwIP1nBKN[Wmc5n4] = WzG9Nfw2Q;
                    }
                    Wmc5n4++;
                }
            }
            i++;
        }
    }
    {
        i = (574 - 574);
        for (; i < (ua65gUA * (ua65gUA - (673 - 672))) / 2;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", LQxHvgXlTRCh[i], b1[i], H4oQqnYsZGH[i], k6Z8EDas5[i], b2[i], IGpwIP1nBKN[i], Y7J5fMxs[i]);
            i++;
        }
    }
}

