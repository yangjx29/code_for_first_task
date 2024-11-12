int main () {
    int kE6TpleY;
    int ljL5Ml09B;
    struct   student {
        char num [100];
        char name [100];
        char sex;
        int anLk1WaSHvIR;
        char score [100];
        char address [100];
        struct   student *nl7AREdTphr;
    }
    kxmge1UAQC [10000];
    struct   student {
        char num [100];
        char name [100];
        char sex;
        int anLk1WaSHvIR;
        char score [100];
        char address [100];
        struct   student *nl7AREdTphr;
    }
    *head;
    struct   student {
        char num [100];
        char name [100];
        char sex;
        int anLk1WaSHvIR;
        char score [100];
        char address [100];
        struct   student *nl7AREdTphr;
    }
    *HeXIc3RNV;
    for (ljL5Ml09B = 0; 10000 > ljL5Ml09B; ljL5Ml09B++) {
        scanf ("%s", kxmge1UAQC[ljL5Ml09B].num);
        if (kxmge1UAQC[ljL5Ml09B].num[0] == 'e') {
            break;
        }
        scanf ("%s %c %d %s %s", kxmge1UAQC[ljL5Ml09B].name, &kxmge1UAQC[ljL5Ml09B].sex, &kxmge1UAQC[ljL5Ml09B].anLk1WaSHvIR, kxmge1UAQC[ljL5Ml09B].score, kxmge1UAQC[ljL5Ml09B].address);
    }
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
    ljL5Ml09B = ljL5Ml09B - 1;
    head = &kxmge1UAQC[ljL5Ml09B];
    for (kE6TpleY = ljL5Ml09B; kE6TpleY > 0; kE6TpleY--) {
        kxmge1UAQC[kE6TpleY].nl7AREdTphr = &kxmge1UAQC[kE6TpleY - 1];
    }
    kxmge1UAQC[0].nl7AREdTphr = NULL;
    HeXIc3RNV = head;
    do {
        printf ("%s %s %c %d %s %s\n", HeXIc3RNV->num, HeXIc3RNV->name, HeXIc3RNV->sex, HeXIc3RNV->anLk1WaSHvIR, HeXIc3RNV->score, HeXIc3RNV->address);
        HeXIc3RNV = HeXIc3RNV->nl7AREdTphr;
    }
    while (HeXIc3RNV != NULL);
    return 0;
}

