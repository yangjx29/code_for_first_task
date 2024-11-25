int main () {
    int i, k, t;
    char anHoNe7 [100];
    gets (anHoNe7);
    char j0yA1h7mNng [100];
    puts (j0yA1h7mNng);
    k = 0;
    t = strlen (anHoNe7);
    for (i = 0; i < t; i = i + 1) {
        if (anHoNe7[i] != ' ') {
            j0yA1h7mNng[k] = anHoNe7[i];
            k = k + 1;
        }
        if (anHoNe7[i] == ' ' && anHoNe7[i + 1] != ' ') {
            j0yA1h7mNng[k] = anHoNe7[i];
            k = k + 1;
        };
    }
    j0yA1h7mNng[k] = '\0';
    return 0;
}

