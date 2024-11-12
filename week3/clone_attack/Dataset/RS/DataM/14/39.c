struct   student {
    int B8pS9x;
    int kf1NwxcqoB;
    int DGdPZ914yTbz;
    struct   student *next;
};
int XG7zas;

struct   student *TbC9Usr4 (void ) {
    int i;
    struct   student *head;
    struct   student *CEsc7LV;
    struct   student *AdD2t6evwE;
    CEsc7LV = AdD2t6evwE = (struct   student *) malloc (LEN);
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
    scanf ("%d", &XG7zas);
    scanf ("%d %d %d", &CEsc7LV->B8pS9x, &CEsc7LV->kf1NwxcqoB, &CEsc7LV->DGdPZ914yTbz);
    head = CEsc7LV;
    for (i = (251 - 250); XG7zas -1 >= i; i = i + 1) {
        CEsc7LV = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &CEsc7LV->B8pS9x, &CEsc7LV->kf1NwxcqoB, &CEsc7LV->DGdPZ914yTbz);
        AdD2t6evwE->next = CEsc7LV;
        AdD2t6evwE = CEsc7LV;
    }
    AdD2t6evwE->next = NULL;
    return (head);
}

void  main () {
    int i, Q2WnNE5VlwcU, k = 0;
    struct   student *head;
    struct   student *CEsc7LV;
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
    struct   student *AdD2t6evwE;
    head = TbC9Usr4 ();
    CEsc7LV = head;
    {
        Q2WnNE5VlwcU = 1;
        while (Q2WnNE5VlwcU <= 3) {
            CEsc7LV = AdD2t6evwE = head;
            {
                i = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (i <= XG7zas -Q2WnNE5VlwcU) {
                    if ((CEsc7LV->kf1NwxcqoB + CEsc7LV->DGdPZ914yTbz) > k)
                        k = CEsc7LV->kf1NwxcqoB + CEsc7LV->DGdPZ914yTbz;
                    CEsc7LV = CEsc7LV->next;
                    i = i + 1;
                };
            }
            CEsc7LV = AdD2t6evwE = head;
            if ((head->kf1NwxcqoB + head->DGdPZ914yTbz) == k) {
                printf ("%d %d", CEsc7LV->B8pS9x, CEsc7LV->kf1NwxcqoB + CEsc7LV->DGdPZ914yTbz);
                head = head->next;
            }
            else {
                i = 1;
                while (1) {
                    if ((CEsc7LV->kf1NwxcqoB + CEsc7LV->DGdPZ914yTbz) == k) {
                        printf ("%d %d\n", CEsc7LV->B8pS9x, CEsc7LV->kf1NwxcqoB + CEsc7LV->DGdPZ914yTbz);
                        if ((CEsc7LV->next) != NULL)
                            AdD2t6evwE->next = CEsc7LV->next;
                        else
                            AdD2t6evwE->next = NULL;
                        k = 0;
                        break;
                    }
                    AdD2t6evwE = CEsc7LV;
                    CEsc7LV = CEsc7LV->next;
                    i++;
                };
            }
            Q2WnNE5VlwcU++;
        };
    };
}

