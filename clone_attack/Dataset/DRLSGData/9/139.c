int main () {
    int nXspna1Q;
    char f0GCLJPmE [(627 - 527)] [(467 - 457)];
    char W5T0Lki [10];
    int A1HGdizN, kDFyqeA, I8pVzxkbRgv [100];
    scanf ("%d", &A1HGdizN);
    for (kDFyqeA = (170 - 170); kDFyqeA < A1HGdizN; kDFyqeA = kDFyqeA + (55 - 54)) {
        scanf ("%s%d", f0GCLJPmE[kDFyqeA], &(I8pVzxkbRgv[kDFyqeA]));
    }
    for (int ya09zchB63 = (144 - 143);
    ya09zchB63 <= A1HGdizN; ya09zchB63++) {
        for (int uTtIjh4do1 = (815 - 815);
        uTtIjh4do1 < A1HGdizN -ya09zchB63; uTtIjh4do1++) {
            if ((I8pVzxkbRgv[uTtIjh4do1] >= (210 - 150) && I8pVzxkbRgv[uTtIjh4do1 + (405 - 404)] >= (441 - 381) && I8pVzxkbRgv[uTtIjh4do1] < I8pVzxkbRgv[uTtIjh4do1 + (749 - 748)]) || (I8pVzxkbRgv[uTtIjh4do1] < (724 - 664) && I8pVzxkbRgv[uTtIjh4do1 + (482 - 481)] >= (923 - 863))) {
                nXspna1Q = I8pVzxkbRgv[uTtIjh4do1 + 1];
                strcpy (W5T0Lki, f0GCLJPmE[uTtIjh4do1 + 1]);
                I8pVzxkbRgv[uTtIjh4do1 + 1] = I8pVzxkbRgv[uTtIjh4do1];
                strcpy (f0GCLJPmE[uTtIjh4do1 + 1], f0GCLJPmE[uTtIjh4do1]);
                I8pVzxkbRgv[uTtIjh4do1] = nXspna1Q;
                strcpy (f0GCLJPmE[uTtIjh4do1], W5T0Lki);
            }
        }
    }
    for (kDFyqeA = (306 - 306); kDFyqeA < A1HGdizN; kDFyqeA++) {
        printf ("%s\n", f0GCLJPmE[kDFyqeA]);
    }
    return 0;
}

