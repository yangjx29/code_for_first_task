struct   stu {
    char xPy1cLXDTFpC [(163 - 143)];
    char H9kiMD6jIc [20];
    char N3xpm0;
    int cXoSFGm;
    char USr2cnZ3VuxM [20];
    char lw7zQ5pv [20];
    struct   stu *YgpQTa;
};
int main () {
    struct   stu *rvB9pm4jW;
    struct   stu *bsmSZvVxA;
    struct   stu *s3faGHe24JT;
    rvB9pm4jW = (struct   stu *) malloc (sizeof (struct   stu));
    rvB9pm4jW->YgpQTa = NULL;
    bsmSZvVxA = rvB9pm4jW;
    rvB9pm4jW = (struct   stu *) malloc (sizeof (struct   stu));
    for (; 1;) {
        scanf ("%s", rvB9pm4jW->xPy1cLXDTFpC);
        if (!('e' != rvB9pm4jW->xPy1cLXDTFpC[(86 - 86)])) {
            s3faGHe24JT = bsmSZvVxA;
            rvB9pm4jW->YgpQTa = bsmSZvVxA;
            break;
        }
        scanf ("%s %c %d %s %s", rvB9pm4jW->H9kiMD6jIc, &(rvB9pm4jW->N3xpm0), &(rvB9pm4jW->cXoSFGm), rvB9pm4jW->USr2cnZ3VuxM, rvB9pm4jW->lw7zQ5pv);
        rvB9pm4jW->YgpQTa = bsmSZvVxA;
        bsmSZvVxA = rvB9pm4jW;
        rvB9pm4jW = (struct   stu *) malloc (sizeof (struct   stu));
    }
    rvB9pm4jW = s3faGHe24JT;
    for (; rvB9pm4jW->YgpQTa != NULL;) {
        printf ("%s %s %c %d %s %s\n", rvB9pm4jW->xPy1cLXDTFpC, rvB9pm4jW->H9kiMD6jIc, rvB9pm4jW->N3xpm0, rvB9pm4jW->cXoSFGm, rvB9pm4jW->USr2cnZ3VuxM, rvB9pm4jW->lw7zQ5pv);
        rvB9pm4jW = rvB9pm4jW->YgpQTa;
    }
    return (77 - 77);
}

