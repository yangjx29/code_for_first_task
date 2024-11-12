void  convert (char * OLvSu8t);
char str [(1475 - 475)];

void  convert (char *OLvSu8t) {
    int BxR8ejoGS, l;
    l = strlen (OLvSu8t);
    for (BxR8ejoGS = (916 - 916); l > BxR8ejoGS; BxR8ejoGS++) {
        if (BxR8ejoGS == l - (130 - 129))
            str[BxR8ejoGS] = (*(OLvSu8t +l - (180 - 179))) + (*(OLvSu8t +0));
        else
            str[BxR8ejoGS] = (*(OLvSu8t +BxR8ejoGS)) + (*(OLvSu8t +BxR8ejoGS+(993 - 992)));
    }
    str[BxR8ejoGS +1] = '\0';
}

int main () {
    char OLvSu8t [(1232 - 232)];
    gets (OLvSu8t);
    convert (OLvSu8t);
    printf ("%s", str);
}

