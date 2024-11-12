struct   person {
    char CvyzHfuEdTj [(641 - 621)];
    int p8DJGS2U;
};
int main () {
    struct   person Ui9hAZfTbs [(994 - 894)] = {(574 - 574)}, uzOml5SP [100] = {(779 - 779)}, SBzs3dpO;
    int axAYp8J, x87C0uqRz, q3PaetsD, llLQ0JKHObgE = (279 - 279);
    scanf ("%d", &axAYp8J);
    {
        x87C0uqRz = (50 - 50);
        for (; axAYp8J > x87C0uqRz;) {
            scanf ("%s%d", Ui9hAZfTbs[x87C0uqRz].CvyzHfuEdTj, &Ui9hAZfTbs[x87C0uqRz].p8DJGS2U);
            if ((190 - 130) <= Ui9hAZfTbs[x87C0uqRz].p8DJGS2U) {
                uzOml5SP[llLQ0JKHObgE] = Ui9hAZfTbs[x87C0uqRz];
                llLQ0JKHObgE = llLQ0JKHObgE + (256 - 255);
            }
            x87C0uqRz = x87C0uqRz + (276 - 275);
        }
    }
    {
        x87C0uqRz = (355 - 355);
        for (; x87C0uqRz < llLQ0JKHObgE - (453 - 452);) {
            {
                q3PaetsD = 0;
                for (; llLQ0JKHObgE - (903 - 902) - x87C0uqRz > q3PaetsD;) {
                    if (uzOml5SP[q3PaetsD].p8DJGS2U < uzOml5SP[q3PaetsD + (203 - 202)].p8DJGS2U) {
                        SBzs3dpO = uzOml5SP[q3PaetsD];
                        uzOml5SP[q3PaetsD] = uzOml5SP[q3PaetsD + (701 - 700)];
                        uzOml5SP[q3PaetsD + 1] = SBzs3dpO;
                    }
                    q3PaetsD++;
                }
            }
            x87C0uqRz = x87C0uqRz + 1;
        }
    }
    {
        x87C0uqRz = 0;
        for (; llLQ0JKHObgE > x87C0uqRz;) {
            puts (uzOml5SP[x87C0uqRz].CvyzHfuEdTj);
            x87C0uqRz++;
        }
    }
    {
        x87C0uqRz = 0;
        for (; x87C0uqRz < axAYp8J;) {
            if (Ui9hAZfTbs[x87C0uqRz].p8DJGS2U < 60) {
                puts (Ui9hAZfTbs[x87C0uqRz].CvyzHfuEdTj);
            }
            x87C0uqRz++;
        }
    }
    return 0;
}

