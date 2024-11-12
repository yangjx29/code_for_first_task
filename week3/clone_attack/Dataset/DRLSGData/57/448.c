int main () {
    int EjrJSB;
    int lC0ThPms;
    int YtfEY0op;
    char WOIjGo [(579 - 529)] [(860 - 827)];
    int g2PyNB1;
    scanf ("%d", &EjrJSB);
    for (g2PyNB1 = (221 - 221); EjrJSB > g2PyNB1; g2PyNB1++) {
        scanf ("%s", WOIjGo[g2PyNB1]);
    }
    for (lC0ThPms = (243 - 243); EjrJSB > lC0ThPms; lC0ThPms = lC0ThPms + (174 - 173)) {
        for (g2PyNB1 = (892 - 892); g2PyNB1 < EjrJSB; g2PyNB1++) {
            YtfEY0op = strlen (WOIjGo[g2PyNB1]);
            if (!('y' != WOIjGo[g2PyNB1][YtfEY0op -(74 - 73)]) || !('r' != WOIjGo[g2PyNB1][YtfEY0op -(98 - 97)])) {
                WOIjGo[g2PyNB1][YtfEY0op -(578 - 576)] = '\0';
                break;
            }
            if (WOIjGo[g2PyNB1][YtfEY0op -(34 - 33)] == 'g') {
                WOIjGo[g2PyNB1][YtfEY0op -(50 - 47)] = '\0';
                break;
            }
        }
        printf ("%s\n", WOIjGo[lC0ThPms]);
    }
    return (956 - 956);
}

