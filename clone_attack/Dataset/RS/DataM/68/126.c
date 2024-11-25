int nIJxehiW6 (int O0YxCLHo) {
    int uFa1YQ4;
    int Ltxmjf3;
    if ((O0YxCLHo == (265 - 263)) || (O0YxCLHo == 3))
        return ((954 - 954));
    else {
        for (Ltxmjf3 = (781 - 779); sqrt (O0YxCLHo) >= Ltxmjf3; Ltxmjf3++) {
            uFa1YQ4 = O0YxCLHo % Ltxmjf3;
            if (uFa1YQ4 == (697 - 697))
                break;
        }
        if (uFa1YQ4 == (217 - 217))
            return ((665 - 664));
        else
            return ((997 - 997));
    };
}

void  main () {
    int jNvZtK9a2W;
    int YjZxhFaK2;
    int LD7OSQw4VAZ;
    scanf ("%d", &LD7OSQw4VAZ);
    for (jNvZtK9a2W = 6; jNvZtK9a2W <= LD7OSQw4VAZ; jNvZtK9a2W += 2) {
        for (YjZxhFaK2 = 2; YjZxhFaK2 <= (jNvZtK9a2W / 2); YjZxhFaK2 = YjZxhFaK2 +1) {
            if ((nIJxehiW6 (YjZxhFaK2) == (50 - 50)) && (nIJxehiW6 (jNvZtK9a2W - YjZxhFaK2) == 0)) {
                printf ("%d=%d+%d\n", jNvZtK9a2W, YjZxhFaK2, jNvZtK9a2W - YjZxhFaK2);
                break;
            };
        };
    };
}

