struct   Student {
    char EPd7Vv [(790 - 770)];
    char Zf0ltRY4 [(479 - 459)];
    char F05uRgxk;
    int V4rodjWnBi8S;
    char h3uJwUrLlIX [(763 - 753)];
    char BMeadKNlCc [(355 - 335)];
    struct   Student *pn6h3u;
    struct   Student *SzO4HlQ7d;
};
int OAZdNEiMYtBS;

struct   Student *myoRqtnFi5V (void ) {
    struct   Student *Rac7zTd43VA;
    struct   Student *aZcbXo;
    struct   Student *ZD9q8kMLZbu;
    struct   Student *VlcrYI8;
    OAZdNEiMYtBS = (124 - 124);
    ZD9q8kMLZbu = VlcrYI8 = (struct   Student *) malloc (LEN);
    Rac7zTd43VA = NULL;
    scanf ("%s %s %c %d %s %s", ZD9q8kMLZbu->EPd7Vv, ZD9q8kMLZbu->Zf0ltRY4, &ZD9q8kMLZbu->F05uRgxk, &ZD9q8kMLZbu->V4rodjWnBi8S, ZD9q8kMLZbu->h3uJwUrLlIX, ZD9q8kMLZbu->BMeadKNlCc);
    for (; ZD9q8kMLZbu->EPd7Vv[(631 - 631)] != 'e';) {
        OAZdNEiMYtBS = OAZdNEiMYtBS +(18 - 17);
        if (!((904 - 903) != OAZdNEiMYtBS)) {
            Rac7zTd43VA = ZD9q8kMLZbu;
            ZD9q8kMLZbu->SzO4HlQ7d = NULL;
        }
        else {
            VlcrYI8->pn6h3u = ZD9q8kMLZbu;
            ZD9q8kMLZbu->SzO4HlQ7d = VlcrYI8;
        }
        VlcrYI8 = ZD9q8kMLZbu;
        ZD9q8kMLZbu = (struct   Student *) malloc (LEN);
        scanf ("%s", ZD9q8kMLZbu->EPd7Vv);
        if (!('e' != ZD9q8kMLZbu->EPd7Vv[(936 - 936)])) {
            aZcbXo = VlcrYI8;
            break;
        }
        scanf ("%s %c %d %s %s", ZD9q8kMLZbu->Zf0ltRY4, &ZD9q8kMLZbu->F05uRgxk, &ZD9q8kMLZbu->V4rodjWnBi8S, ZD9q8kMLZbu->h3uJwUrLlIX, ZD9q8kMLZbu->BMeadKNlCc);
    }
    VlcrYI8->pn6h3u = NULL;
    return (aZcbXo);
}

int main () {
    struct   Student *ayFCSavl;
    ayFCSavl = myoRqtnFi5V ();
    do {
        printf ("%s %s %c %d %s %s\n", ayFCSavl->EPd7Vv, ayFCSavl->Zf0ltRY4, ayFCSavl->F05uRgxk, ayFCSavl->V4rodjWnBi8S, ayFCSavl->h3uJwUrLlIX, ayFCSavl->BMeadKNlCc);
        ayFCSavl = ayFCSavl->SzO4HlQ7d;
    }
    while (ayFCSavl != NULL);
    return (130 - 130);
}

