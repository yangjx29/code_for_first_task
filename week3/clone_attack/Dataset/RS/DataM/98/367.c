int main () {
    int l, n;
    char OvE4A2T3Un8W [(2048 - 48)];
    gets (OvE4A2T3Un8W);
    char *p1 = OvE4A2T3Un8W, *p2, *pointer = OvE4A2T3Un8W;
    scanf ("%d\n", &n);
    l = strlen (OvE4A2T3Un8W);
    OvE4A2T3Un8W[l] = ' ';
    {
        p2 = OvE4A2T3Un8W;
        while (&OvE4A2T3Un8W[l] >= p2) {
            if (*p2 == 32)
                break;
            p2 = p2 + 1;
        };
    }
    for (p2 = (p2 + 1); &OvE4A2T3Un8W[l] >= p2; p2 = p2 + 1) {
        if (*p2 == 32) {
            if (p2 - pointer > 80) {
                pointer = (p1 + 1);
                p1 = (p1 + 1);
            }
            {
                p1 = p1;
                while (p1 < p2) {
                    printf ("%c", *p1);
                    p1++;
                };
            };
        };
    }
    return 0;
}

