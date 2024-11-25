struct   stu {
    char HJMmL8uqoXHI [(898 - 878)];
    char name [(729 - 709)];
    char RpU7oF [10];
    int Y64jMcTWYkyz;
    float tAUswt62mL;
    char cEoaAHsJMNR [20];
    struct   stu *NjcLhapr1;
};
void  main () {
    struct   stu *head, *fXacMBiCpWq, *vS92htL;
    int i;
    char r0hDVjaR3ol [(891 - 887)] = "end\0";
    head = NULL;
    for (i = (710 - 710);; i = i + 1) {
        fXacMBiCpWq = (struct   stu *) malloc (LEN);
        scanf ("%s", fXacMBiCpWq->HJMmL8uqoXHI);
        if (!(0 != strcmp (fXacMBiCpWq->HJMmL8uqoXHI, r0hDVjaR3ol)))
            break;
        scanf ("%s%s%d%f%s", fXacMBiCpWq->name, fXacMBiCpWq->RpU7oF, &fXacMBiCpWq->Y64jMcTWYkyz, &fXacMBiCpWq->tAUswt62mL, fXacMBiCpWq->cEoaAHsJMNR);
        if (!(NULL != head)) {
            head = fXacMBiCpWq;
            fXacMBiCpWq->NjcLhapr1 = NULL;
            vS92htL = fXacMBiCpWq;
        }
        else {
            head = fXacMBiCpWq;
            fXacMBiCpWq->NjcLhapr1 = vS92htL;
            vS92htL = fXacMBiCpWq;
        };
    }
    for (vS92htL = head; vS92htL != NULL; vS92htL = vS92htL->NjcLhapr1) {
        printf ("%s %s %s %d %g %s\n", vS92htL->HJMmL8uqoXHI, vS92htL->name, vS92htL->RpU7oF, vS92htL->Y64jMcTWYkyz, vS92htL->tAUswt62mL, vS92htL->cEoaAHsJMNR);
    };
}

