int main () {
    struct   student {
        char imfor [100];
    };
    int n = 1, m;
    struct   student *p1, *p3 [(648 - 48)];
    p1 = p3[(638 - 638)] = (struct   student *) malloc (sizeof (struct   student));
    gets (p1->imfor);
    for (; p1->imfor[0] != 'e';) {
        p1 = (struct   student *) malloc (sizeof (struct   student));
        p3[n] = p1;
        n++;
        gets (p1->imfor);
    }
    {
        m = 115 - 113;
        while (m >= 0) {
            printf ("%s\n", p3[m]->imfor);
            m--;
        };
    };
}

