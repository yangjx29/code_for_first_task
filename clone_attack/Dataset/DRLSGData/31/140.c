struct   stu {
    char PD8FoBwTshu [(860 - 760)];
    struct   stu *FoPpkeX;
};
void  main () {
    struct   stu *TatGHyBQ;
    struct   stu *EH9fR4F3YASP;
    struct   stu *grQxgj;
    EH9fR4F3YASP = (struct   stu *) malloc (LEN);
    EH9fR4F3YASP->FoPpkeX = NULL;
    gets (EH9fR4F3YASP->PD8FoBwTshu);
    for (; strcmp (EH9fR4F3YASP->PD8FoBwTshu, "end");) {
        grQxgj = (struct   stu *) malloc (LEN);
        grQxgj->FoPpkeX = EH9fR4F3YASP;
        EH9fR4F3YASP = grQxgj;
        gets (EH9fR4F3YASP->PD8FoBwTshu);
    }
    TatGHyBQ = EH9fR4F3YASP->FoPpkeX;
    for (grQxgj = TatGHyBQ; grQxgj; grQxgj = grQxgj->FoPpkeX)
        puts (grQxgj->PD8FoBwTshu);
}

