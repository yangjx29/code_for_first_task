void  main () {
    int eDqtdsT;
    int DRoEvU920wX7 [(835 - 735)];
    int rOQ9eUN;
    int oltgcs9CnGk;
    int QrALblTZo;
    int *IeExBaAKM;
    eDqtdsT = 0;
    scanf ("%d", &rOQ9eUN);
    {
        oltgcs9CnGk = 0;
        while (rOQ9eUN > oltgcs9CnGk) {
            scanf ("%d", &DRoEvU920wX7[oltgcs9CnGk]);
            oltgcs9CnGk++;
        };
    }
    IeExBaAKM = DRoEvU920wX7;
    printf ("%d", *IeExBaAKM);
    {
        oltgcs9CnGk = 1;
        while (rOQ9eUN > oltgcs9CnGk) {
            for (QrALblTZo = oltgcs9CnGk - 1; 0 <= QrALblTZo; QrALblTZo--) {
                if (!(*(IeExBaAKM +oltgcs9CnGk) != *(IeExBaAKM +QrALblTZo))) {
                    eDqtdsT = 0;
                    break;
                }
                if (*(IeExBaAKM +QrALblTZo) != *(IeExBaAKM +oltgcs9CnGk))
                    eDqtdsT = 1;
            }
            if (eDqtdsT == 1)
                printf (",%d", *(IeExBaAKM +oltgcs9CnGk));
            oltgcs9CnGk++;
        };
    };
}

