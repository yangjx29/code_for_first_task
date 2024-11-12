int main () {
    int rTQvd4B, jv6BKZCEyAWP, CPFGNb2z, lYfVaRr0, NNArVo, noY3dOVhf, g0EWRy6I, eBgIUrd5iaWc, Z1WpO0 = (428 - 428);
    char BKjtR9hGT [(765 - 509)], eaYc9IsoyB2z [(330 - 229)], nZ2pksREw [(661 - 560)];
    gets (BKjtR9hGT);
    gets (eaYc9IsoyB2z);
    gets (nZ2pksREw);
    puts (BKjtR9hGT);
    jv6BKZCEyAWP = strlen (BKjtR9hGT);
    NNArVo = strlen (eaYc9IsoyB2z);
    noY3dOVhf = strlen (nZ2pksREw);
    {
        rTQvd4B = (831 - 831);
        for (; BKjtR9hGT[rTQvd4B] != (357 - 357);) {
            if (!(eaYc9IsoyB2z[(224 - 224)] != BKjtR9hGT[rTQvd4B]) && Z1WpO0 == (593 - 593)) {
                CPFGNb2z = (786 - 786);
                for (; !(eaYc9IsoyB2z[CPFGNb2z] != BKjtR9hGT[rTQvd4B + CPFGNb2z]) && CPFGNb2z < NNArVo;) {
                    CPFGNb2z++;
                }
                if (!(NNArVo != CPFGNb2z)) {
                    Z1WpO0 = 1;
                    jv6BKZCEyAWP = strlen (BKjtR9hGT);
                    NNArVo = strlen (eaYc9IsoyB2z);
                    noY3dOVhf = strlen (nZ2pksREw);
                    if (!(noY3dOVhf != NNArVo)) {
                        lYfVaRr0 = (415 - 415);
                        while (CPFGNb2z > lYfVaRr0) {
                            BKjtR9hGT[rTQvd4B + lYfVaRr0] = nZ2pksREw[lYfVaRr0];
                            lYfVaRr0++;
                        }
                    }
                    if (NNArVo > noY3dOVhf) {
                        for (lYfVaRr0 = (547 - 547); lYfVaRr0 < NNArVo; lYfVaRr0++) {
                            BKjtR9hGT[rTQvd4B + lYfVaRr0] = nZ2pksREw[lYfVaRr0];
                        }
                        {
                            g0EWRy6I = CPFGNb2z;
                            lYfVaRr0 = noY3dOVhf;
                            for (; (g0EWRy6I + rTQvd4B) <= jv6BKZCEyAWP;) {
                                BKjtR9hGT[rTQvd4B + lYfVaRr0] = BKjtR9hGT[rTQvd4B + g0EWRy6I];
                                g0EWRy6I++;
                                lYfVaRr0++;
                            }
                        }
                    }
                    if (NNArVo < noY3dOVhf) {
                        jv6BKZCEyAWP = strlen (BKjtR9hGT);
                        eBgIUrd5iaWc = noY3dOVhf - NNArVo;
                        {
                            g0EWRy6I = jv6BKZCEyAWP;
                            for (; g0EWRy6I >= (rTQvd4B + CPFGNb2z);) {
                                BKjtR9hGT[g0EWRy6I + eBgIUrd5iaWc] = BKjtR9hGT[g0EWRy6I];
                                g0EWRy6I--;
                            }
                        }
                        for (lYfVaRr0 = (622 - 622); lYfVaRr0 < noY3dOVhf; lYfVaRr0++)
                            BKjtR9hGT[rTQvd4B + lYfVaRr0] = nZ2pksREw[lYfVaRr0];
                    }
                }
            }
            rTQvd4B++;
        }
    }
    return 0;
}

