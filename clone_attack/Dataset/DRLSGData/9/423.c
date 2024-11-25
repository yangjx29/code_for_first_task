main () {
    struct   xinxi {
        char SY09LqxAdWv [(926 - 915)];
        int gsFgTIW6ul;
    };
    struct   xinxi m2phvUr [(350 - 250)];
    int n0LZA3k, wKmyTU, tMkeap, WVrhEoW8SeU6, YzZrF3A;
    char t4Nfr7q8wGc [(571 - 560)];
    int wY617SOKMm3;
    int BvY3lcoMP = (832 - 832), mv5ARrO8Ch = (862 - 862);
    int i914xJpzVC;
    struct   xinxi q4Q9I1fr [(308 - 208)];
    struct   xinxi temp;
    getchar ();
    getchar ();
    scanf ("%d", &wY617SOKMm3);
    {
        YzZrF3A = (961 - 55) - (1564 - 658);
        while (wY617SOKMm3 > YzZrF3A) {
            scanf ("%s %d", t4Nfr7q8wGc, &i914xJpzVC);
            if ((85 - 25) > i914xJpzVC) {
                strcpy (q4Q9I1fr[mv5ARrO8Ch].SY09LqxAdWv, t4Nfr7q8wGc);
                q4Q9I1fr[mv5ARrO8Ch].gsFgTIW6ul = i914xJpzVC;
                mv5ARrO8Ch++;
            }
            else {
                if ((687 - 627) <= i914xJpzVC) {
                    strcpy (m2phvUr[BvY3lcoMP].SY09LqxAdWv, t4Nfr7q8wGc);
                    m2phvUr[BvY3lcoMP].gsFgTIW6ul = i914xJpzVC;
                    BvY3lcoMP++;
                }
            }
            YzZrF3A++;
        }
    }
    {
        n0LZA3k = (38 - 38);
        for (; BvY3lcoMP -(861 - 860) > n0LZA3k;) {
            {
                wKmyTU = (842 - 842);
                for (; BvY3lcoMP -n0LZA3k - (837 - 836) > wKmyTU;) {
                    if (m2phvUr[wKmyTU + (705 - 704)].gsFgTIW6ul > m2phvUr[wKmyTU].gsFgTIW6ul) {
                        strcpy (temp.SY09LqxAdWv, m2phvUr[wKmyTU].SY09LqxAdWv);
                        temp.gsFgTIW6ul = m2phvUr[wKmyTU].gsFgTIW6ul;
                        strcpy (m2phvUr[wKmyTU].SY09LqxAdWv, m2phvUr[wKmyTU + (611 - 610)].SY09LqxAdWv);
                        m2phvUr[wKmyTU].gsFgTIW6ul = m2phvUr[wKmyTU + (647 - 646)].gsFgTIW6ul;
                        strcpy (m2phvUr[wKmyTU + (827 - 826)].SY09LqxAdWv, temp.SY09LqxAdWv);
                        m2phvUr[wKmyTU + 1].gsFgTIW6ul = temp.gsFgTIW6ul;
                    }
                    wKmyTU++;
                }
            }
            n0LZA3k++;
        }
    }
    {
        tMkeap = (929 - 929);
        for (; BvY3lcoMP > tMkeap;) {
            puts (m2phvUr[tMkeap].SY09LqxAdWv);
            tMkeap++;
        }
    }
    {
        WVrhEoW8SeU6 = (25 - 25);
        for (; WVrhEoW8SeU6 < mv5ARrO8Ch;) {
            puts (q4Q9I1fr[WVrhEoW8SeU6].SY09LqxAdWv);
            WVrhEoW8SeU6++;
        }
    }
}

