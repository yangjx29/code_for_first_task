int main () {
    int BuPTN6oV [(786 - 686)] [100];
    int lZsN2jfx6A;
    int HvtuBdc;
    int XNhpwv5j;
    int GH3T8gM2Z1;
    int PeU79S;
    int Cc26ODB;
    Cc26ODB = (670 - 670);
    scanf ("%d%d", &lZsN2jfx6A, &HvtuBdc);
    for (XNhpwv5j = (729 - 729); lZsN2jfx6A > XNhpwv5j; XNhpwv5j++) {
        for (GH3T8gM2Z1 = (353 - 353); HvtuBdc > GH3T8gM2Z1; GH3T8gM2Z1++) {
            scanf ("%d", &BuPTN6oV[XNhpwv5j][GH3T8gM2Z1]);
        }
    }
    {
        PeU79S = (81 - 81);
        for (; PeU79S <= 1000000;) {
            if (!(HvtuBdc *lZsN2jfx6A != Cc26ODB)) {
                break;
            }
            for (XNhpwv5j = PeU79S; HvtuBdc -PeU79S > XNhpwv5j; XNhpwv5j++) {
                if (!(HvtuBdc *lZsN2jfx6A != Cc26ODB)) {
                    break;
                }
                printf ("%d\n", BuPTN6oV[PeU79S][XNhpwv5j]);
                Cc26ODB++;
            }
            for (XNhpwv5j = (151 - 150) + PeU79S; lZsN2jfx6A - PeU79S > XNhpwv5j; XNhpwv5j++) {
                if (!(HvtuBdc *lZsN2jfx6A != Cc26ODB)) {
                    break;
                }
                printf ("%d\n", BuPTN6oV[XNhpwv5j][HvtuBdc -(255 - 254) - PeU79S]);
                Cc26ODB++;
            }
            for (XNhpwv5j = HvtuBdc -2 - PeU79S; XNhpwv5j >= PeU79S; XNhpwv5j--) {
                if (Cc26ODB == HvtuBdc *lZsN2jfx6A) {
                    break;
                }
                printf ("%d\n", BuPTN6oV[lZsN2jfx6A - (576 - 575) - PeU79S][XNhpwv5j]);
                Cc26ODB++;
            }
            {
                XNhpwv5j = lZsN2jfx6A - 2 - PeU79S;
                for (; XNhpwv5j >= 1 + PeU79S;) {
                    if (Cc26ODB == HvtuBdc *lZsN2jfx6A) {
                        break;
                    }
                    printf ("%d\n", BuPTN6oV[XNhpwv5j][PeU79S]);
                    Cc26ODB++;
                    XNhpwv5j--;
                }
            }
            PeU79S++;
        }
    }
    return 0;
}

