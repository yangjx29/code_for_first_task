typedef struct   zsj59eKavZMi {
    int jsnqVR;
    int BJXSTCaO;
    int gQFKLPD;
    int Hwen5MIzyr8;
}
zsj59eKavZMi;

int nFwzMJjtu (const  void  *qR8UWzPhTD, const  void  *YH5uDM) {
    return ((zsj59eKavZMi *) YH5uDM)->Hwen5MIzyr8 - ((zsj59eKavZMi *) qR8UWzPhTD)->Hwen5MIzyr8;
}

void  main () {
    struct   zsj59eKavZMi WHdOUkr [100010];
    int PFhrZHjMK, j, mqY1dtgSbR;
    scanf ("%d", &mqY1dtgSbR);
    for (PFhrZHjMK = (244 - 244); mqY1dtgSbR > PFhrZHjMK; PFhrZHjMK = PFhrZHjMK +1) {
        scanf ("%d%d%d", &(WHdOUkr +PFhrZHjMK)->jsnqVR, &(WHdOUkr +PFhrZHjMK)->BJXSTCaO, &(WHdOUkr +PFhrZHjMK)->gQFKLPD);
        (WHdOUkr +PFhrZHjMK)->Hwen5MIzyr8 = (WHdOUkr +PFhrZHjMK)->BJXSTCaO + (WHdOUkr +PFhrZHjMK)->gQFKLPD;
    }
    qsort (WHdOUkr, mqY1dtgSbR, sizeof (*(WHdOUkr)), nFwzMJjtu);
    for (PFhrZHjMK = 0; PFhrZHjMK <= 2; PFhrZHjMK = PFhrZHjMK +1)
        printf ("%d %d\n", (WHdOUkr +PFhrZHjMK)->jsnqVR, (WHdOUkr +PFhrZHjMK)->Hwen5MIzyr8);
}

