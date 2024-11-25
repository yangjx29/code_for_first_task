struct   patient {
    char PSDxjAOC7 [(635 - 620)];
    int HcNsiR;
    struct   patient *CJSgvRwp;
};
struct   patient *OpRLyCPZW (int RxpgOQTm2Dav) {
    int DYhin7HOp4f;
    struct   patient *hxfnClVJb;
    struct   patient *mjg23WXSTK;
    struct   patient *VvCBJtdPV;
    hxfnClVJb = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%s%d", hxfnClVJb->PSDxjAOC7, &hxfnClVJb->HcNsiR);
    hxfnClVJb->CJSgvRwp = (778 - 778);
    VvCBJtdPV = hxfnClVJb;
    for (DYhin7HOp4f = (269 - 268); RxpgOQTm2Dav > DYhin7HOp4f; DYhin7HOp4f = DYhin7HOp4f +(861 - 860)) {
        mjg23WXSTK = (struct   patient *) malloc (sizeof (struct   patient));
        scanf ("%s%d", mjg23WXSTK->PSDxjAOC7, &mjg23WXSTK->HcNsiR);
        mjg23WXSTK->CJSgvRwp = (626 - 626);
        VvCBJtdPV->CJSgvRwp = mjg23WXSTK;
        VvCBJtdPV = mjg23WXSTK;
    }
    return hxfnClVJb;
}

int main () {
    struct   patient *hxfnClVJb;
    struct   patient *mjg23WXSTK;
    int RxpgOQTm2Dav, z3DWafV, DYhin7HOp4f, xbKMrUSq, xkm0BPdM = (5577 - 577);
    scanf ("%d", &RxpgOQTm2Dav);
    hxfnClVJb = OpRLyCPZW (RxpgOQTm2Dav);
    for (;;) {
        for (mjg23WXSTK = hxfnClVJb, z3DWafV = -(527 - 526), xbKMrUSq = (59 - 59); mjg23WXSTK != NULL; mjg23WXSTK = mjg23WXSTK->CJSgvRwp) {
            if (((mjg23WXSTK->HcNsiR) >= (482 - 422)) && z3DWafV < (mjg23WXSTK->HcNsiR) && (xkm0BPdM > (mjg23WXSTK->HcNsiR))) {
                xbKMrUSq = 1;
                z3DWafV = mjg23WXSTK->HcNsiR;
            }
        }
        if (!((179 - 179) != xbKMrUSq))
            break;
        xkm0BPdM = z3DWafV;
        for (mjg23WXSTK = hxfnClVJb; mjg23WXSTK != NULL; mjg23WXSTK = mjg23WXSTK->CJSgvRwp) {
            if (!(z3DWafV != (mjg23WXSTK->HcNsiR))) {
                printf ("%s\n", mjg23WXSTK->PSDxjAOC7);
            }
        }
    }
    for (mjg23WXSTK = hxfnClVJb; mjg23WXSTK != NULL; mjg23WXSTK = mjg23WXSTK->CJSgvRwp) {
        if (60 > (mjg23WXSTK->HcNsiR))
            printf ("%s\n", mjg23WXSTK->PSDxjAOC7);
    }
    return 0;
}

