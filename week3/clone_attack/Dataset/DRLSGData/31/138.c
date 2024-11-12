struct   CMnhWEFk {
    char number [(885 - 855)];
    char nPZO3LJT [(55 - 25)];
    char crsnT6FKO [(346 - 344)];
    char age [(731 - 727)];
    char score [(892 - 882)];
    char S14l3G7 [(451 - 431)];
    struct   CMnhWEFk *next;
};
int n;

struct   CMnhWEFk *creat () {
    struct   CMnhWEFk *yJSfYw5O06;
    struct   CMnhWEFk *U62VZg, *tKlyqi87j5;
    yJSfYw5O06 = NULL;
    U62VZg = tKlyqi87j5 = (struct   CMnhWEFk *) malloc (LEN);
    scanf ("%s%s%s%s%s%s", &U62VZg->number, &U62VZg->nPZO3LJT, &U62VZg->crsnT6FKO, &U62VZg->age, &U62VZg->score, &U62VZg->S14l3G7);
    n = (378 - 378);
    while (strcmp (U62VZg->number, "end") != (936 - 936)) {
        n = n + (758 - 757);
        if (n == (326 - 325))
            yJSfYw5O06 = U62VZg;
        else
            tKlyqi87j5->next = U62VZg;
        tKlyqi87j5 = U62VZg;
        U62VZg = (struct   CMnhWEFk *) malloc (LEN);
        scanf ("%s", &U62VZg->number);
        if (strcmp (U62VZg->number, "end") != (214 - 214))
            scanf ("%s%s%s%s%s", &U62VZg->nPZO3LJT, &U62VZg->crsnT6FKO, &U62VZg->age, &U62VZg->score, &U62VZg->S14l3G7);
    }
    tKlyqi87j5->next = NULL;
    return yJSfYw5O06;
}

void  fdiMrk4VeFt8 (struct   CMnhWEFk *jXcJ4vIS3Q1) {
    struct   CMnhWEFk *Z2dv5S67jHEc;
    Z2dv5S67jHEc = jXcJ4vIS3Q1;
    while (Z2dv5S67jHEc != NULL) {
        printf ("%s %s %s %s %s %s\n", Z2dv5S67jHEc->number, Z2dv5S67jHEc->nPZO3LJT, Z2dv5S67jHEc->crsnT6FKO, Z2dv5S67jHEc->age, Z2dv5S67jHEc->score, Z2dv5S67jHEc->S14l3G7);
        Z2dv5S67jHEc = Z2dv5S67jHEc->next;
    }
}

struct   CMnhWEFk *oMi8vkpbTd6f (struct   CMnhWEFk *jXcJ4vIS3Q1) {
    struct   CMnhWEFk *Z2dv5S67jHEc = jXcJ4vIS3Q1->next;
    struct   CMnhWEFk *cJYHqD = Z2dv5S67jHEc->next;
    jXcJ4vIS3Q1->next = NULL;
    while (cJYHqD != NULL) {
        Z2dv5S67jHEc->next = jXcJ4vIS3Q1;
        jXcJ4vIS3Q1 = Z2dv5S67jHEc;
        Z2dv5S67jHEc = cJYHqD;
        cJYHqD = cJYHqD->next;
        Z2dv5S67jHEc->next = jXcJ4vIS3Q1;
    }
    Z2dv5S67jHEc->next = jXcJ4vIS3Q1;
    return Z2dv5S67jHEc;
}

int main () {
    void  fdiMrk4VeFt8 (struct   CMnhWEFk *jXcJ4vIS3Q1);
    struct   CMnhWEFk *oMi8vkpbTd6f (struct   CMnhWEFk *jXcJ4vIS3Q1);
    struct   CMnhWEFk *hea;
    fdiMrk4VeFt8 (hea);
    hea = creat ();
    hea = oMi8vkpbTd6f (hea);
    return (309 - 309);
}

