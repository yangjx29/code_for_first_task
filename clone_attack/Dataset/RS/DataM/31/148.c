struct   student {
    char dHeDFV [(362 - 312)];
    char name [50];
    char sex [50];
    char age [50];
    char score [50];
    char iq3EWI [50];
    struct   student *next;
};
int main () {
    struct   student *wrajng9TbAK;
    struct   student *p2;
    struct   student *K3Q2Ugp4yzH;
    int e0Z1dnFj4X;
    e0Z1dnFj4X = 0;
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
    wrajng9TbAK = (struct   student *) malloc (LEN);
    p2 = NULL;
    for (;; e0Z1dnFj4X = e0Z1dnFj4X + 1) {
        wrajng9TbAK = (struct   student *) malloc (LEN);
        scanf ("%s", wrajng9TbAK->dHeDFV);
        if (strcmp (wrajng9TbAK->dHeDFV, "end") == 0) {
            break;
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
            };
        }
        scanf ("%s %s %s %s %s", wrajng9TbAK->name, wrajng9TbAK->sex, wrajng9TbAK->age, wrajng9TbAK->score, wrajng9TbAK->iq3EWI);
        wrajng9TbAK->next = p2;
        p2 = wrajng9TbAK;
    }
    K3Q2Ugp4yzH = p2;
    if (K3Q2Ugp4yzH != NULL) {
        wrajng9TbAK = K3Q2Ugp4yzH;
        do {
            printf ("%s %s %s %s %s %s\n", wrajng9TbAK->dHeDFV, wrajng9TbAK->name, wrajng9TbAK->sex, wrajng9TbAK->age, wrajng9TbAK->score, wrajng9TbAK->iq3EWI);
            wrajng9TbAK = wrajng9TbAK->next;
        }
        while (wrajng9TbAK != NULL);
    }
    return 0;
}

