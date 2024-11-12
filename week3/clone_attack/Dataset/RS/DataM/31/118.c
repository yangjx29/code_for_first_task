struct   student {
    char E8f0iLNdw [10];
    char wasevc [20];
    char svfgCAIu7y [2];
    int year;
    char score [10];
    char ad [20];
    struct   student *WtKrBGO;
};
int main () {
    int YRJYIedTu;
    int i;
    YRJYIedTu = 0;
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
    struct   student *nUu3y7YjF2, *N42WIq9XRL, *p2, *p, *hmlFE6, *temp;
    for (i = 1; 10000 >= i; i = i + 1) {
        N42WIq9XRL = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", N42WIq9XRL->E8f0iLNdw);
        if (!(0 != strcmp (N42WIq9XRL->E8f0iLNdw, "end"))) {
            nUu3y7YjF2 = temp;
            break;
        }
        else {
            if (!(1 != i)) {
                N42WIq9XRL->WtKrBGO = NULL;
                p2 = N42WIq9XRL;
                temp = N42WIq9XRL;
            }
            else {
                N42WIq9XRL->WtKrBGO = p2;
                p2 = N42WIq9XRL;
                temp = N42WIq9XRL;
            };
        }
        scanf ("%s", N42WIq9XRL->wasevc);
        scanf ("%s", N42WIq9XRL->svfgCAIu7y);
        scanf ("%d", &N42WIq9XRL->year);
        scanf ("%s", N42WIq9XRL->score);
        scanf ("%s", N42WIq9XRL->ad);
        YRJYIedTu = YRJYIedTu +1;
    }
    for (i = 1; i <= YRJYIedTu; i = i + 1) {
        if (i == 1) {
            p = nUu3y7YjF2;
        }
        printf ("%s %s %s %d %s %s\n", p->E8f0iLNdw, p->wasevc, p->svfgCAIu7y, p->year, p->score, p->ad);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p = p->WtKrBGO;
        if (p == NULL) {
            break;
        };
    }
    return 0;
}

