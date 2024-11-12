int main () {
    char iAC6Ta5SZp;
    int first, h1F89cg2B, in;
    scanf ("%d", &first);
    h1F89cg2B = 0;
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
    scanf ("%c", &iAC6Ta5SZp);
    while (iAC6Ta5SZp == ',') {
        scanf ("%d", &in);
        scanf ("%c", &iAC6Ta5SZp);
        if (in > first) {
            h1F89cg2B = first;
            first = in;
        }
        else {
            if (in == first)
                h1F89cg2B = h1F89cg2B;
            else {
                if (in > h1F89cg2B)
                    h1F89cg2B = in;
            };
        };
    }
    if (h1F89cg2B == 0)
        printf ("No");
    else
        printf ("%d", h1F89cg2B);
}

