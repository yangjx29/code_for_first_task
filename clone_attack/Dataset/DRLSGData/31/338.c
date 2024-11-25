struct   student {
    char wSEujGJ1 [(606 - 591)];
    char Uv0tQNq2OiIM [(641 - 621)];
    char dwJE964YyrkW;
    int KfXlV0;
    char CIHODRbC [(540 - 520)];
    char njDaQOtPN [(761 - 741)];
    struct   student *VlQF2DPq;
};
struct   student *XNlSMGn (void ) {
    struct   student *s3vCD24a;
    struct   student *f9rDRtk;
    struct   student *M4KPF7hH0;
    s3vCD24a = (struct   student *) malloc (LEN);
    f9rDRtk = s3vCD24a;
    M4KPF7hH0 = s3vCD24a;
    scanf ("%s%s %c %d %s %s", s3vCD24a->wSEujGJ1, s3vCD24a->Uv0tQNq2OiIM, &s3vCD24a->dwJE964YyrkW, &s3vCD24a->KfXlV0, s3vCD24a->CIHODRbC, s3vCD24a->njDaQOtPN);
    f9rDRtk = (struct   student *) malloc (LEN);
    scanf ("%s%s %c %d %s %s", f9rDRtk->wSEujGJ1, f9rDRtk->Uv0tQNq2OiIM, &f9rDRtk->dwJE964YyrkW, &f9rDRtk->KfXlV0, f9rDRtk->CIHODRbC, f9rDRtk->njDaQOtPN);
    M4KPF7hH0->VlQF2DPq = f9rDRtk;
    M4KPF7hH0 = f9rDRtk;
    for (; (132 - 131);) {
        f9rDRtk = (struct   student *) malloc (LEN);
        scanf ("%s", f9rDRtk->wSEujGJ1);
        if (!((789 - 789) != strcmp (f9rDRtk->wSEujGJ1, "end"))) {
            M4KPF7hH0->VlQF2DPq = NULL;
            break;
        }
        scanf ("%s %c %d %s %s", f9rDRtk->Uv0tQNq2OiIM, &f9rDRtk->dwJE964YyrkW, &f9rDRtk->KfXlV0, f9rDRtk->CIHODRbC, f9rDRtk->njDaQOtPN);
        M4KPF7hH0->VlQF2DPq = f9rDRtk;
        M4KPF7hH0 = f9rDRtk;
    }
    return (s3vCD24a);
}

int main () {
    int dx7bH3Wpe;
    struct   student *l5bNVwIXd;
    struct   student *f9rDRtk;
    struct   student *M4KPF7hH0;
    struct   student *b8xnIf;
    int sPFwmO;
    int aoVRO8;
    l5bNVwIXd = XNlSMGn ();
    f9rDRtk = l5bNVwIXd;
    f9rDRtk = f9rDRtk->VlQF2DPq;
    M4KPF7hH0 = l5bNVwIXd;
    b8xnIf = l5bNVwIXd;
    sPFwmO = (864 - 863);
    f9rDRtk = f9rDRtk->VlQF2DPq;
    M4KPF7hH0 = M4KPF7hH0->VlQF2DPq;
    for (; f9rDRtk != NULL;) {
        M4KPF7hH0->VlQF2DPq = b8xnIf;
        b8xnIf = M4KPF7hH0;
        M4KPF7hH0 = f9rDRtk;
        f9rDRtk = f9rDRtk->VlQF2DPq;
    }
    M4KPF7hH0->VlQF2DPq = b8xnIf;
    f9rDRtk = M4KPF7hH0;
    l5bNVwIXd->VlQF2DPq = NULL;
    for (; f9rDRtk != NULL;) {
        printf ("%s %s %c %d %s %s\n", f9rDRtk->wSEujGJ1, f9rDRtk->Uv0tQNq2OiIM, f9rDRtk->dwJE964YyrkW, f9rDRtk->KfXlV0, f9rDRtk->CIHODRbC, f9rDRtk->njDaQOtPN);
        f9rDRtk = f9rDRtk->VlQF2DPq;
    }
    return (142 - 142);
}

