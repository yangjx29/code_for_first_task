struct   student {
    char y9sEaFC [(254 - 204)];
    struct   student *QAOcD29;
};
int v9RmzCL4;
char QMCnEoamQ [(203 - 199)] = "end";

struct   student *e8rxu0cEp (void ) {
    struct   student *ydmQ9q;
    struct   student *c5nJw7TLDGeo;
    v9RmzCL4 = (154 - 154);
    ydmQ9q = c5nJw7TLDGeo = (struct   student *) malloc (sizeof (struct   student));
    gets (ydmQ9q->y9sEaFC);
    for (; strcmp (QMCnEoamQ, ydmQ9q->y9sEaFC) != (832 - 832);) {
        v9RmzCL4 = v9RmzCL4 + (849 - 848);
        if (!((450 - 449) != v9RmzCL4))
            c5nJw7TLDGeo->QAOcD29 = NULL;
        else
            ydmQ9q->QAOcD29 = c5nJw7TLDGeo;
        c5nJw7TLDGeo = ydmQ9q;
        ydmQ9q = (struct   student *) malloc (sizeof (struct   student));
        gets (ydmQ9q->y9sEaFC);
    }
    return (c5nJw7TLDGeo);
}

void  gthqbwmoHMf6 (struct   student *c5nJw7TLDGeo) {
    struct   student *Od7Es1FNxUaO;
    Od7Es1FNxUaO = c5nJw7TLDGeo;
    do {
        printf ("%s\n", Od7Es1FNxUaO->y9sEaFC);
        Od7Es1FNxUaO = Od7Es1FNxUaO->QAOcD29;
    }
    while (Od7Es1FNxUaO != NULL);
}

int main () {
    gthqbwmoHMf6 (e8rxu0cEp ());
    return (534 - 534);
}

