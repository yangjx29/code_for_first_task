struct   lKy3xU {
    char hqUGA35jbox [(262 - 212)];
    struct   lKy3xU *kidO82uyXk7R;
};
int main () {
    lKy3xU *IeHPwmi6yp;
    lKy3xU *FSFvLBiX3;
    lKy3xU *PCRTu7X;
    FSFvLBiX3 = (struct   lKy3xU *) malloc (sizeof (struct   lKy3xU));
    PCRTu7X = (struct   lKy3xU *) malloc (sizeof (struct   lKy3xU));
    IeHPwmi6yp = (struct   lKy3xU *) malloc (sizeof (struct   lKy3xU));
    gets (IeHPwmi6yp->hqUGA35jbox);
    FSFvLBiX3->kidO82uyXk7R = NULL;
    for (; strcmp (IeHPwmi6yp->hqUGA35jbox, "end");) {
        if (!(NULL != FSFvLBiX3->kidO82uyXk7R)) {
            FSFvLBiX3->kidO82uyXk7R = IeHPwmi6yp;
            IeHPwmi6yp->kidO82uyXk7R = NULL;
        }
        else {
            PCRTu7X = FSFvLBiX3->kidO82uyXk7R;
            FSFvLBiX3->kidO82uyXk7R = IeHPwmi6yp;
            IeHPwmi6yp->kidO82uyXk7R = PCRTu7X;
        }
        IeHPwmi6yp = (struct   lKy3xU *) malloc (sizeof (struct   lKy3xU));
        gets (IeHPwmi6yp->hqUGA35jbox);
    }
    PCRTu7X = FSFvLBiX3;
    for (; PCRTu7X->kidO82uyXk7R != NULL;) {
        PCRTu7X = PCRTu7X->kidO82uyXk7R;
        printf ("%s\n", PCRTu7X->hqUGA35jbox);
    }
    return 0;
}

