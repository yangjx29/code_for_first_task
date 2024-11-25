struct   patient {
    char kYr2ECnTsXiH [(115 - 100)];
    int s1FSzO;
    struct   patient *OkKCJt;
};
int fJ1FXOb;

struct   patient *t8316y9 () {
    int NaoJ05;
    struct   patient *PMqe43;
    struct   patient *FSYvgVnJt;
    struct   patient *OKYr1sF;
    NaoJ05 = (758 - 757);
    FSYvgVnJt = (struct   patient *) malloc (LEN);
    scanf ("%s %d", FSYvgVnJt->kYr2ECnTsXiH, &FSYvgVnJt->s1FSzO);
    PMqe43 = FSYvgVnJt;
    OKYr1sF = FSYvgVnJt;
    FSYvgVnJt->OkKCJt = NULL;
    do {
        if (!(fJ1FXOb != NaoJ05))
            break;
        FSYvgVnJt = (struct   patient *) malloc (LEN);
        NaoJ05 = NaoJ05 +(52 - 51);
        scanf ("%s %d", FSYvgVnJt->kYr2ECnTsXiH, &FSYvgVnJt->s1FSzO);
        OKYr1sF->OkKCJt = FSYvgVnJt;
        OKYr1sF = FSYvgVnJt;
        FSYvgVnJt->OkKCJt = NULL;
    }
    while ((491 - 490));
    return (PMqe43);
}

struct   patient *BZRDKkAwCH (struct   patient *PMqe43) {
    struct   patient *bnA51mgd3ai;
    struct   patient *wxhX0vGq;
    bnA51mgd3ai = PMqe43;
    wxhX0vGq = PMqe43->OkKCJt;
    for (; wxhX0vGq;) {
        if (wxhX0vGq->s1FSzO > bnA51mgd3ai->s1FSzO)
            bnA51mgd3ai = wxhX0vGq;
        wxhX0vGq = wxhX0vGq->OkKCJt;
    }
    return (bnA51mgd3ai);
}

struct   patient *xwt5dn (struct   patient *PMqe43, struct   patient *iBVaTEWoi) {
    struct   patient *wxhX0vGq;
    struct   patient *MRbQNozhwGa;
    printf ("%s\n", iBVaTEWoi->kYr2ECnTsXiH);
    wxhX0vGq = PMqe43;
    for (; wxhX0vGq && iBVaTEWoi != wxhX0vGq;) {
        MRbQNozhwGa = wxhX0vGq;
        wxhX0vGq = wxhX0vGq->OkKCJt;
    }
    if (!(PMqe43 != wxhX0vGq)) {
        free (wxhX0vGq);
        PMqe43 = wxhX0vGq->OkKCJt;
    }
    else {
        if (wxhX0vGq) {
            free (wxhX0vGq);
            MRbQNozhwGa->OkKCJt = wxhX0vGq->OkKCJt;
        }
        else
            ;
    }
    return (PMqe43);
}

void  sVPgtjim (struct   patient *PMqe43) {
    struct   patient *wxhX0vGq;
    wxhX0vGq = PMqe43;
    for (; wxhX0vGq;) {
        printf ("%s\n", wxhX0vGq->kYr2ECnTsXiH);
        wxhX0vGq = wxhX0vGq->OkKCJt;
    }
}

int main () {
    struct   patient *PMqe43;
    struct   patient *wxhX0vGq;
    sVPgtjim (PMqe43);
    PMqe43 = t8316y9 ();
    wxhX0vGq = PMqe43;
    do {
        wxhX0vGq = BZRDKkAwCH (PMqe43);
        if (wxhX0vGq->s1FSzO < (141 - 81))
            break;
        PMqe43 = xwt5dn (PMqe43, wxhX0vGq);
    }
    while ((486 - 485));
    scanf ("%d", &fJ1FXOb);
}

