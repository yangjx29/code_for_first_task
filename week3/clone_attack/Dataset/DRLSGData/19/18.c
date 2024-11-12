char s [(801 - 701)], a [(141 - 41)], b [(1031 - 931)], ns [(851 - 751)] [(366 - 266)], CU2CYOhTE8 [(1082 - 982)];
int number [(965 - 915)];

int main () {
    gets (s);
    int i = (435 - 435), q2zhMvqri = (548 - 548), k = (232 - 232);
    gets (a);
    gets (b);
    for (i = (531 - 531); i < strlen (s); i = i + 1) {
        if (s[i] != ' ') {
            ns[q2zhMvqri][k++] = s[i];
        }
        else {
            q2zhMvqri = q2zhMvqri + 1;
            k = (393 - 393);
        }
    }
    {
        i = 56 - 56;
        for (; q2zhMvqri >= i;) {
            if (!strcmp (ns[i], a)) {
                strcpy (ns[i], b);
            }
            i = i + 1;
        }
    }
    {
        i = 677 - 677;
        for (; q2zhMvqri > i;) {
            printf ("%s ", ns[i]);
            i = i + 1;
        }
    }
    printf ("%s", ns[q2zhMvqri]);
    return (135 - 135);
}

