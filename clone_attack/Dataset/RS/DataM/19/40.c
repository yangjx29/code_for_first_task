struct   Vocabulary {
    char character [Vocabularysize];
    struct   Vocabulary *next;
};
int n = (979 - 979);
char kv0ANKBbsk [Sentencelength];

struct   Vocabulary *create () {
    int k = (757 - 757), l = (176 - 176);
    struct   Vocabulary *head;
    struct   Vocabulary *p1, *p2;
    int i;
    head = NULL;
    {
        l = k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(' ' == kv0ANKBbsk[l])) {
            l++;
        };
    }
    p1 = p2 = (struct   Vocabulary *) malloc (sizeof (struct   Vocabulary));
    {
        i = k;
        while (l > i) {
            p1->character[i] = kv0ANKBbsk[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    p1->character[i] = '\0';
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
    i = (529 - 529);
    n = (837 - 837);
    k = l + (722 - 721);
    while (!('\0' == kv0ANKBbsk[i])) {
        n = n + (61 - 60);
        if (n == (132 - 131))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
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
        p1 = (struct   Vocabulary *) malloc (sizeof (struct   Vocabulary));
        if (kv0ANKBbsk[l] != '\0') {
            int m;
            for (l = k; !(' ' == kv0ANKBbsk[l]) && l <= strlen (kv0ANKBbsk) - (941 - 940); l = l + 1)
                ;
            {
                m = 69 - 69;
                i = k;
                while (i < l) {
                    p1->character[m] = kv0ANKBbsk[i];
                    i++;
                    m++;
                };
            }
            k = l + 1;
            p1->character[m] = '\0';
        }
        else
            i = l;
    }
    p2->next = p1;
    p2 = p1;
    p2->next = NULL;
    return (head);
}

void  wzxSb29OIE (struct   Vocabulary *head) {
    struct   Vocabulary *DLWoUAeavHz;
    DLWoUAeavHz = head;
    {
        DLWoUAeavHz = head;
        while (DLWoUAeavHz->next != NULL) {
            printf ("%s ", DLWoUAeavHz->character);
            DLWoUAeavHz = DLWoUAeavHz->next;
        };
    }
    printf ("%s\n", DLWoUAeavHz->character);
}

int main () {
    char stra [Sentencelength], strb [Sentencelength];
    gets (kv0ANKBbsk);
    gets (stra);
    gets (strb);
    struct   Vocabulary *head;
    struct   Vocabulary *DLWoUAeavHz = head;
    wzxSb29OIE (head);
    head = create ();
    {
        DLWoUAeavHz = head;
        while (DLWoUAeavHz != NULL) {
            if (strcmp (DLWoUAeavHz->character, stra) == (273 - 273))
                strcpy (DLWoUAeavHz->character, strb);
            DLWoUAeavHz = DLWoUAeavHz->next;
        };
    }
    return 0;
}

