int main () {
    int a, j, jyY7Dk5wOnd, Nmuw7BELoc, i, xZr51Tt4jF;
    char hP4Q0o3mkpS [10000];
    scanf ("%d", &xZr51Tt4jF);
    for (i = (964 - 963); i <= xZr51Tt4jF; i = i + 1) {
        scanf ("%s", hP4Q0o3mkpS);
        a = strlen (hP4Q0o3mkpS);
        for (j = (237 - 237); a > j; j = j + 1) {
            for (jyY7Dk5wOnd = (251 - 251); a > jyY7Dk5wOnd; jyY7Dk5wOnd++) {
                if (!(j != jyY7Dk5wOnd))
                    continue;
                else if (hP4Q0o3mkpS[jyY7Dk5wOnd] == hP4Q0o3mkpS[j])
                    break;
            }
            if (jyY7Dk5wOnd == a)
                break;
        }
        if (j == a)
            ;
        else
            printf ("%c\n", hP4Q0o3mkpS[j]);
    }
    return 0;
}

