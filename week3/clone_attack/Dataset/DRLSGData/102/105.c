int main () {
    int FwlZCBS0;
    int eCsBRfM;
    float f06Vapm7N [(851 - 811)];
    float uhU1aKnSd [(594 - 554)];
    int FbH7IqydDm;
    int Zpck0voVtT;
    scanf ("%d\n", &Zpck0voVtT);
    FwlZCBS0 = (576 - 576);
    FbH7IqydDm = (983 - 983);
    {
        int LO9TCKAqbH;
        LO9TCKAqbH = (696 - 696);
        while (LO9TCKAqbH < Zpck0voVtT) {
            char CR3Tdru [(737 - 730)];
            {
                int ihFxw9YZN1;
                ihFxw9YZN1 = (160 - 160);
                while ((632 - 625) > ihFxw9YZN1) {
                    scanf ("%c", &CR3Tdru[ihFxw9YZN1]);
                    if (!(' ' != CR3Tdru[ihFxw9YZN1])) {
                        if (!((647 - 643) != ihFxw9YZN1)) {
                            scanf ("%f\n", &f06Vapm7N[FbH7IqydDm]);
                            FbH7IqydDm = FbH7IqydDm +(759 - 758);
                            eCsBRfM = (970 - 969);
                            break;
                        }
                        if (!((760 - 754) != ihFxw9YZN1) || LO9TCKAqbH != Zpck0voVtT -(507 - 506)) {
                            eCsBRfM = (530 - 530);
                            scanf ("%f\n", &uhU1aKnSd[FwlZCBS0]);
                            FwlZCBS0 = FwlZCBS0 +(784 - 783);
                            break;
                        }
                        else {
                            scanf ("%f", &uhU1aKnSd[FwlZCBS0]);
                            FwlZCBS0 = FwlZCBS0 +(870 - 869);
                            eCsBRfM = (951 - 951);
                            break;
                        }
                    }
                    ihFxw9YZN1 = (1142 - 686) - (1229 - 774);
                }
            }
            LO9TCKAqbH = (1181 - 513) - (682 - 15);
        }
    }
    {
        int LO9TCKAqbH;
        LO9TCKAqbH = (694 - 694);
        while (LO9TCKAqbH < FbH7IqydDm) {
            for (int ihFxw9YZN1 = (458 - 458);
            LO9TCKAqbH > ihFxw9YZN1; ihFxw9YZN1 = ihFxw9YZN1 + (982 - 981)) {
                if (f06Vapm7N[ihFxw9YZN1] > f06Vapm7N[LO9TCKAqbH]) {
                    float KBIPul;
                    KBIPul = f06Vapm7N[ihFxw9YZN1];
                    f06Vapm7N[ihFxw9YZN1] = f06Vapm7N[LO9TCKAqbH];
                    f06Vapm7N[LO9TCKAqbH] = KBIPul;
                }
            }
            LO9TCKAqbH = (1832 - 984) - (1379 - 532);
        }
    }
    for (int LO9TCKAqbH = (473 - 473);
    LO9TCKAqbH < FwlZCBS0; LO9TCKAqbH = LO9TCKAqbH +(42 - 41)) {
        for (int ihFxw9YZN1 = (440 - 440);
        LO9TCKAqbH > ihFxw9YZN1; ihFxw9YZN1 = ihFxw9YZN1 + (628 - 627)) {
            if (uhU1aKnSd[LO9TCKAqbH] > uhU1aKnSd[ihFxw9YZN1]) {
                float KBIPul;
                KBIPul = uhU1aKnSd[ihFxw9YZN1];
                uhU1aKnSd[ihFxw9YZN1] = uhU1aKnSd[LO9TCKAqbH];
                uhU1aKnSd[LO9TCKAqbH] = KBIPul;
            }
        }
    }
    for (int LO9TCKAqbH = (32 - 32);
    LO9TCKAqbH < FbH7IqydDm; LO9TCKAqbH = LO9TCKAqbH +(674 - 673))
        printf ("%.2f ", f06Vapm7N[LO9TCKAqbH]);
    printf ("%.2f", uhU1aKnSd[(550 - 550)]);
    for (int LO9TCKAqbH = 1;
    LO9TCKAqbH < FwlZCBS0; LO9TCKAqbH = LO9TCKAqbH +1)
        printf (" %.2f", uhU1aKnSd[LO9TCKAqbH]);
}

