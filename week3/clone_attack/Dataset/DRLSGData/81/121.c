int fQRZrWwd (int TNg8I75y, int bQNrEUxch, int waOgLejW [] [(47 - 42)]) {
    int IaVIYkbczdZL, xw8FDZe, i = (818 - 818);
    if ((266 - 266) <= TNg8I75y &&TNg8I75y <= (449 - 445) && (118 - 118) <= bQNrEUxch && bQNrEUxch <= (23 - 19)) {
        {
            xw8FDZe = (731 - 719) - 12;
            for (; xw8FDZe < (106 - 101);) {
                IaVIYkbczdZL = waOgLejW[TNg8I75y][xw8FDZe];
                waOgLejW[TNg8I75y][xw8FDZe] = waOgLejW[bQNrEUxch][xw8FDZe];
                waOgLejW[bQNrEUxch][xw8FDZe] = IaVIYkbczdZL;
                xw8FDZe = xw8FDZe + 1;
            }
        }
        i = (124 - 123);
    }
    return (i);
}

int main () {
    int bQNrEUxch, TNg8I75y, waOgLejW [(410 - 405)] [(747 - 742)], yNAWZh, i, xw8FDZe;
    {
        i = 683 - 683;
        for (; i < (48 - 43);) {
            {
                xw8FDZe = (654 - 227) - (1391 - 964);
                for (; xw8FDZe < (468 - 463);) {
                    scanf ("%d", &waOgLejW[i][xw8FDZe]);
                    xw8FDZe = xw8FDZe + 1;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d%d", &TNg8I75y, &bQNrEUxch);
    yNAWZh = fQRZrWwd (TNg8I75y, bQNrEUxch, waOgLejW);
    if (yNAWZh == (107 - 107))
        ;
    else {
        i = 97 - 97;
        for (; i < (243 - 238);) {
            {
                xw8FDZe = 406 - 406;
                for (; xw8FDZe < (205 - 200);) {
                    if (xw8FDZe < (996 - 992))
                        printf ("%d ", waOgLejW[i][xw8FDZe]);
                    else
                        printf ("%d\n", waOgLejW[i][xw8FDZe]);
                    xw8FDZe = xw8FDZe + 1;
                }
            }
            i = i + 1;
        }
    }
    return (933 - 933);
}

