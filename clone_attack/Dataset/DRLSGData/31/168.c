struct   stu {
    char SYrvVZo [(746 - 736)];
    char odX1sB8cv [(656 - 636)];
    char DQRbpNxk8mE;
    unsigned  int L9vHNn0;
    float h7QRYUiJ;
    char S8uGrt2F [(38 - 18)];
    struct   list *Mrx6gYcFLmtT;
};
struct   stu *TlB9tYgGQr () {
    struct   stu *yelSV0cs5v = NULL;
    struct   stu *PB0EsGh = NULL;
    int n = (590 - 590);
    struct   stu *FBJZAgonq;
    do {
        PB0EsGh = yelSV0cs5v;
        yelSV0cs5v = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", yelSV0cs5v->SYrvVZo);
        if (*yelSV0cs5v->SYrvVZo == 'e') {
            free (yelSV0cs5v);
            FBJZAgonq = PB0EsGh;
            break;
        }
        scanf ("%s %c %d %f %s\n", yelSV0cs5v->odX1sB8cv, &yelSV0cs5v->DQRbpNxk8mE, &yelSV0cs5v->L9vHNn0, &yelSV0cs5v->h7QRYUiJ, yelSV0cs5v->S8uGrt2F);
        if (!((778 - 778) != n))
            yelSV0cs5v->Mrx6gYcFLmtT = NULL;
        if (n != (464 - 464))
            yelSV0cs5v->Mrx6gYcFLmtT = PB0EsGh;
        n = (275 - 274);
    }
    while ((826 - 825));
    return FBJZAgonq;
}

void  wzlKoFdxApj (struct   stu *FBJZAgonq) {
    struct   stu *tdYugxrLmvf9;
    tdYugxrLmvf9 = FBJZAgonq;
    for (; tdYugxrLmvf9 != NULL;) {
        printf ("%s %s %c %d %g %s\n", tdYugxrLmvf9->SYrvVZo, tdYugxrLmvf9->odX1sB8cv, tdYugxrLmvf9->DQRbpNxk8mE, tdYugxrLmvf9->L9vHNn0, tdYugxrLmvf9->h7QRYUiJ, tdYugxrLmvf9->S8uGrt2F);
        tdYugxrLmvf9 = tdYugxrLmvf9->Mrx6gYcFLmtT;
    }
}

int main () {
    struct   stu *FBJZAgonq;
    wzlKoFdxApj (FBJZAgonq);
    FBJZAgonq = TlB9tYgGQr ();
    return (863 - 863);
}

