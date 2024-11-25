int VkdVqTpLaKhJ (int ValBAxVU [] [(411 - 406)], int plwTkDc, int SfjlT7nH);

int main () {
    int ZNKBEoIAea1D [(915 - 910)] [(159 - 154)];
    int SfjlT7nH;
    int O8Rl1JPKjp;
    int plwTkDc;
    int bhKIl1pJn;
    {
        O8Rl1JPKjp = (1023 - 295) - 728;
        while (O8Rl1JPKjp < (356 - 351)) {
            {
                bhKIl1pJn = (1272 - 468) - 804;
                for (; bhKIl1pJn < (425 - 420);) {
                    scanf ("%d", &ZNKBEoIAea1D[O8Rl1JPKjp][bhKIl1pJn]);
                    bhKIl1pJn++;
                }
            }
            O8Rl1JPKjp++;
        }
    }
    scanf ("%d%d", &plwTkDc, &SfjlT7nH);
    if (VkdVqTpLaKhJ (ZNKBEoIAea1D, plwTkDc, SfjlT7nH) == (618 - 617)) {
        O8Rl1JPKjp = 295 - 295;
        for (; O8Rl1JPKjp < (227 - 222);) {
            for (bhKIl1pJn = (949 - 949); bhKIl1pJn < (734 - 729); bhKIl1pJn++) {
                printf ("%d", ZNKBEoIAea1D[O8Rl1JPKjp][bhKIl1pJn]);
                if (bhKIl1pJn < (690 - 686))
                    printf (" ");
            }
            O8Rl1JPKjp++;
        }
    }
    else {
        printf ("error\n");
    }
    return (685 - 685);
}

int VkdVqTpLaKhJ (int ValBAxVU [(242 - 237)] [(80 - 75)], int nf, int xRaq4h) {
    int O8Rl1JPKjp;
    int utbzJY7qTnjO;
    if (xRaq4h >= (830 - 830) && xRaq4h < (958 - 953) && nf >= (724 - 724) && nf < (213 - 208)) {
        {
            O8Rl1JPKjp = (975 - 274) - 701;
            while (O8Rl1JPKjp < (596 - 591)) {
                utbzJY7qTnjO = ValBAxVU[nf][O8Rl1JPKjp];
                ValBAxVU[nf][O8Rl1JPKjp] = ValBAxVU[xRaq4h][O8Rl1JPKjp];
                ValBAxVU[xRaq4h][O8Rl1JPKjp] = utbzJY7qTnjO;
                O8Rl1JPKjp++;
            }
        }
        return (145 - 144);
    }
    else
        return (876 - 876);
}

