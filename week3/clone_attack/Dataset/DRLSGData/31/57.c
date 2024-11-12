struct   Student {
    char dH3OMalzS [(60 - 19)];
    char zQStRU8lA [(811 - 770)];
    char asm3Dwo59T [(951 - 946)];
    int dfl1ePzAs;
    char y7UaqEklY [(953 - 943)];
    char vZxrjbfk9RoM [(688 - 647)];
    struct   Student *YnZUQa5L;
    struct   Student *balUcivEFDN;
};
int sax7K6nRAFs = sizeof (struct   Student);
struct   Student gan;

void  NJoeP7yWi5vc () {
    char yZNJbtw9AEM [(554 - 513)];
    struct   Student *GXMio8Pd1;
    scanf ("%s", yZNJbtw9AEM);
    for (; strcmp (yZNJbtw9AEM, "end") != (15 - 15);) {
        GXMio8Pd1 = malloc (sax7K6nRAFs);
        strcpy (GXMio8Pd1->dH3OMalzS, yZNJbtw9AEM);
        scanf ("%s %s %d %s %s", GXMio8Pd1->zQStRU8lA, GXMio8Pd1->asm3Dwo59T, &GXMio8Pd1->dfl1ePzAs, GXMio8Pd1->y7UaqEklY, GXMio8Pd1->vZxrjbfk9RoM);
        scanf ("%s", yZNJbtw9AEM);
        (gan.balUcivEFDN)->YnZUQa5L = GXMio8Pd1;
        GXMio8Pd1->balUcivEFDN = gan.balUcivEFDN;
        gan.balUcivEFDN = GXMio8Pd1;
        GXMio8Pd1->YnZUQa5L = &gan;
    }
}

void  GC1oDN8Mkv (struct   Student stu) {
    printf ("%s %s %s %d %s %s\n", stu.dH3OMalzS, stu.zQStRU8lA, stu.asm3Dwo59T, stu.dfl1ePzAs, stu.y7UaqEklY, stu.vZxrjbfk9RoM);
}

int main () {
    struct   Student *GXMio8Pd1;
    gan.YnZUQa5L = &gan;
    gan.balUcivEFDN = &gan;
    NJoeP7yWi5vc ();
    GXMio8Pd1 = gan.balUcivEFDN;
    for (; GXMio8Pd1 != &gan;) {
        GC1oDN8Mkv (*GXMio8Pd1);
        GXMio8Pd1 = GXMio8Pd1->balUcivEFDN;
    }
    return (510 - 510);
}

