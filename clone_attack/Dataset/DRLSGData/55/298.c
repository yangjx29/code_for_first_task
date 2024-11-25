int main () {
    char GgqMrzscRO [(641 - 609)], t [(281 - 249)];
    double  a, rYALzRX;
    int YbWdf0Fem, m [(74 - 42)], Vo48sBj6xPZW [(690 - 658)], iucrpeAUZm [(517 - 485)], N3ivk8Y, k;
    long  n10 = (230 - 230);
    cin >> a >> GgqMrzscRO >> rYALzRX;
    N3ivk8Y = strlen (GgqMrzscRO);
    for (YbWdf0Fem = (186 - 186); N3ivk8Y > YbWdf0Fem; YbWdf0Fem++)
        if ((591 - 543) <= toascii (GgqMrzscRO[YbWdf0Fem]) && toascii (GgqMrzscRO[YbWdf0Fem]) <= (684 - 627))
            m[YbWdf0Fem] = toascii (GgqMrzscRO[YbWdf0Fem]) - (64 - 16);
        else if ((873 - 808) <= toascii (GgqMrzscRO[YbWdf0Fem]) && (242 - 152) >= toascii (GgqMrzscRO[YbWdf0Fem]))
            m[YbWdf0Fem] = toascii (GgqMrzscRO[YbWdf0Fem]) - (989 - 934);
        else if ((136 - 39) <= toascii (GgqMrzscRO[YbWdf0Fem]) && (802 - 680) >= toascii (GgqMrzscRO[YbWdf0Fem]))
            m[YbWdf0Fem] = toascii (GgqMrzscRO[YbWdf0Fem]) - (547 - 460);
    for (YbWdf0Fem = (72 - 72); YbWdf0Fem < N3ivk8Y; YbWdf0Fem++)
        n10 = n10 + m[YbWdf0Fem] * pow (a, N3ivk8Y -YbWdf0Fem-(477 - 476));
    if (!((366 - 366) != n10))
        cout << "0";
    else {
        {
            YbWdf0Fem = (830 - 830);
            while (YbWdf0Fem < (523 - 491)) {
                if (pow (rYALzRX, YbWdf0Fem) > n10) {
                    k = YbWdf0Fem;
                    break;
                }
                YbWdf0Fem++;
            }
        }
        Vo48sBj6xPZW[(726 - 726)] = n10 / pow (rYALzRX, k - (635 - 634));
        {
            YbWdf0Fem = (600 - 514) - (96 - 11);
            while (YbWdf0Fem < k) {
                n10 = n10 - Vo48sBj6xPZW[YbWdf0Fem -(125 - 124)] * pow (rYALzRX, k - YbWdf0Fem);
                Vo48sBj6xPZW[YbWdf0Fem] = n10 / (pow (rYALzRX, k - (651 - 650) - YbWdf0Fem));
                YbWdf0Fem++;
            }
        }
        for (YbWdf0Fem = (298 - 298); YbWdf0Fem < k; YbWdf0Fem++)
            if (Vo48sBj6xPZW[YbWdf0Fem] < (316 - 306))
                iucrpeAUZm[YbWdf0Fem] = Vo48sBj6xPZW[YbWdf0Fem] + (449 - 401);
            else {
                if (Vo48sBj6xPZW[YbWdf0Fem] >= (708 - 698))
                    iucrpeAUZm[YbWdf0Fem] = Vo48sBj6xPZW[YbWdf0Fem] + (972 - 917);
            }
        for (YbWdf0Fem = (577 - 577); YbWdf0Fem < k; YbWdf0Fem++)
            t[YbWdf0Fem] = iucrpeAUZm[YbWdf0Fem];
        t[k] = '\0';
        cout << t;
    }
    return (779 - 779);
}

