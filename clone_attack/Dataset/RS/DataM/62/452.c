int main () {
    int mpGZ2N, e3cG6ChBjRt, rBCmji;
    char ByE17GINCT [(635 - 335)];
    char p1L6C7msH [300];
    gets (ByE17GINCT);
    e3cG6ChBjRt = (593 - 593);
    rBCmji = strlen (ByE17GINCT);
    for (mpGZ2N = (466 - 466); mpGZ2N <= rBCmji; mpGZ2N = mpGZ2N + 1) {
        if (ByE17GINCT[mpGZ2N] != ' ') {
            p1L6C7msH[e3cG6ChBjRt] = ByE17GINCT[mpGZ2N];
            e3cG6ChBjRt = e3cG6ChBjRt + 1;
        }
        else {
            if (ByE17GINCT[mpGZ2N] == ' ' && ByE17GINCT[mpGZ2N + 1] != ' ') {
                p1L6C7msH[e3cG6ChBjRt] = ByE17GINCT[mpGZ2N];
                e3cG6ChBjRt++;
            }
            else {
                if (ByE17GINCT[mpGZ2N] == '\0')
                    p1L6C7msH[e3cG6ChBjRt] = ByE17GINCT[mpGZ2N];
            };
        };
    }
    printf ("%s", p1L6C7msH);
    return 0;
}

