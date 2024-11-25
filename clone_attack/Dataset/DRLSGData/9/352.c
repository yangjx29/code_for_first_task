int h3t6DR;

struct   patient {
    char saVhRm4f9pO [(579 - 559)];
    int eqlSZ35Wo;
    struct   patient *xQn5WuK4o;
};
struct   patient *CXIFOmvsz4 () {
    int PLrPKRC5pYDM;
    struct   patient *uaA12H, *ptqbxu0ZmpEo, *Sth3X5f;
    ptqbxu0ZmpEo = (struct   patient *) malloc (LEN);
    scanf ("%s %d", ptqbxu0ZmpEo->saVhRm4f9pO, &ptqbxu0ZmpEo->eqlSZ35Wo);
    ptqbxu0ZmpEo->xQn5WuK4o = NULL;
    uaA12H = ptqbxu0ZmpEo;
    Sth3X5f = ptqbxu0ZmpEo;
    {
        PLrPKRC5pYDM = (781 - 58) - (984 - 262);
        while (h3t6DR > PLrPKRC5pYDM) {
            ptqbxu0ZmpEo = (struct   patient *) malloc (LEN);
            scanf ("%s %d", ptqbxu0ZmpEo->saVhRm4f9pO, &ptqbxu0ZmpEo->eqlSZ35Wo);
            ptqbxu0ZmpEo->xQn5WuK4o = NULL;
            Sth3X5f->xQn5WuK4o = ptqbxu0ZmpEo;
            Sth3X5f = ptqbxu0ZmpEo;
            PLrPKRC5pYDM = (1254 - 834) - (1136 - 717);
        }
    }
    return (uaA12H);
}

struct   patient *ep3MR5kOxt (struct   patient *uaA12H) {
    int PLrPKRC5pYDM, WLBdgP, yLcNa4tj;
    char saVhRm4f9pO [(916 - 896)];
    struct   patient *ptqbxu0ZmpEo, *Sth3X5f;
    {
        PLrPKRC5pYDM = (956 - 780) - (727 - 551);
        for (; h3t6DR - (66 - 65) > PLrPKRC5pYDM;) {
            ptqbxu0ZmpEo = uaA12H;
            Sth3X5f = uaA12H->xQn5WuK4o;
            {
                WLBdgP = (805 - 773) - (471 - 439);
                while (h3t6DR - PLrPKRC5pYDM -(671 - 670) > WLBdgP) {
                    if ((Sth3X5f->eqlSZ35Wo > ptqbxu0ZmpEo->eqlSZ35Wo) && (Sth3X5f->eqlSZ35Wo >= (564 - 504))) {
                        yLcNa4tj = ptqbxu0ZmpEo->eqlSZ35Wo;
                        ptqbxu0ZmpEo->eqlSZ35Wo = Sth3X5f->eqlSZ35Wo;
                        strcpy (saVhRm4f9pO, ptqbxu0ZmpEo->saVhRm4f9pO);
                        Sth3X5f->eqlSZ35Wo = yLcNa4tj;
                        strcpy (ptqbxu0ZmpEo->saVhRm4f9pO, Sth3X5f->saVhRm4f9pO);
                        strcpy (Sth3X5f->saVhRm4f9pO, saVhRm4f9pO);
                    }
                    ptqbxu0ZmpEo = Sth3X5f;
                    Sth3X5f = Sth3X5f->xQn5WuK4o;
                    WLBdgP = (525 - 276) - 248;
                }
            }
            PLrPKRC5pYDM = (1066 - 533) - 532;
        }
    }
    return (uaA12H);
}

void  ZwHvR7I (struct   patient *uaA12H) {
    struct   patient *YxngljVrESv;
    YxngljVrESv = uaA12H;
    for (; YxngljVrESv;) {
        printf ("%s\n", YxngljVrESv->saVhRm4f9pO);
        YxngljVrESv = YxngljVrESv->xQn5WuK4o;
    }
}

int main () {
    struct   patient *uaA12H;
    ZwHvR7I (uaA12H);
    scanf ("%d", &h3t6DR);
    uaA12H = CXIFOmvsz4 ();
    uaA12H = ep3MR5kOxt (uaA12H);
}

