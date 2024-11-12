struct   student {
    char RcXuBOs4t [(128 - 28)];
    struct   student *B7E5HDt9;
};
int main () {
    struct   student *LoLuYJP;
    struct   student *mZzQLd;
    LoLuYJP = (struct   student *) malloc (len);
    LoLuYJP->B7E5HDt9 = NULL;
    gets (LoLuYJP->RcXuBOs4t);
    for (; (strcmp (LoLuYJP->RcXuBOs4t, "end")) != (274 - 274);) {
        mZzQLd = LoLuYJP;
        LoLuYJP = (struct   student *) malloc (len);
        LoLuYJP->B7E5HDt9 = mZzQLd;
        gets (LoLuYJP->RcXuBOs4t);
    }
    LoLuYJP = LoLuYJP->B7E5HDt9;
    for (; LoLuYJP != NULL;) {
        printf ("%s\n", LoLuYJP->RcXuBOs4t);
        LoLuYJP = LoLuYJP->B7E5HDt9;
    }
    return (454 - 454);
}

