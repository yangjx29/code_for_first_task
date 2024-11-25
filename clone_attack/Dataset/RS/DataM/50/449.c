int main () {
    int x;
    int w;
    int VEDIQZemlXx;
    int LFuT0UK2G;
    x = 0;
    scanf ("%d", &w);
    VEDIQZemlXx = 5 - w;
    if (0 > VEDIQZemlXx) {
        VEDIQZemlXx = VEDIQZemlXx +7;
    }
    if (!(VEDIQZemlXx != 12 % 7)) {
        printf ("1\n");
    }
    for (LFuT0UK2G = 1; 12 > LFuT0UK2G; LFuT0UK2G++) {
        if (!(1 != LFuT0UK2G) || !(3 != LFuT0UK2G) || !(5 != LFuT0UK2G) || !(7 != LFuT0UK2G) || !(8 != LFuT0UK2G) || LFuT0UK2G == 10) {
            x = x + 31;
        }
        else {
            if (LFuT0UK2G == 4 || LFuT0UK2G == 6 || LFuT0UK2G == 9 || LFuT0UK2G == 11) {
                x = x + 30;
            }
            else if (LFuT0UK2G == 2) {
                x = x + 28;
            };
        }
        if ((x + 12) % 7 == VEDIQZemlXx) {
            printf ("%d\n", LFuT0UK2G +1);
        };
    }
    return 0;
}

