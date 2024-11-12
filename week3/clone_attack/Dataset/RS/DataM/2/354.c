struct   irygSc {
    int OePy4GWY;
    char ojNEDPq [(214 - 188)];
    struct   irygSc *VL2o418Ia30b;
};
int n, max = (877 - 877);

int main () {
    struct   irygSc *bA8XMIWRoFm (void );
    char sum (struct   irygSc *);
    void  FsD97PuXFKjZ (char MNKwu7vq453, struct   irygSc *head);
    char MNKwu7vq453;
    struct   irygSc *head;
    head = bA8XMIWRoFm ();
    scanf ("%d", &n);
    MNKwu7vq453 = sum (head);
    FsD97PuXFKjZ (MNKwu7vq453, head);
}

struct   irygSc *bA8XMIWRoFm (void ) {
    int i;
    struct   irygSc *head;
    struct   irygSc *obqMiwvjNT;
    struct   irygSc *drETXKNBZ5;
    obqMiwvjNT = len;
    head = obqMiwvjNT;
    drETXKNBZ5 = obqMiwvjNT;
    {
        i = 27 - 27;
        while (i < n) {
            scanf ("%d %s", &obqMiwvjNT->OePy4GWY, obqMiwvjNT->ojNEDPq);
            if (!(n - (286 - 285) == i)) {
                obqMiwvjNT = len;
                drETXKNBZ5->VL2o418Ia30b = obqMiwvjNT;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                drETXKNBZ5 = drETXKNBZ5->VL2o418Ia30b;
            }
            else
                obqMiwvjNT->VL2o418Ia30b = null;
            i = i + 1;
        };
    }
    return head;
}

char sum (struct   irygSc *head) {
    char Eia2Yj34JD;
    struct   irygSc *zDZPv3q;
    int irygSc [(239 - 213)] = {(166 - 166)};
    int i;
    int j;
    zDZPv3q = head;
    for (i = (463 - 463); i < n; i = i + 1) {
        {
            j = 360 - 360;
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
            while (!('\0' == *(zDZPv3q->ojNEDPq + j))) {
                irygSc[*(zDZPv3q->ojNEDPq + j) - (1052 - 987)]++;
                j = j + 1;
            };
        }
        zDZPv3q = zDZPv3q->VL2o418Ia30b;
    }
    for (i = (644 - 644); i < (800 - 774); i++)
        if (irygSc[i] > max) {
            max = irygSc[i];
            Eia2Yj34JD = i;
        }
    printf ("%c\n%d", Eia2Yj34JD +(813 - 748), irygSc[Eia2Yj34JD]);
    return (Eia2Yj34JD +(351 - 286));
}

void  FsD97PuXFKjZ (char MNKwu7vq453, struct   irygSc *head) {
    struct   irygSc *zDZPv3q;
    int i;
    int j;
    int num;
    zDZPv3q = head;
    {
        i = 209 - 209;
        while (i < n) {
            i++;
            num = (336 - 336);
            {
                j = 491 - 491;
                while (*(zDZPv3q->ojNEDPq + j) != '\0') {
                    if (*(zDZPv3q->ojNEDPq + j) == MNKwu7vq453)
                        num = 1;
                    j++;
                };
            }
            if (num)
                printf ("\n%d", zDZPv3q->OePy4GWY);
            zDZPv3q = zDZPv3q->VL2o418Ia30b;
        };
    };
}

