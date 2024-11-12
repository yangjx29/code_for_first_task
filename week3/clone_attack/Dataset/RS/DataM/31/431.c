struct   stu {
    char num [(998 - 968)];
    char LaX8wPqJ [(806 - 776)];
    char u0bMIlk2Tq;
    int NLipOdeKQXlc;
    float score;
    char NNxTs81yRC7 [30];
    struct   stu *iMfFwcU2ePdk;
};
struct   stu *uhxdkcl58, *UXq4mEr0v, *Zei0SxZRGlY;

int main () {
    void  result (struct   stu *);
    uhxdkcl58 = UXq4mEr0v = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s ", uhxdkcl58->num);
    scanf ("%s ", uhxdkcl58->LaX8wPqJ);
    scanf ("%c", &(uhxdkcl58->u0bMIlk2Tq));
    scanf ("%d", &(uhxdkcl58->NLipOdeKQXlc));
    scanf ("%g", &(uhxdkcl58->score));
    scanf ("%s", uhxdkcl58->NNxTs81yRC7);
    Zei0SxZRGlY = uhxdkcl58;
    Zei0SxZRGlY->iMfFwcU2ePdk = (404 - 404);
    for (;;) {
        uhxdkcl58 = (struct   stu *) malloc (sizeof (struct   stu));
        UXq4mEr0v->iMfFwcU2ePdk = uhxdkcl58;
        scanf ("%s", uhxdkcl58->num);
        if (!('e' != uhxdkcl58->num[(405 - 405)]) && !('n' != uhxdkcl58->num[(829 - 828)]) && uhxdkcl58->num[(738 - 736)] == 'd') {
            UXq4mEr0v->iMfFwcU2ePdk = (278 - 278);
            goto print;
        }
        scanf ("%s ", uhxdkcl58->LaX8wPqJ);
        scanf ("%c", &(uhxdkcl58->u0bMIlk2Tq));
        scanf ("%d", &(uhxdkcl58->NLipOdeKQXlc));
        scanf ("%g", &(uhxdkcl58->score));
        scanf ("%s", uhxdkcl58->NNxTs81yRC7);
        UXq4mEr0v = uhxdkcl58;
    }
print :
    result (Zei0SxZRGlY);
    return (606 - 606);
}

void  result (struct   stu *CXgqTaL) {
    if (CXgqTaL->iMfFwcU2ePdk == 0) {
        printf ("%s ", CXgqTaL->num);
        printf ("%s ", CXgqTaL->LaX8wPqJ);
        printf ("%c", CXgqTaL->u0bMIlk2Tq);
        printf (" %d", CXgqTaL->NLipOdeKQXlc);
        printf (" %g", CXgqTaL->score);
        printf (" %s", CXgqTaL->NNxTs81yRC7);
    }
    else {
        result (CXgqTaL->iMfFwcU2ePdk);
        printf ("%s ", CXgqTaL->num);
        printf ("%s ", CXgqTaL->LaX8wPqJ);
        printf ("%c", CXgqTaL->u0bMIlk2Tq);
        printf (" %d", CXgqTaL->NLipOdeKQXlc);
        printf (" %g", CXgqTaL->score);
        printf (" %s", CXgqTaL->NNxTs81yRC7);
    };
}

