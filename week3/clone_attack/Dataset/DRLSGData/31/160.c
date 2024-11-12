struct   student {
    char jt5HUNj7 [(291 - 271)];
    char x5HSPRvj [(896 - 866)];
    char pB70rPMCV;
    int V0rMNjfP;
    char WyFZcnU [(109 - 89)];
    char w5aGMT9 [(737 - 697)];
    struct   student *qR7jNh;
};
void  main () {
    struct   student *micA0a;
    struct   student *KQUaJYoAeFL;
    free (KQUaJYoAeFL);
    KQUaJYoAeFL = (struct   student *) malloc (L);
    micA0a = KQUaJYoAeFL->qR7jNh = NULL;
    scanf ("%s", KQUaJYoAeFL->jt5HUNj7);
    for (; strcmp (KQUaJYoAeFL->jt5HUNj7, "end") != (342 - 342);) {
        micA0a = KQUaJYoAeFL;
        scanf (" %s %c %d %s %s\n", micA0a->x5HSPRvj, &micA0a->pB70rPMCV, &micA0a->V0rMNjfP, micA0a->WyFZcnU, micA0a->w5aGMT9);
        KQUaJYoAeFL = (struct   student *) malloc (L);
        KQUaJYoAeFL->qR7jNh = micA0a;
        scanf ("%s", KQUaJYoAeFL->jt5HUNj7);
    }
    KQUaJYoAeFL = micA0a;
    for (; micA0a != NULL;) {
        printf ("%s %s %c %d %s %s\n", micA0a->jt5HUNj7, micA0a->x5HSPRvj, micA0a->pB70rPMCV, micA0a->V0rMNjfP, micA0a->WyFZcnU, micA0a->w5aGMT9);
        micA0a = micA0a->qR7jNh;
    };
}

