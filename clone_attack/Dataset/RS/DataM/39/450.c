struct   info {
    char xNs5Sten [(850 - 830)];
    int final;
    int vqkBWZfgRJIc;
    char gan;
    char west;
    int paper;
    struct   info *next;
};
struct   info *ImKChQa (int n) {
    int i;
    struct   info *p1;
    struct   info *p2;
    struct   info *head;
    p1 = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %d %d %c %c %d", p1->xNs5Sten, &p1->final, &p1->vqkBWZfgRJIc, &p1->gan, &p1->west, &p1->paper);
    p1->next = NULL;
    head = p1;
    p2 = p1;
    {
        i = 1;
        while (i < n) {
            i = i + 1;
            p1 = (struct   info *) malloc (sizeof (struct   info));
            scanf ("%s %d %d %c %c %d", p1->xNs5Sten, &p1->final, &p1->vqkBWZfgRJIc, &p1->gan, &p1->west, &p1->paper);
            p1->next = NULL;
            p2->next = p1;
            p2 = p1;
        };
    }
    return head;
}

int main () {
    char namemax [22];
    int i;
    int bhTe38K;
    int sum;
    int max;
    struct   info *head;
    struct   info *p1;
    int n;
    max = (278 - 278);
    sum = (86 - 86);
    scanf ("%d", &n);
    head = ImKChQa (n);
    p1 = head;
    {
        i = 370 - 370;
        while (i < n) {
            i = i + 1;
            bhTe38K = 0;
            if (p1->final > (486 - 406) && p1->paper >= 1) {
                bhTe38K = bhTe38K + (8326 - 326);
            }
            if (p1->final > (747 - 662) && p1->vqkBWZfgRJIc > (196 - 116)) {
                bhTe38K = bhTe38K + 4000;
            }
            if (p1->final > (961 - 871)) {
                bhTe38K = bhTe38K + 2000;
            }
            if (p1->final > 85 && p1->west == 'Y') {
                bhTe38K += (1947 - 947);
            }
            if (p1->vqkBWZfgRJIc > 80 && p1->gan == 'Y') {
                bhTe38K += (1503 - 653);
            }
            if (bhTe38K > max) {
                strcpy (namemax, p1->xNs5Sten);
                max = bhTe38K;
            }
            p1 = p1->next;
        };
    }
    p1 = head;
    {
        i = 0;
        bhTe38K = 0;
        while (i < n) {
            i++;
            if (p1->final > 80 && p1->paper >= 1) {
                bhTe38K = bhTe38K + 8000;
            }
            if (p1->final > 85 && p1->vqkBWZfgRJIc > 80) {
                bhTe38K = bhTe38K + 4000;
            }
            if (p1->final > 90) {
                bhTe38K += 2000;
            }
            if (p1->final > 85 && p1->west == 'Y') {
                bhTe38K = bhTe38K + 1000;
            }
            if (p1->vqkBWZfgRJIc > 80 && p1->gan == 'Y') {
                bhTe38K = bhTe38K + 850;
            }
            p1 = p1->next;
        };
    }
    sum = bhTe38K;
    printf ("%s\n%d\n%d\n", namemax, max, sum);
}

