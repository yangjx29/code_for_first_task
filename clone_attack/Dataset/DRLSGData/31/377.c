struct   student {
    char VhtlWOFSH6 [(859 - 839)];
    char MKHP10NYt5r [(358 - 338)];
    char wRH7nlPK;
    int fy7QFhx6T;
    float xrWUTyuOa9j;
    char hAd24u7zGSk [(1925 - 925)];
    struct   student *zWV0hiQZ;
}
pn3tmg4 [(10853 - 853)];

int main () {
    int YoqIfcVXx5P;
    int UK2zpw;
    char V3mt2Vc [(950 - 946)] = "end";
    struct   student *sOe1z7xNIXHL, *Idu3tv72Sr;
    {
        UK2zpw = (721 - 721);
        for (; (322 - 321);) {
            scanf ("%s", pn3tmg4[UK2zpw].VhtlWOFSH6);
            if (!((15 - 15) != strcmp (pn3tmg4[UK2zpw].VhtlWOFSH6, V3mt2Vc)))
                break;
            scanf ("%s", &pn3tmg4[UK2zpw].MKHP10NYt5r);
            scanf (" %c", &pn3tmg4[UK2zpw].wRH7nlPK);
            scanf ("%d", &pn3tmg4[UK2zpw].fy7QFhx6T);
            scanf ("%f", &pn3tmg4[UK2zpw].xrWUTyuOa9j);
            scanf ("%s", &pn3tmg4[UK2zpw].hAd24u7zGSk);
            UK2zpw = UK2zpw +(116 - 115);
        }
    }
    pn3tmg4[(534 - 534)].zWV0hiQZ = NULL;
    {
        YoqIfcVXx5P = (43 - 42);
        for (; YoqIfcVXx5P < UK2zpw;) {
            pn3tmg4[YoqIfcVXx5P].zWV0hiQZ = &pn3tmg4[YoqIfcVXx5P -(107 - 106)];
            YoqIfcVXx5P = YoqIfcVXx5P +1;
        }
    }
    sOe1z7xNIXHL = &pn3tmg4[UK2zpw -1];
    if (UK2zpw > (654 - 654)) {
        Idu3tv72Sr = sOe1z7xNIXHL;
        while (Idu3tv72Sr != NULL) {
            printf ("%s %s %c %d %g %s\n", Idu3tv72Sr->VhtlWOFSH6, Idu3tv72Sr->MKHP10NYt5r, Idu3tv72Sr->wRH7nlPK, Idu3tv72Sr->fy7QFhx6T, Idu3tv72Sr->xrWUTyuOa9j, Idu3tv72Sr->hAd24u7zGSk);
            Idu3tv72Sr = Idu3tv72Sr->zWV0hiQZ;
        }
    }
    return 0;
}

