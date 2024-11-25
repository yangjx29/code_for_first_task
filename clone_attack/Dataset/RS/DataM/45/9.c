int location (char *seg, char *who) {
    int aRpOL9 = (307 - 307), j, len, flag = (669 - 669);
    len = strlen (seg);
    {
        j = 0;
        while (1) {
            if (!(seg[aRpOL9] != who[j])) {
                for (; len > aRpOL9 && (who[j] == seg[aRpOL9]); aRpOL9++, j++)
                    ;
                if (aRpOL9 == len && (who[j - (807 - 806)] == seg[aRpOL9 - (967 - 966)])) {
                    flag = (575 - 574);
                    break;
                };
            }
            j++;
        };
    }
    if (flag == 1)
        return j - len;
    else
        return -1;
}

int main () {
    char *segment = (char *) malloc (sizeof (char));
    char *R5qLM3wZio = (char *) malloc (sizeof (char));
    scanf ("%s%s", segment, R5qLM3wZio);
    printf ("%d", location (segment, R5qLM3wZio));
    return 0;
}

