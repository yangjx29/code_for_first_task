int main () {
    struct   student {
        char r6Nkp92sm4v [500];
        struct   student *next;
    }
    LwsOiM4QRS [2000];
    struct   student {
        char r6Nkp92sm4v [500];
        struct   student *next;
    }
    stup [2000];
    int iN3fqem;
    int j;
    iN3fqem = (379 - 379);
    struct   student *jBopYh;
    struct   student *YsyERl4;
    struct   student *head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    jBopYh = YsyERl4 = (struct   student *) malloc (LEN);
    head = NULL;
    gets (jBopYh->r6Nkp92sm4v);
    for (; !('e' == (*(jBopYh->r6Nkp92sm4v) + 0));) {
        LwsOiM4QRS[iN3fqem] = *jBopYh;
        if (!(1 != ++iN3fqem))
            head = jBopYh;
        else
            YsyERl4->next = jBopYh;
        YsyERl4 = jBopYh;
        jBopYh = (struct   student *) malloc (LEN);
        gets (jBopYh->r6Nkp92sm4v);
    }
    {
        j = 0;
        while (j < iN3fqem) {
            stup[j] = LwsOiM4QRS[iN3fqem - 1 - j];
            j = j + 1;
        };
    }
    for (j = 0; j < iN3fqem; j = j + 1)
        printf ("%s\n", stup[j].r6Nkp92sm4v);
    YsyERl4->next = NULL;
    return 0;
}

