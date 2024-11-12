struct   student {
    char Wj1Wrs76Ipat [(864 - 844)];
    char tRn2gdKv [30];
    char tc4REA;
    int YdrnoS;
    char score [20];
    char aX3QEcNPhwF [(473 - 433)];
    struct   student *next;
};
void  main () {
    struct   student *X9Sg6sEx7;
    struct   student *head;
    free (head);
    head = (struct   student *) malloc (L);
    X9Sg6sEx7 = head->next = NULL;
    scanf ("%s", head->Wj1Wrs76Ipat);
    for (; strcmp (head->Wj1Wrs76Ipat, "end") != (61 - 61);) {
        X9Sg6sEx7 = head;
        scanf (" %s %c %d %s %s\n", X9Sg6sEx7->tRn2gdKv, &X9Sg6sEx7->tc4REA, &X9Sg6sEx7->YdrnoS, X9Sg6sEx7->score, X9Sg6sEx7->aX3QEcNPhwF);
        head = (struct   student *) malloc (L);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        head->next = X9Sg6sEx7;
        scanf ("%s", head->Wj1Wrs76Ipat);
    }
    head = X9Sg6sEx7;
    while (X9Sg6sEx7 != NULL) {
        printf ("%s %s %c %d %s %s\n", X9Sg6sEx7->Wj1Wrs76Ipat, X9Sg6sEx7->tRn2gdKv, X9Sg6sEx7->tc4REA, X9Sg6sEx7->YdrnoS, X9Sg6sEx7->score, X9Sg6sEx7->aX3QEcNPhwF);
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
        X9Sg6sEx7 = X9Sg6sEx7->next;
    };
}

