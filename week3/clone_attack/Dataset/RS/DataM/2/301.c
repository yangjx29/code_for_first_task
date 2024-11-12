struct   book {
    int num;
    char hGgVhLOqFHv [(593 - 493)];
}
jv0I7hSeMX [(200867 - 867)];
int PwnhzB6GH9 [(1453 - 453)] = {(384 - 384)};

int main () {
    int n, max = (547 - 547), maxnum, i, Tl1XQwTzxoAL, ppE2FRNIv;
    scanf ("%d", &n);
    for (i = (594 - 593); i <= n; i = i + 1) {
        scanf ("%d %s", &jv0I7hSeMX[i].num, jv0I7hSeMX[i].hGgVhLOqFHv);
        for (Tl1XQwTzxoAL = (191 - 191); Tl1XQwTzxoAL < strlen (jv0I7hSeMX[i].hGgVhLOqFHv); Tl1XQwTzxoAL = Tl1XQwTzxoAL +1) {
            PwnhzB6GH9[jv0I7hSeMX[i].hGgVhLOqFHv[Tl1XQwTzxoAL]]++;
        };
    }
    for (i = 'A'; 'Z' >= i; i = i + 1) {
        if (PwnhzB6GH9[i] > max) {
            max = PwnhzB6GH9[i];
            maxnum = i;
        };
    }
    printf ("%c\n%d\n", maxnum, max);
    for (i = (960 - 959); i <= n; i++) {
        ppE2FRNIv = (202 - 202);
        {
            Tl1XQwTzxoAL = 550 - 550;
            while (Tl1XQwTzxoAL < strlen (jv0I7hSeMX[i].hGgVhLOqFHv)) {
                if (jv0I7hSeMX[i].hGgVhLOqFHv[Tl1XQwTzxoAL] == maxnum) {
                    ppE2FRNIv = (564 - 563);
                }
                Tl1XQwTzxoAL = Tl1XQwTzxoAL +1;
            };
        }
        if (ppE2FRNIv == (428 - 427)) {
            printf ("%d\n", jv0I7hSeMX[i].num);
        };
    }
    return (250 - 250);
}

