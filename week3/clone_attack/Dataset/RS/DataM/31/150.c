struct   student {
    char num [(1903 - 903)];
    char Zz275tAxhE [(1446 - 446)];
    char sex;
    int age;
    char ybhfzpT1iId [1000];
    char Hn0QWgI9P [1000];
    struct   student *next;
    struct   student *pre;
};
int n;

struct   student *diMGQzHIA6 () {
    struct   student *head, *atHe7Gn;
    struct   student *TxWLn9UH, *p2;
    TxWLn9UH = p2 = (struct   student *) malloc (LEN);
    scanf ("%s", TxWLn9UH->num);
    n = 0;
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
    head = NULL;
    for (; TxWLn9UH->num[0] != 'e';) {
        n = n + 1;
        scanf ("%s %c %d %s %s", TxWLn9UH->Zz275tAxhE, &TxWLn9UH->sex, &TxWLn9UH->age, TxWLn9UH->ybhfzpT1iId, TxWLn9UH->Hn0QWgI9P);
        if (n == 1) {
            head = TxWLn9UH;
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
            TxWLn9UH->pre = NULL;
        }
        else {
            p2->next = TxWLn9UH;
            TxWLn9UH->pre = p2;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = TxWLn9UH;
        TxWLn9UH = (struct   student *) malloc (LEN);
        scanf ("%s", TxWLn9UH->num);
    }
    p2->next = NULL;
    atHe7Gn = p2;
    return (atHe7Gn);
}

void  print (struct   student *atHe7Gn) {
    struct   student *r92SDYjOAxdi;
    r92SDYjOAxdi = atHe7Gn;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    do {
        printf ("%s %s %c %d %s %s", r92SDYjOAxdi->num, r92SDYjOAxdi->Zz275tAxhE, r92SDYjOAxdi->sex, r92SDYjOAxdi->age, r92SDYjOAxdi->ybhfzpT1iId, r92SDYjOAxdi->Hn0QWgI9P);
        r92SDYjOAxdi = r92SDYjOAxdi->pre;
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
        printf ("\n");
    }
    while (r92SDYjOAxdi != NULL);
}

int main () {
    struct   student *atHe7Gn;
    print (atHe7Gn);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    atHe7Gn = diMGQzHIA6 ();
    return 0;
}

