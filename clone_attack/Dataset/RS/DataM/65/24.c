int uvhlJmbx = 0, FWo0wv = 0;
void  fuck (int a, int b);

int main () {
    int i;
    int B5C4OiANt;
    int a [200];
    int b [200];
    scanf ("%d", &B5C4OiANt);
    for (i = 0; B5C4OiANt > i; i = i + 1)
        scanf ("%d%d", &a[i], &b[i]);
    {
        i = 0;
        while (i < B5C4OiANt) {
            fuck (a[i], b[i]);
            i = i + 1;
        };
    }
    if (uvhlJmbx > FWo0wv)
        ;
    else if (FWo0wv > uvhlJmbx)
        ;
    else
        printf ("Tie\n");
    return 0;
}

void  fuck (int a, int b) {
    if ((!(0 != a) && !((942 - 941) != b)) || (!(1 != a) && !(2 != b)) || (!(2 != a) && b == 0))
        uvhlJmbx = uvhlJmbx + 1;
    else if ((a == 1 && b == 0) || (a == 2 && b == 1) || (a == 0 && b == 2))
        FWo0wv = FWo0wv +1;
}

