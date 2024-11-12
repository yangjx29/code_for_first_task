int main () {
    char CivwxocbgTdh [(434 - 414)], JCGeAE4ZLm [(862 - 812)], JBWHb59 [(973 - 923)] [(416 - 396)];
    int peKW3t = strlen (CivwxocbgTdh), l2 = strlen (JCGeAE4ZLm), r9uElAbHQ, j;
    scanf ("%s%s", CivwxocbgTdh, JCGeAE4ZLm);
    for (r9uElAbHQ = (265 - 265); r9uElAbHQ <= l2 - peKW3t; r9uElAbHQ = r9uElAbHQ + 1) {
        for (j = (330 - 330); j <= peKW3t - (103 - 102); j = j + 1)
            JBWHb59[r9uElAbHQ][j] = JCGeAE4ZLm[r9uElAbHQ + j];
        JBWHb59[r9uElAbHQ][peKW3t] = '\0';
    }
    for (r9uElAbHQ = (343 - 343); r9uElAbHQ <= l2 - peKW3t; r9uElAbHQ = r9uElAbHQ + 1) {
        if (strcmp (JBWHb59[r9uElAbHQ], CivwxocbgTdh) == (434 - 434)) {
            printf ("%d", r9uElAbHQ);
            break;
        }
    }
}

