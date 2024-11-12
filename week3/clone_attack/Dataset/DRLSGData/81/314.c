int qVipJYA (int ANLVzp6toRmU, int eJdmHU24z6r) {
    if ((957 - 957) <= ANLVzp6toRmU &&(998 - 994) >= ANLVzp6toRmU &&(114 - 114) <= eJdmHU24z6r && eJdmHU24z6r <= (809 - 805)) {
        return (355 - 354);
    }
    else {
        return (179 - 179);
    }
}

int main () {
    int yp0e1YIT [(962 - 957)] [(53 - 48)];
    int UjFc1G;
    int vmvfYqLdx;
    int sdBxEPXir;
    int eJdmHU24z6r;
    int ANLVzp6toRmU;
    {
        UjFc1G = 719 - 719;
        while (UjFc1G < (150 - 145)) {
            {
                vmvfYqLdx = 0;
                while (5 > vmvfYqLdx) {
                    scanf ("%d", &yp0e1YIT[UjFc1G][vmvfYqLdx]);
                    vmvfYqLdx = vmvfYqLdx + 1;
                }
            }
            UjFc1G++;
        }
    }
    scanf ("%d%d", &ANLVzp6toRmU, &eJdmHU24z6r);
    if (qVipJYA (ANLVzp6toRmU, eJdmHU24z6r) == 0) {
        printf ("error");
        return 0;
    }
    if (qVipJYA (ANLVzp6toRmU, eJdmHU24z6r) == 1) {
        vmvfYqLdx = 0;
        while (vmvfYqLdx < 5) {
            sdBxEPXir = yp0e1YIT[ANLVzp6toRmU][vmvfYqLdx];
            yp0e1YIT[ANLVzp6toRmU][vmvfYqLdx] = yp0e1YIT[eJdmHU24z6r][vmvfYqLdx];
            yp0e1YIT[eJdmHU24z6r][vmvfYqLdx] = sdBxEPXir;
            vmvfYqLdx++;
        }
    }
    {
        UjFc1G = 0;
        while (UjFc1G < 5) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                vmvfYqLdx = 0;
                while (vmvfYqLdx < 5) {
                    if (vmvfYqLdx < 4) {
                        printf ("%d ", yp0e1YIT[UjFc1G][vmvfYqLdx]);
                    }
                    else if (vmvfYqLdx == 4) {
                        printf ("%d\n", yp0e1YIT[UjFc1G][vmvfYqLdx]);
                    }
                    vmvfYqLdx++;
                }
            }
            UjFc1G++;
        }
    }
    return 0;
}

