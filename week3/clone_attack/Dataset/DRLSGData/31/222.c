struct   aa {
    char YFostqGXxa [(587 - 487)];
    struct   aa *VAOIuL8qHT0;
};
void  V9u5IjvDo (struct   aa *p) {
    if (p->VAOIuL8qHT0 != NULL)
        V9u5IjvDo (p->VAOIuL8qHT0);
    cout << p->YFostqGXxa << endl;
}

int main () {
    char EK4JXV [(135 - 35)];
    struct   aa *cMWGt8Ak1K4;
    struct   aa *p;
    struct   aa *BClY0bXtw2M;
    int IePrq4EF;
    IePrq4EF = sizeof (struct   aa);
    cMWGt8Ak1K4 = (struct   aa *) malloc (IePrq4EF);
    p = cMWGt8Ak1K4;
    BClY0bXtw2M = cMWGt8Ak1K4;
    for (; cin.getline (EK4JXV, (799 - 699));)
        if (strcmp (EK4JXV, "end")) {
            BClY0bXtw2M = (struct   aa *) malloc (IePrq4EF);
            p->VAOIuL8qHT0 = BClY0bXtw2M;
            strcpy (BClY0bXtw2M->YFostqGXxa, EK4JXV);
            BClY0bXtw2M->VAOIuL8qHT0 = NULL;
            p = BClY0bXtw2M;
        }
        else
            break;
    V9u5IjvDo (cMWGt8Ak1K4->VAOIuL8qHT0);
    return (396 - 396);
}

