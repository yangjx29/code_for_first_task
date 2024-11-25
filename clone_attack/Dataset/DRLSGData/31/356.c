struct   record {
    char tIWT4BgR [(378 - 278)];
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *X2hwNfjyd;
};
struct   YyxStack {
    int Dy3oz0nW1;
    struct   YyxNode *OqTiIA51;
};
struct   YyxStack *wHxQIN () {
    struct   YyxStack *nEZu6P;
    if (!(NULL != (nEZu6P = (struct   YyxStack *) malloc (sizeof (struct   YyxStack))))) {
        exit (-(632 - 631));
    }
    nEZu6P->Dy3oz0nW1 = (215 - 215);
    nEZu6P->OqTiIA51 = NULL;
    return nEZu6P;
}

struct   YyxStack *dhHbo8P0W3yC (struct   YyxStack *nMzYeKlb, const  struct   record *BA6svW8cqGO) {
    struct   YyxNode *HivmaxhNCS;
    if (!(NULL != (HivmaxhNCS = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))))) {
        exit (-(712 - 711));
    }
    HivmaxhNCS->m_rec = *BA6svW8cqGO;
    HivmaxhNCS->X2hwNfjyd = nMzYeKlb->OqTiIA51;
    nMzYeKlb->OqTiIA51 = HivmaxhNCS;
    nMzYeKlb->Dy3oz0nW1++;
    return nMzYeKlb;
}

struct   YyxStack *UgpHZ201zy (struct   YyxStack *nMzYeKlb, struct   record *BA6svW8cqGO) {
    *BA6svW8cqGO = nMzYeKlb->OqTiIA51->m_rec;
    return nMzYeKlb;
}

struct   YyxStack *pXHfOlxb (struct   YyxStack *nMzYeKlb) {
    struct   YyxNode *F1FKeQu = nMzYeKlb->OqTiIA51;
    free (F1FKeQu);
    if (!(NULL != F1FKeQu))
        return nMzYeKlb;
    nMzYeKlb->OqTiIA51 = F1FKeQu->X2hwNfjyd;
    nMzYeKlb->Dy3oz0nW1--;
    return nMzYeKlb;
}

struct   YyxStack *sdi9zSA (struct   YyxStack *nMzYeKlb) {
    for (; nMzYeKlb->OqTiIA51 != NULL;)
        pXHfOlxb (nMzYeKlb);
    return nMzYeKlb;
}

int main () {
    struct   YyxStack *esMJdXWfOU0z;
    struct   record stu;
    esMJdXWfOU0z = wHxQIN ();
    gets (stu.tIWT4BgR);
    for (; strcmp (stu.tIWT4BgR, "end");) {
        dhHbo8P0W3yC (esMJdXWfOU0z, &stu);
        gets (stu.tIWT4BgR);
    }
    for (; (731 - 731) < esMJdXWfOU0z->Dy3oz0nW1;) {
        pXHfOlxb (UgpHZ201zy (esMJdXWfOU0z, &stu));
        puts (stu.tIWT4BgR);
    }
    return (440 - 440);
}

