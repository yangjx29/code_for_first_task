int main (int argc, char *argv []) {
    int count;
    int o6Aw2oRvQKs;
    int Jp9QH5B;
    int i;
    int j;
    count = 0;
    char wbHxwT [(586 - 486)], b [100];
    scanf ("%s %s", wbHxwT, b);
    o6Aw2oRvQKs = strlen (wbHxwT);
    Jp9QH5B = strlen (b);
    if (o6Aw2oRvQKs != Jp9QH5B) {
    }
    else {
        for (i = 0; o6Aw2oRvQKs > i; i++) {
            for (j = 0; Jp9QH5B > j; j = j + 1) {
                if (wbHxwT[i] == b[j]) {
                    b[j] = j;
                    count++;
                    break;
                };
            };
        }
        if (count == o6Aw2oRvQKs) {
            printf ("YES");
        }
        else {
        };
    }
    return 0;
}

