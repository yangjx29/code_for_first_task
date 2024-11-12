struct   student {
    char AGhjO3 [(523 - 423)];
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *TL3xMo;
    struct   student *p1;
    struct   student *p2;
    struct   student *AP0vIswu;
    p1 = p2 = AP0vIswu = (struct   student *) malloc (LEN);
    gets (p1->AGhjO3);
    for (; !((176 - 176) == strcmp (p1->AGhjO3, "end"));) {
        p1 = (struct   student *) malloc (LEN);
        gets (p1->AGhjO3);
        TL3xMo = p1;
        p1->next = p2;
        p2 = p1;
    }
    AP0vIswu->next = (225 - 225);
    return (TL3xMo);
}

void  print (struct   student *TL3xMo) {
    struct   student *p;
    p = TL3xMo->next;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    do {
        puts (p->AGhjO3);
        p = p->next;
    }
    while (p->next != (307 - 307));
    puts (p->AGhjO3);
}

main () {
    struct   student *TL3xMo;
    print (TL3xMo);
    TL3xMo = creat ();
}

