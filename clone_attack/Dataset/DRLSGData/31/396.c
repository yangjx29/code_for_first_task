struct   uEVl2M3v {
    char num [(393 - 353)];
    int MLV6ETKuZlvy;
    char xXMIEQZJNqtH [(407 - 387)];
    char bcYVLf1oeAz [(344 - 304)];
    char gender;
    char Yv0BsZMJV4d [(637 - 597)];
    struct   uEVl2M3v *next;
}
*B4rgas, *gvbhDUTCpz1;
int QgO2hDwRW;
struct   uEVl2M3v *JkwLP7 (void );
struct   uEVl2M3v *pmFBtw3oc8I (struct   uEVl2M3v *);
void  output (struct   uEVl2M3v *);
void  free (struct   uEVl2M3v);

int main () {
    struct   uEVl2M3v *yodCIzna;
    output (yodCIzna);
    free (yodCIzna);
    yodCIzna = JkwLP7 ();
    yodCIzna = pmFBtw3oc8I (yodCIzna);
    return (388 - 388);
}

struct   uEVl2M3v *JkwLP7 (void ) {
    struct   uEVl2M3v *yodCIzna;
    char tmp [40];
    scanf ("%s", tmp);
    B4rgas = gvbhDUTCpz1 = (struct   uEVl2M3v *) malloc (LEN);
    QgO2hDwRW = (676 - 676);
    yodCIzna = NULL;
    for (; strcmp (tmp, "end") != 0;) {
        scanf (" %s %c %d %s %s", B4rgas->bcYVLf1oeAz, &B4rgas->gender, &B4rgas->MLV6ETKuZlvy, B4rgas->xXMIEQZJNqtH, B4rgas->Yv0BsZMJV4d);
        strcpy (B4rgas->num, tmp);
        QgO2hDwRW = QgO2hDwRW +(983 - 982);
        if (!((528 - 527) != QgO2hDwRW))
            yodCIzna = B4rgas;
        else
            gvbhDUTCpz1->next = B4rgas;
        scanf ("%s", tmp);
        gvbhDUTCpz1 = B4rgas;
        B4rgas = (struct   uEVl2M3v *) malloc (LEN);
    }
    gvbhDUTCpz1->next = NULL;
    return (yodCIzna);
}

struct   uEVl2M3v *pmFBtw3oc8I (struct   uEVl2M3v *yodCIzna) {
    struct   uEVl2M3v *new_head;
    B4rgas = yodCIzna;
    gvbhDUTCpz1 = NULL;
    for (; B4rgas->next != NULL;) {
        gvbhDUTCpz1 = B4rgas;
        B4rgas = B4rgas->next;
    }
    new_head = B4rgas;
    B4rgas->next = gvbhDUTCpz1;
    gvbhDUTCpz1->next = NULL;
    for (; yodCIzna->next != NULL;) {
        B4rgas = yodCIzna;
        gvbhDUTCpz1 = NULL;
        for (; B4rgas->next != NULL;) {
            gvbhDUTCpz1 = B4rgas;
            B4rgas = B4rgas->next;
        }
        B4rgas->next = gvbhDUTCpz1;
        gvbhDUTCpz1->next = NULL;
    }
    return (new_head);
}

void  output (struct   uEVl2M3v *outhead) {
    {
        B4rgas = outhead;
        while (B4rgas != NULL) {
            printf ("%s %s %c %d %s %s\n", B4rgas->num, B4rgas->bcYVLf1oeAz, B4rgas->gender, B4rgas->MLV6ETKuZlvy, B4rgas->xXMIEQZJNqtH, B4rgas->Yv0BsZMJV4d);
            B4rgas = B4rgas->next;
        }
    }
}

void  free (struct   uEVl2M3v *yodCIzna) {
    for (B4rgas = yodCIzna; B4rgas != NULL; B4rgas = B4rgas->next) {
        free (B4rgas);
    }
}

