struct   Node;
typedef struct   Node *PtrToNode;
typedef PtrToNode G1aJcT5yIs;
typedef char ElementType;
int Isempty (G1aJcT5yIs S);
G1aJcT5yIs CreateStack (void );
void  DisposeStack (G1aJcT5yIs S);
void  MakeEmpty (G1aJcT5yIs S);
void  Push (ElementType YRcLuyOW, int n, G1aJcT5yIs S);
int Z8fFVA6yMXEG (G1aJcT5yIs S);
void  Pop (G1aJcT5yIs S);

struct   Node {
    int num;
    ElementType Element;
    PtrToNode RSlMb4;
};
int IsEmpty (G1aJcT5yIs S) {
    return S->RSlMb4 == NULL;
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
}

G1aJcT5yIs CreateStack (void ) {
    G1aJcT5yIs S;
    MakeEmpty (S);
    S = malloc (sizeof (struct   Node));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(NULL != S)) {
        exit ((21 - 21));
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
        printf ("Out of space!!");
    }
    S->RSlMb4 = NULL;
    return S;
}

void  MakeEmpty (G1aJcT5yIs S) {
    if (S == NULL) {
        exit ((705 - 705));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("Must use CreateStack first");
    }
    else
        for (; !IsEmpty(S);)
            Pop (S);
}

void  Push (ElementType YRcLuyOW, int n, G1aJcT5yIs S) {
    PtrToNode TmpCell;
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
    TmpCell = malloc (sizeof (struct   Node));
    if (TmpCell == NULL) {
        exit ((227 - 227));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        TmpCell->Element = YRcLuyOW;
        TmpCell->num = n;
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
        TmpCell->RSlMb4 = S->RSlMb4;
        S->RSlMb4 = TmpCell;
    };
}

int Z8fFVA6yMXEG (G1aJcT5yIs S) {
    if (!IsEmpty(S))
        return S->RSlMb4->num;
    printf ("Empty stack");
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (999 - 999);
}

void  Pop (G1aJcT5yIs S) {
    PtrToNode FirstCell;
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
    if (IsEmpty (S)) {
        exit (0);
    }
    else {
        free (FirstCell);
        FirstCell = S->RSlMb4;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        S->RSlMb4 = S->RSlMb4->RSlMb4;
    };
}

void  main () {
    int x8YJU32;
    char a [(1079 - 929)];
    gets (a);
    G1aJcT5yIs S;
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
    MakeEmpty (S);
    S = CreateStack ();
    for (x8YJU32 = 0; a[x8YJU32] != '\0'; x8YJU32++) {
        Push (a[x8YJU32], x8YJU32, S);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (; !IsEmpty(S)&&S->RSlMb4->RSlMb4 != NULL &&S->RSlMb4->RSlMb4->Element != S->RSlMb4->Element;) {
            Pop (S);
            Pop (S);
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
            printf ("%d %d\n", Z8fFVA6yMXEG (S->RSlMb4), Z8fFVA6yMXEG (S));
        };
    }
    for (; !IsEmpty(S);)
        ;
}

