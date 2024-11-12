struct   ob58wjTD3 {
    struct   ob58wjTD3 *zLspiq;
    char ob58wjTD3 [(362 - 342)];
    char b [(484 - 464)];
    char an8Wa4uyt;
    int TBzNIAVFDiu;
    char ZbhaYOS [20];
    char VYCwlh2V [20];
    struct   ob58wjTD3 *GJsqxBhZP;
};
int main () {
    char iV1sTyd;
    struct   ob58wjTD3 *BwHyibTO;
    struct   ob58wjTD3 *FNo4Hf3s7z;
    struct   ob58wjTD3 *ft9SniDK;
    struct   ob58wjTD3 *u1cFveZTq;
    BwHyibTO = (struct   ob58wjTD3 *) malloc (sizeof (struct   ob58wjTD3));
    BwHyibTO->zLspiq = NULL;
    ft9SniDK = BwHyibTO;
    {
        while (true) {
            u1cFveZTq = (struct   ob58wjTD3 *) malloc (sizeof (struct   ob58wjTD3));
            scanf ("%s", u1cFveZTq->ob58wjTD3);
            iV1sTyd = *u1cFveZTq->ob58wjTD3;
            if (iV1sTyd == 'e') {
                FNo4Hf3s7z = u1cFveZTq;
                u1cFveZTq->zLspiq = ft9SniDK;
                ft9SniDK->GJsqxBhZP = u1cFveZTq;
                u1cFveZTq->GJsqxBhZP = NULL;
                break;
            }
            u1cFveZTq->zLspiq = ft9SniDK;
            ft9SniDK->GJsqxBhZP = u1cFveZTq;
            ft9SniDK = u1cFveZTq;
            scanf ("%s %c %d %s %s", u1cFveZTq->b, &u1cFveZTq->an8Wa4uyt, &u1cFveZTq->TBzNIAVFDiu, &u1cFveZTq->ZbhaYOS, u1cFveZTq->VYCwlh2V);
        };
    }
    printf ("%s %s %c %d %s %s\n", ft9SniDK->ob58wjTD3, ft9SniDK->b, ft9SniDK->an8Wa4uyt, ft9SniDK->TBzNIAVFDiu, ft9SniDK->ZbhaYOS, ft9SniDK->VYCwlh2V);
    {
        while (true) {
            printf ("%s %s %c %d %s %s\n", ft9SniDK->zLspiq->ob58wjTD3, ft9SniDK->zLspiq->b, ft9SniDK->zLspiq->an8Wa4uyt, ft9SniDK->zLspiq->TBzNIAVFDiu, ft9SniDK->zLspiq->ZbhaYOS, ft9SniDK->zLspiq->VYCwlh2V);
            ft9SniDK = ft9SniDK->zLspiq;
            free (ft9SniDK->GJsqxBhZP);
            if (ft9SniDK->zLspiq->zLspiq == NULL)
                break;
        };
    }
    u1cFveZTq = FNo4Hf3s7z;
}

