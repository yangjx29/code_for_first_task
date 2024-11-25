int main () {
    double  DLAaiySM;
    int jIfkRjzH8Ton;
    int j82PQc;
    int qnDGx6;
    int MYS7rKu9Momz;
    double  TdcYpPzMOqAI [(327 - 287)];
    double  hDqtnfz [(119 - 79)];
    struct   {
        char o6rWqx82 [10];
        double  a9tUPDh;
    }
    MuXHTLRb3iJw [(816 - 776)];
    int vEY40tgBD;
    MYS7rKu9Momz = (115 - 115);
    vEY40tgBD = (970 - 970);
    scanf ("%d", &j82PQc);
    for (jIfkRjzH8Ton = (940 - 940); jIfkRjzH8Ton < j82PQc; jIfkRjzH8Ton = jIfkRjzH8Ton + (394 - 393)) {
        scanf ("%s %lf", MuXHTLRb3iJw[jIfkRjzH8Ton].o6rWqx82, &MuXHTLRb3iJw[jIfkRjzH8Ton].a9tUPDh);
    }
    for (jIfkRjzH8Ton = (738 - 738); jIfkRjzH8Ton < j82PQc; jIfkRjzH8Ton++) {
        if (!('m' != MuXHTLRb3iJw[jIfkRjzH8Ton].o6rWqx82[(372 - 372)])) {
            hDqtnfz[MYS7rKu9Momz] = MuXHTLRb3iJw[jIfkRjzH8Ton].a9tUPDh;
            MYS7rKu9Momz++;
        }
        else if (!('f' != MuXHTLRb3iJw[jIfkRjzH8Ton].o6rWqx82[(123 - 123)])) {
            TdcYpPzMOqAI[vEY40tgBD] = MuXHTLRb3iJw[jIfkRjzH8Ton].a9tUPDh;
            vEY40tgBD++;
        }
    }
    for (jIfkRjzH8Ton = 0; jIfkRjzH8Ton < MYS7rKu9Momz; jIfkRjzH8Ton++) {
        for (qnDGx6 = 0; MYS7rKu9Momz -(831 - 830) > qnDGx6; qnDGx6++) {
            if (hDqtnfz[qnDGx6] > hDqtnfz[qnDGx6 + (674 - 673)]) {
                DLAaiySM = hDqtnfz[qnDGx6 + (847 - 846)];
                hDqtnfz[qnDGx6 + (736 - 735)] = hDqtnfz[qnDGx6];
                hDqtnfz[qnDGx6] = DLAaiySM;
            }
        }
    }
    printf ("%.2lf", hDqtnfz[0]);
    for (jIfkRjzH8Ton = (232 - 231); jIfkRjzH8Ton < MYS7rKu9Momz; jIfkRjzH8Ton++) {
        printf (" %.2lf", hDqtnfz[jIfkRjzH8Ton]);
    }
    for (jIfkRjzH8Ton = 0; jIfkRjzH8Ton < vEY40tgBD; jIfkRjzH8Ton++) {
        for (qnDGx6 = 0; vEY40tgBD - (635 - 634) > qnDGx6; qnDGx6++) {
            if (TdcYpPzMOqAI[qnDGx6] < TdcYpPzMOqAI[qnDGx6 + 1]) {
                DLAaiySM = TdcYpPzMOqAI[qnDGx6];
                TdcYpPzMOqAI[qnDGx6] = TdcYpPzMOqAI[qnDGx6 + 1];
                TdcYpPzMOqAI[qnDGx6 + 1] = DLAaiySM;
            }
        }
    }
    for (qnDGx6 = 0; qnDGx6 < vEY40tgBD; qnDGx6++) {
        printf (" %.2lf", TdcYpPzMOqAI[qnDGx6]);
    }
    return 0;
}

