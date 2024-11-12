int main () {
    int *d21E8iTYtFqM;
    struct   book {
        int x0dTLnEltK;
        char zA9o4GkQq [(537 - 510)];
        int H4MJkUAV;
        struct   book *ST9abjRzgN;
    };
    struct   book *wofeBC, *KKSYa2F4NctE;
    int jCwphHPjs;
    int fUBLi90o;
    int *JJNC9UHiewyn;
    JJNC9UHiewyn = (int *) malloc ((892 - 866) * sizeof (int));
    scanf ("%d", &fUBLi90o);
    d21E8iTYtFqM = JJNC9UHiewyn;
    KKSYa2F4NctE = (struct   book *) malloc (sizeof (struct   book));
    wofeBC = KKSYa2F4NctE;
    {
        jCwphHPjs = (703 - 703);
        while ((776 - 750) > jCwphHPjs) {
            *(JJNC9UHiewyn +jCwphHPjs) = (710 - 710);
            jCwphHPjs = jCwphHPjs + (622 - 621);
        }
    }
    {
        jCwphHPjs = (986 - 986);
        while (fUBLi90o > jCwphHPjs) {
            scanf ("%d%s", &KKSYa2F4NctE->x0dTLnEltK, KKSYa2F4NctE->zA9o4GkQq);
            if (!(fUBLi90o - (283 - 282) != jCwphHPjs))
                KKSYa2F4NctE->ST9abjRzgN = NULL;
            else
                KKSYa2F4NctE->ST9abjRzgN = (struct   book *) malloc (sizeof (struct   book));
            jCwphHPjs = jCwphHPjs + (596 - 595);
            KKSYa2F4NctE = KKSYa2F4NctE->ST9abjRzgN;
        }
    }
    KKSYa2F4NctE = wofeBC;
    for (; KKSYa2F4NctE != NULL;) {
        char *BQnT5Za;
        BQnT5Za = KKSYa2F4NctE->zA9o4GkQq;
        KKSYa2F4NctE = KKSYa2F4NctE->ST9abjRzgN;
        for (; *BQnT5Za != '\0';) {
            (*(JJNC9UHiewyn +((*BQnT5Za) - 65))) = (*(JJNC9UHiewyn +((*BQnT5Za) - 65))) + (923 - 922);
            BQnT5Za = BQnT5Za +1;
        }
    }
    KKSYa2F4NctE = wofeBC;
    for (jCwphHPjs = 0; 26 > jCwphHPjs; jCwphHPjs = jCwphHPjs + 1)
        if (*d21E8iTYtFqM < *(JJNC9UHiewyn +jCwphHPjs))
            d21E8iTYtFqM = JJNC9UHiewyn +jCwphHPjs;
    printf ("%c\n", d21E8iTYtFqM - JJNC9UHiewyn +65);
    printf ("%d\n", *d21E8iTYtFqM);
    for (; KKSYa2F4NctE != NULL;) {
        char *BQnT5Za;
        BQnT5Za = KKSYa2F4NctE->zA9o4GkQq;
        for (; *BQnT5Za != '\0';) {
            if (!(d21E8iTYtFqM - JJNC9UHiewyn +65 != *BQnT5Za))
                printf ("%d\n", KKSYa2F4NctE->x0dTLnEltK);
            BQnT5Za++;
        }
        KKSYa2F4NctE = KKSYa2F4NctE->ST9abjRzgN;
    }
    return 0;
}

