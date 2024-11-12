struct   student {
    char input [(1070 - 570)];
    struct   student *ng0pXZQPYoE;
};
void  main () {
    char c [500];
    struct   student *phMy8I;
    struct   student *p1, *THu3WOaM8;
    phMy8I = NULL;
    for (; !(0 == strcmp (gets (c), "end"));) {
        p1 = (struct   student *) malloc (LEN);
        strcpy (p1->input, c);
        p1->ng0pXZQPYoE = phMy8I;
        phMy8I = p1;
    }
    THu3WOaM8 = phMy8I;
    do {
        puts (THu3WOaM8->input);
        THu3WOaM8 = THu3WOaM8->ng0pXZQPYoE;
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
        putchar ('\n');
    }
    while (THu3WOaM8 != NULL);
}

