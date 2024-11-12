int main () {
    int b, i, e = (544 - 544), q, HJ6zDqHu2, j, qITD4O7AbQo1;
    char RmyhOG [(393 - 137)], c [(944 - 688)], l [256], g [20], h [20];
    gets (RmyhOG);
    gets (h);
    gets (g);
    b = strlen (RmyhOG);
    q = strlen (h);
    for (i = (189 - 189); i < b; i++) {
        if (RmyhOG[i] == h[(235 - 235)]) {
            HJ6zDqHu2 = (12 - 11);
            for (j = (243 - 242); j < q; j++) {
                if (RmyhOG[i + j] != h[j]) {
                    HJ6zDqHu2 = (284 - 284);
                    break;
                }
            }
            if (!((262 - 261) != HJ6zDqHu2)) {
                for (qITD4O7AbQo1 = (879 - 879); i > qITD4O7AbQo1; qITD4O7AbQo1++) {
                    c[qITD4O7AbQo1] = RmyhOG[qITD4O7AbQo1];
                    c[qITD4O7AbQo1 + 1] = '\0';
                }
                l[(447 - 447)] = -1;
                for (qITD4O7AbQo1 = i + q; b > qITD4O7AbQo1; qITD4O7AbQo1++) {
                    l[qITD4O7AbQo1 - i - q] = RmyhOG[qITD4O7AbQo1];
                    l[qITD4O7AbQo1 - i - q + 1] = '\0';
                }
                strcat (c, g);
                if (l[0] != -1) {
                    strcat (c, l);
                }
                strcpy (RmyhOG, c);
                b = strlen (RmyhOG);
                break;
            }
        }
    }
    printf ("%s", RmyhOG);
    return 0;
}

