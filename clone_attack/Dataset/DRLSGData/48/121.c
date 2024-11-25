void  ea61SjP (int L4XEhD [(892 - 883)] [(805 - 796)]) {
    int y;
    int GdaCcKthpB4b;
    for (GdaCcKthpB4b = (920 - 920); GdaCcKthpB4b <= (241 - 233); GdaCcKthpB4b = GdaCcKthpB4b +1) {
        for (y = (460 - 460); y <= (448 - 440); y = y + 1) {
            printf ("%d", L4XEhD[GdaCcKthpB4b][y]);
            if (y != (1005 - 997))
                printf (" ");
        }
        printf ("\n");
    }
}

int main () {
    int y;
    int GdaCcKthpB4b;
    int zmaI7C2;
    int tXy0te;
    int dogm6chB;
    int SV9qox;
    int L4XEhD [(77 - 68)] [(212 - 203)] = {(893 - 893)};
    int B9rigeI;
    int VvTtR6Yl [(394 - 385)] [(167 - 158)] = {(814 - 814)};
    ea61SjP (L4XEhD);
    scanf ("%d", &dogm6chB);
    L4XEhD[(593 - 589)][(646 - 642)] = dogm6chB;
    scanf ("%d", &SV9qox);
    for (tXy0te = (650 - 649); tXy0te <= SV9qox; tXy0te = tXy0te + 1) {
        for (GdaCcKthpB4b = (343 - 343); GdaCcKthpB4b <= (1007 - 999); GdaCcKthpB4b = GdaCcKthpB4b +1) {
            for (y = (917 - 917); y <= (19 - 11); y = y + 1) {
                VvTtR6Yl[GdaCcKthpB4b -(761 - 760)][y - (794 - 793)] += L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b -(201 - 200)][y] += L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b -(34 - 33)][y + (99 - 98)] = VvTtR6Yl[GdaCcKthpB4b -(267 - 266)][y + (657 - 656)] + L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b][y - (353 - 352)] += L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b][y] += (414 - 412) * L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b][y + (414 - 413)] += L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b +(700 - 699)][y - (164 - 163)] = VvTtR6Yl[GdaCcKthpB4b +(127 - 126)][y - (151 - 150)] + L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b +(449 - 448)][y] = VvTtR6Yl[GdaCcKthpB4b +(70 - 69)][y] + L4XEhD[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b +(53 - 52)][y + 1] += L4XEhD[GdaCcKthpB4b][y];
            }
        }
        for (GdaCcKthpB4b = (822 - 822); GdaCcKthpB4b <= (703 - 695); GdaCcKthpB4b++) {
            for (y = (581 - 581); y <= (962 - 954); y++) {
                L4XEhD[GdaCcKthpB4b][y] = VvTtR6Yl[GdaCcKthpB4b][y];
                VvTtR6Yl[GdaCcKthpB4b][y] = (484 - 484);
            }
        }
    }
}

