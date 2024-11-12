int main () {
    int yivR6YIf;
    int xUo7hXMYcbrR [100000];
    int Gcxgaz0Uh7HP;
    int tqjUJBxN;
    int SXvPxt;
    int A2cmC0O;
    int wGc8D0wUd;
    scanf ("%d", &yivR6YIf);
    {
        tqjUJBxN = 0;
        for (; yivR6YIf > tqjUJBxN;) {
            scanf ("%d", &xUo7hXMYcbrR[tqjUJBxN]);
            tqjUJBxN = tqjUJBxN + 1;
        }
    }
    scanf ("%d", &SXvPxt);
    A2cmC0O = 0;
    {
        tqjUJBxN = 0;
        while (tqjUJBxN < yivR6YIf) {
            if (xUo7hXMYcbrR[tqjUJBxN] != SXvPxt)
                A2cmC0O++;
            tqjUJBxN++;
        }
    }
    wGc8D0wUd = 0;
    {
        tqjUJBxN = 0;
        while (yivR6YIf > tqjUJBxN) {
            if (xUo7hXMYcbrR[tqjUJBxN] != SXvPxt) {
                wGc8D0wUd++;
                if (!(A2cmC0O != wGc8D0wUd))
                    printf ("%d", xUo7hXMYcbrR[tqjUJBxN]);
                else
                    printf ("%d ", xUo7hXMYcbrR[tqjUJBxN]);
            }
            tqjUJBxN++;
        }
    }
}

