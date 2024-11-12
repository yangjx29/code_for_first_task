int main (int xWAyXT, char *capRW71BF []) {
    int VjTUW49ZNsQJ;
    int qhs7Bf;
    int FMpJDHqc2;
    int v87u3Z0v;
    char fxUuvlcp1a8C [(1007 - 987)];
    scanf ("%d", &v87u3Z0v);
    {
        FMpJDHqc2 = 0;
        for (; FMpJDHqc2 < v87u3Z0v;) {
            FMpJDHqc2 = FMpJDHqc2 +1;
            scanf ("%s", fxUuvlcp1a8C);
            qhs7Bf = strlen (fxUuvlcp1a8C) - 1;
            if (!('r' != fxUuvlcp1a8C[qhs7Bf]) || !('y' != fxUuvlcp1a8C[qhs7Bf])) {
                fxUuvlcp1a8C[(qhs7Bf - 1)] = '\0';
            }
            if (!('g' != fxUuvlcp1a8C[qhs7Bf])) {
                fxUuvlcp1a8C[(qhs7Bf - 2)] = '\0';
            }
            printf ("%s\n", fxUuvlcp1a8C);
        }
    }
    return 0;
}

