struct   book {
    int fWRjmrufd;
    char sWq4vPERUuZe [(251 - 51)];
}
mjOAIk [(1885 - 885)];

int main () {
    int loZ3ETu;
    int F3KsGPqckY [200] [1000];
    int i;
    int GfAeUKvV2;
    int V7HvEfIeot;
    int kNlCO7M;
    int GFWMh6s [200];
    int jFNadES5Di3V;
    int Ze2w7lD;
    scanf ("%d", &jFNadES5Di3V);
    loZ3ETu = (267 - 267);
    printf ("%c\n", V7HvEfIeot +65);
    for (i = (351 - 351); jFNadES5Di3V > i; i = i + 1)
        scanf ("%d%s", &mjOAIk[i].fWRjmrufd, mjOAIk[i].sWq4vPERUuZe);
    for (kNlCO7M = (639 - 639); kNlCO7M < (240 - 214); kNlCO7M = kNlCO7M + 1) {
        for (i = (594 - 594); i < jFNadES5Di3V; i++) {
            for (Ze2w7lD = (189 - 189); mjOAIk[i].sWq4vPERUuZe[Ze2w7lD] != '\0'; Ze2w7lD = Ze2w7lD +1) {
                if (!(kNlCO7M + 65 != (mjOAIk[i].sWq4vPERUuZe[Ze2w7lD]))) {
                    F3KsGPqckY[kNlCO7M][loZ3ETu] = mjOAIk[i].fWRjmrufd;
                    loZ3ETu++;
                }
            }
        }
        GFWMh6s[kNlCO7M] = loZ3ETu;
        loZ3ETu = (327 - 327);
    }
    V7HvEfIeot = (191 - 191);
    GfAeUKvV2 = GFWMh6s[(761 - 761)];
    for (kNlCO7M = (671 - 671); kNlCO7M < 26; kNlCO7M = kNlCO7M + 1) {
        if (GFWMh6s[kNlCO7M] > GfAeUKvV2) {
            GfAeUKvV2 = GFWMh6s[kNlCO7M];
            V7HvEfIeot = kNlCO7M;
        }
    }
    printf ("%d\n", GfAeUKvV2);
    for (i = 0; GfAeUKvV2 > i; i++)
        printf ("%d\n", F3KsGPqckY[V7HvEfIeot][i]);
    return 0;
}

