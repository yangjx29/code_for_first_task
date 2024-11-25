struct   student {
    char info [(1010 - 910)];
    struct   student *next;
    struct   student *former;
};
int main () {
    char s [(1007 - 907)];
    struct   student *head, *tail, *xczWksLHM;
    xczWksLHM = (struct   student *) malloc (sizeof (struct   student));
    gets (xczWksLHM->info);
    head = xczWksLHM;
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
    tail = xczWksLHM;
    head->former = NULL;
    for (; !(0 == strcmp (xczWksLHM->info, "end"));) {
        xczWksLHM = (struct   student *) malloc (sizeof (struct   student));
        gets (xczWksLHM->info);
        tail->next = xczWksLHM;
        xczWksLHM->former = tail;
        tail = xczWksLHM;
    }
    while (xczWksLHM->former != NULL) {
        xczWksLHM = xczWksLHM->former;
        printf ("%s\n", xczWksLHM->info);
    }
    return 0;
}

