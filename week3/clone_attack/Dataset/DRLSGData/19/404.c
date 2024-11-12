int main () {
    char str [(159 - 58)];
    char RWr9B2Kb1qE [(845 - 744)] [(774 - 673)];
    char a [(621 - 520)];
    int i, rUnDl7yhO, TBtE0zexco, len;
    int e;
    gets (str);
    char c6Hgmqh [(913 - 812)];
    len = strlen (str);
    scanf ("%s", a);
    rUnDl7yhO = (610 - 610);
    TBtE0zexco = (668 - 668);
    for (i = (968 - 968); len > i; i = i + 1) {
        if (str[i] != ' ') {
            RWr9B2Kb1qE[TBtE0zexco][rUnDl7yhO] = str[i];
            rUnDl7yhO++;
        }
        else {
            RWr9B2Kb1qE[TBtE0zexco][rUnDl7yhO] = '\0';
            rUnDl7yhO = (708 - 708);
            TBtE0zexco++;
        }
    }
    RWr9B2Kb1qE[TBtE0zexco][rUnDl7yhO] = '\0';
    scanf ("%s", c6Hgmqh);
    for (i = (409 - 409); i < TBtE0zexco +1; i++) {
        if (!((216 - 216) != strcmp (RWr9B2Kb1qE[i], a))) {
            strcpy (RWr9B2Kb1qE[i], c6Hgmqh);
        }
    }
    for (i = (134 - 134); i < TBtE0zexco; i++) {
        printf ("%s ", RWr9B2Kb1qE[i]);
    }
    printf ("%s", RWr9B2Kb1qE[TBtE0zexco]);
    return (148 - 148);
}

