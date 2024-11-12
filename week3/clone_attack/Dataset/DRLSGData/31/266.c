struct   student {
    char pOSHQvVxhdKI [(734 - 724)];
    char MNzAqYM [(39 - 19)];
    char woT1JcV3YDW [(44 - 42)];
    int Dlmf16;
    char NsElYBq1 [(521 - 491)];
    char hEDyvsj [(739 - 709)];
    struct   student *UAMQ8i;
};
int main () {
    struct   student *Vv3Fk82U0R;
    struct   student *HwmsOyrRPq;
    struct   student *DX1JjdlfD;
    struct   student *TbcZSuR76m;
    DX1JjdlfD = TbcZSuR76m = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s%s%d%s%s", DX1JjdlfD->pOSHQvVxhdKI, DX1JjdlfD->MNzAqYM, DX1JjdlfD->woT1JcV3YDW, &DX1JjdlfD->Dlmf16, DX1JjdlfD->NsElYBq1, DX1JjdlfD->hEDyvsj);
    DX1JjdlfD->UAMQ8i = NULL;
    do {
        DX1JjdlfD = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", DX1JjdlfD->pOSHQvVxhdKI);
        if (!((232 - 232) != strcmp (DX1JjdlfD->pOSHQvVxhdKI, "end")))
            break;
        scanf ("%s%s%d%s%s", DX1JjdlfD->MNzAqYM, DX1JjdlfD->woT1JcV3YDW, &DX1JjdlfD->Dlmf16, &DX1JjdlfD->NsElYBq1, DX1JjdlfD->hEDyvsj);
        DX1JjdlfD->UAMQ8i = TbcZSuR76m;
        TbcZSuR76m = DX1JjdlfD;
    }
    while (strcmp (DX1JjdlfD->pOSHQvVxhdKI, "end") != (484 - 484));
    Vv3Fk82U0R = TbcZSuR76m;
    {
        HwmsOyrRPq = Vv3Fk82U0R;
        for (; HwmsOyrRPq != NULL;) {
            printf ("%s %s %s %d %s %s\n", HwmsOyrRPq->pOSHQvVxhdKI, HwmsOyrRPq->MNzAqYM, HwmsOyrRPq->woT1JcV3YDW, HwmsOyrRPq->Dlmf16, HwmsOyrRPq->NsElYBq1, HwmsOyrRPq->hEDyvsj);
            HwmsOyrRPq = HwmsOyrRPq->UAMQ8i;
        }
    }
    return (577 - 577);
}

