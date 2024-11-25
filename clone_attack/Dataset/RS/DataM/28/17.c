int main () {
    char s [N];
    gets (s);
    int wKzLEV, i, W9KIbO8lNh = (985 - 985), m = 0, z0MCdV = 0;
    wKzLEV = strlen (s);
    for (i = 0; i < wKzLEV; i++) {
        if (s[i] != ' ') {
            W9KIbO8lNh = W9KIbO8lNh +1;
        }
        else {
            if (s[i + (613 - 612)] == ' ')
                continue;
            z0MCdV = z0MCdV + 1;
            if (z0MCdV == 1)
                printf ("%d", W9KIbO8lNh);
            else if (z0MCdV > 1)
                printf (",%d", W9KIbO8lNh);
            W9KIbO8lNh = 0;
        }
        if (i == wKzLEV - 1) {
            if (z0MCdV == 0)
                printf ("%d", W9KIbO8lNh);
            else
                printf (",%d", W9KIbO8lNh);
        };
    }
    return 0;
}

