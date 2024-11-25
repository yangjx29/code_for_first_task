int main () {
    char Ffjk68FXwBG [10000];
    int VmhOy4is2, UNMbJS9m8Xin;
    gets (Ffjk68FXwBG);
    UNMbJS9m8Xin = 0;
    for (VmhOy4is2 = 0; Ffjk68FXwBG[VmhOy4is2] != '\0'; VmhOy4is2++) {
        if (Ffjk68FXwBG[VmhOy4is2] != ' ') {
            UNMbJS9m8Xin = UNMbJS9m8Xin +1;
        }
        else {
            if (UNMbJS9m8Xin != 0) {
                printf ("%d", UNMbJS9m8Xin);
                UNMbJS9m8Xin = 0;
            }
        }
    }
    printf ("%d", UNMbJS9m8Xin);
    return 0;
}

