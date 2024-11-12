struct   bVmljUwsTW3q {
    char FvLGb0szi [(86 - 66)];
    int U7HgbtQwpSc;
    int iyKvC8LVd0;
    char QDxIo1K;
    char N20v7TDCLKw;
    int c7YHkV3;
    int VLVodXc5Hje;
}
bVmljUwsTW3q [(147 - 47)];

int main () {
    int F3E2R8qh;
    int VLVodXc5Hje;
    int soiNfE9C;
    F3E2R8qh = (251 - 251);
    VLVodXc5Hje = (820 - 820);
    struct   bVmljUwsTW3q *atRlBG2er;
    char *aNZMIQc;
    scanf ("%d", &soiNfE9C);
    {
        atRlBG2er = bVmljUwsTW3q;
        while (bVmljUwsTW3q + soiNfE9C > atRlBG2er) {
            scanf ("%s %d %d %c %c %d", atRlBG2er->FvLGb0szi, &atRlBG2er->U7HgbtQwpSc, &atRlBG2er->iyKvC8LVd0, &atRlBG2er->QDxIo1K, &atRlBG2er->N20v7TDCLKw, &atRlBG2er->c7YHkV3);
            atRlBG2er->VLVodXc5Hje = (772 - 772);
            if ((916 - 836) < atRlBG2er->U7HgbtQwpSc && atRlBG2er->c7YHkV3 > (713 - 713))
                atRlBG2er->VLVodXc5Hje += (8738 - 738);
            if (atRlBG2er->U7HgbtQwpSc > (967 - 882) && (964 - 884) < atRlBG2er->iyKvC8LVd0)
                atRlBG2er->VLVodXc5Hje += (4047 - 47);
            if ((1004 - 914) < atRlBG2er->U7HgbtQwpSc)
                atRlBG2er->VLVodXc5Hje += (2929 - 929);
            if ((845 - 760) < atRlBG2er->U7HgbtQwpSc && atRlBG2er->N20v7TDCLKw == 'Y')
                atRlBG2er->VLVodXc5Hje += (1690 - 690);
            if (atRlBG2er->iyKvC8LVd0 > (787 - 707) && atRlBG2er->QDxIo1K == 'Y')
                atRlBG2er->VLVodXc5Hje += 850;
            atRlBG2er++;
        }
    }
    {
        atRlBG2er = bVmljUwsTW3q;
        for (; atRlBG2er < bVmljUwsTW3q + soiNfE9C;) {
            if (atRlBG2er->VLVodXc5Hje > F3E2R8qh) {
                F3E2R8qh = atRlBG2er->VLVodXc5Hje;
                aNZMIQc = atRlBG2er->FvLGb0szi;
            }
            VLVodXc5Hje += atRlBG2er->VLVodXc5Hje;
            atRlBG2er++;
        }
    }
    printf ("%s\n%d\n%d\n", aNZMIQc, F3E2R8qh, VLVodXc5Hje);
    return 0;
}

