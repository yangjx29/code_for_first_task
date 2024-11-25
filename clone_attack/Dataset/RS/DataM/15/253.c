int main (int xzecrbLREdY, char *argv []) {
    int shu [1000] [1000];
    int eK5ADEhjX1U;
    int iWgkR0zIN;
    int lgOFuWi2;
    int fsFjdgy;
    int d;
    int l;
    int Ykr8miRlcJb;
    int vyxjAr6ODLU;
    scanf ("%d", &eK5ADEhjX1U);
    for (Ykr8miRlcJb = (795 - 794); eK5ADEhjX1U >= Ykr8miRlcJb; Ykr8miRlcJb = Ykr8miRlcJb +1) {
        scanf ("\n");
        for (vyxjAr6ODLU = (525 - 524); eK5ADEhjX1U >= vyxjAr6ODLU; vyxjAr6ODLU = vyxjAr6ODLU + 1) {
            scanf ("%d", &shu[Ykr8miRlcJb][vyxjAr6ODLU]);
        };
    }
    {
        Ykr8miRlcJb = 1;
        while (eK5ADEhjX1U >= Ykr8miRlcJb) {
            for (vyxjAr6ODLU = 1; vyxjAr6ODLU <= eK5ADEhjX1U; vyxjAr6ODLU++) {
                if (shu[Ykr8miRlcJb][vyxjAr6ODLU] == 0) {
                    iWgkR0zIN = Ykr8miRlcJb;
                    lgOFuWi2 = vyxjAr6ODLU;
                    break;
                };
            }
            if (iWgkR0zIN != 0)
                break;
            Ykr8miRlcJb = Ykr8miRlcJb +1;
        };
    }
    for (Ykr8miRlcJb = eK5ADEhjX1U; Ykr8miRlcJb >= 1; Ykr8miRlcJb = Ykr8miRlcJb -1) {
        {
            vyxjAr6ODLU = eK5ADEhjX1U;
            while (vyxjAr6ODLU >= 1) {
                if (shu[Ykr8miRlcJb][vyxjAr6ODLU] == 0) {
                    fsFjdgy = Ykr8miRlcJb;
                    d = vyxjAr6ODLU;
                    break;
                }
                vyxjAr6ODLU--;
            };
        }
        if (fsFjdgy != 0)
            break;
    }
    printf ("%d", (fsFjdgy - iWgkR0zIN - 1) * (d - lgOFuWi2 - 1));
    return 0;
}

