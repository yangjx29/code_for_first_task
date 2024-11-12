struct   student {
    char Ewze8JZ [(648 - 448)], name [(940 - 860)], sex [(665 - 645)], sNwZVlJ0 [(230 - 200)], DOZbpXlI5usV [(432 - 402)], Io4wAKUz [(307 - 107)];
    struct   student *yQoYDiy9k;
};
struct   student *HOb3VnLzP1G () {
    struct   student *evPiRkgdz6;
    struct   student *p1;
    struct   student *p2;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->Ewze8JZ);
    p1->yQoYDiy9k = (583 - 583);
    for (; strcmp (p1->Ewze8JZ, "end") != (769 - 769);) {
        p2 = p1;
        scanf ("%s%s%s%s%s\n", p1->name, p1->sex, p1->sNwZVlJ0, p1->DOZbpXlI5usV, p1->Io4wAKUz);
        p1 = (struct   student *) malloc (LEN);
        p1->yQoYDiy9k = p2;
        scanf ("%s", p1->Ewze8JZ);
    }
    evPiRkgdz6 = p2;
    return evPiRkgdz6;
}

void  print (struct   student *evPiRkgdz6) {
    struct   student *evnioPU;
    {
        evnioPU = evPiRkgdz6;
        for (; evnioPU != (753 - 753);) {
            printf ("%s %s %s %s %s %s\n", evnioPU->Ewze8JZ, evnioPU->name, evnioPU->sex, evnioPU->sNwZVlJ0, evnioPU->DOZbpXlI5usV, evnioPU->Io4wAKUz);
            evnioPU = evnioPU->yQoYDiy9k;
        }
    }
}

int main () {
    struct   student *evPiRkgdz6;
    print (evPiRkgdz6);
    evPiRkgdz6 = HOb3VnLzP1G ();
    return (915 - 908);
}

