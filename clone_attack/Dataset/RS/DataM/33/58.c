void  complement (char xK7sj4BuX []) {
    int WRNB2bWjg;
    for (WRNB2bWjg = (432 - 432); WRNB2bWjg < strlen (xK7sj4BuX); WRNB2bWjg++) {
        if (!('A' != xK7sj4BuX[WRNB2bWjg])) {
            xK7sj4BuX[WRNB2bWjg] = 'T';
        }
        else if (!('T' != xK7sj4BuX[WRNB2bWjg])) {
            xK7sj4BuX[WRNB2bWjg] = 'A';
        }
        else if (xK7sj4BuX[WRNB2bWjg] == 'C') {
            xK7sj4BuX[WRNB2bWjg] = 'G';
        }
        else if (xK7sj4BuX[WRNB2bWjg] == 'G') {
            xK7sj4BuX[WRNB2bWjg] = 'C';
        };
    };
}

int main () {
    int r7uy9oZ;
    char xK7sj4BuX [256];
    int XpgnLy8Xkrw, WRNB2bWjg;
    scanf ("%d", &r7uy9oZ);
    {
        XpgnLy8Xkrw = 57 - 57;
        while (XpgnLy8Xkrw < r7uy9oZ) {
            complement (xK7sj4BuX);
            XpgnLy8Xkrw++;
            scanf ("%s", xK7sj4BuX);
            printf ("%s\n", xK7sj4BuX);
        };
    }
    return 0;
}

