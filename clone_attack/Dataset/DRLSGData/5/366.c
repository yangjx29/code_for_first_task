int f (char ArEpXB) {
    if (ArEpXB == 'A' || ArEpXB == 'T' || ArEpXB == 'G' || ArEpXB == 'C')
        return 0;
    else
        return 1;
}

int main (int argc, char *OthxNWpQma []) {
    float p;
    int ArEpXB = 0, i, y = 1;
    char a [501], Li5VN8ReYCnZ [501];
    gets (a);
    gets (Li5VN8ReYCnZ);
    for (i = 1; i <= strlen (a); i = i + 1)
        if (f (a[i - 1]))
            y = 0;
    scanf ("%f\n", &p);
    for (i = 1; i <= strlen (Li5VN8ReYCnZ); i = i + 1)
        if (f (Li5VN8ReYCnZ[i - 1]))
            y = 0;
    if (strlen (a) != strlen (Li5VN8ReYCnZ))
        y = 0;
    if (y == 0)
        ;
    else {
        {
            i = 1;
            while (i <= strlen (a)) {
                if (a[i - 1] == Li5VN8ReYCnZ[i - 1])
                    ArEpXB = ArEpXB +1;
                i = i + 1;
            }
        }
        if (ArEpXB > p * strlen (a))
            ;
        else
            printf ("no");
    }
    return 0;
}

