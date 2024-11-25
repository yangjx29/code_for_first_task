struct   Student {
    char num [(742 - 732)];
    char BL4vYo [(731 - 706)];
    char sex;
    int age;
    float bVIRta73;
    char add [15];
    struct   Student *next;
};
int main () {
    struct   Student *creat (void );
    struct   Student *igkQpfOdtn, *cvE46Sjy7z;
    igkQpfOdtn = creat ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cvE46Sjy7z = igkQpfOdtn;
    while (cvE46Sjy7z->next != NULL) {
        printf ("%s %s %c %d %g %s\n", cvE46Sjy7z->num, cvE46Sjy7z->BL4vYo, cvE46Sjy7z->sex, cvE46Sjy7z->age, cvE46Sjy7z->bVIRta73, cvE46Sjy7z->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cvE46Sjy7z = cvE46Sjy7z->next;
    }
    printf ("%s %s %c %d %g %s\n", cvE46Sjy7z->num, cvE46Sjy7z->BL4vYo, cvE46Sjy7z->sex, cvE46Sjy7z->age, cvE46Sjy7z->bVIRta73, cvE46Sjy7z->add);
}

struct   Student *creat (void ) {
    struct   Student *igkQpfOdtn, *news;
    int i;
    igkQpfOdtn = NULL;
    for (i = (1000 - 1000);; i++) {
        news = (struct   Student *) malloc (sizeof (struct   Student));
        scanf ("%s", news->num);
        if (news->num[(209 - 209)] == 'e')
            break;
        scanf (" %s %c %d %f %s", news->BL4vYo, &news->sex, &news->age, &news->bVIRta73, news->add);
        news->next = igkQpfOdtn;
        igkQpfOdtn = news;
    }
    return (igkQpfOdtn);
}

