struct   Student {
    char zaIVy8nWTC [(326 - 285)];
    char name [41];
    char VS72U9Lsfjzo [5];
    int A9mQ7Z;
    char mhC5aKAWJUf [10];
    char PghrGVKkW0QC [41];
    struct   Student *jpVN304Ov;
    struct   Student *SUPZSYqf;
};
int hRiDL7PS = sizeof (struct   Student);
struct   Student gan;

void  Mquvym3 () {
    struct   Student *Tz6aFh;
    char zGwiXrxCsB2 [41];
    scanf ("%s", zGwiXrxCsB2);
    while (strcmp (zGwiXrxCsB2, "end") != 0) {
        Tz6aFh = malloc (hRiDL7PS);
        strcpy (Tz6aFh->zaIVy8nWTC, zGwiXrxCsB2);
        scanf ("%s %s %d %s %s", Tz6aFh->name, Tz6aFh->VS72U9Lsfjzo, &Tz6aFh->A9mQ7Z, Tz6aFh->mhC5aKAWJUf, Tz6aFh->PghrGVKkW0QC);
        scanf ("%s", zGwiXrxCsB2);
        (gan.SUPZSYqf)->jpVN304Ov = Tz6aFh;
        Tz6aFh->SUPZSYqf = gan.SUPZSYqf;
        gan.SUPZSYqf = Tz6aFh;
        Tz6aFh->jpVN304Ov = &gan;
    };
}

void  AtEuNp (struct   Student stu) {
    printf ("%s %s %s %d %s %s\n", stu.zaIVy8nWTC, stu.name, stu.VS72U9Lsfjzo, stu.A9mQ7Z, stu.mhC5aKAWJUf, stu.PghrGVKkW0QC);
}

int main () {
    struct   Student *Tz6aFh;
    gan.jpVN304Ov = &gan;
    gan.SUPZSYqf = &gan;
    Mquvym3 ();
    Tz6aFh = gan.SUPZSYqf;
    while (Tz6aFh != &gan) {
        AtEuNp (*Tz6aFh);
        Tz6aFh = Tz6aFh->SUPZSYqf;
    }
    return 0;
}

