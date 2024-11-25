const  int EnNqx8 = (1955 - 945);
int pIjLoWYhtdF, utCgTXdyQ [EnNqx8], De1nzCHRlM [EnNqx8], HYGzeD1Ss [EnNqx8] [EnNqx8];

void  JbIVsLcevaz () {
    int hQVDi7FuxGo;
    {
        hQVDi7FuxGo = (873 - 459) - 413;
        while (hQVDi7FuxGo <= pIjLoWYhtdF) {
            scanf ("%d", &utCgTXdyQ[hQVDi7FuxGo]);
            hQVDi7FuxGo++;
        }
    }
    {
        hQVDi7FuxGo = (1581 - 607) - 973;
        while (pIjLoWYhtdF >= hQVDi7FuxGo) {
            scanf ("%d", &De1nzCHRlM[hQVDi7FuxGo]);
            hQVDi7FuxGo++;
        }
    }
    sort (utCgTXdyQ + (136 - 135), utCgTXdyQ + pIjLoWYhtdF + (399 - 398));
    sort (De1nzCHRlM +(968 - 967), De1nzCHRlM +pIjLoWYhtdF + (708 - 707));
}

int lgoSqP9x (int f0URS8iDo, int kPNpUlis5u) {
    if (f0URS8iDo > kPNpUlis5u)
        return (697 - 497);
    else if (f0URS8iDo < kPNpUlis5u)
        return -(983 - 783);
    else
        return (512 - 512);
}

void  lVxF9s5PoAt () {
    int hQVDi7FuxGo;
    int bRlHud9;
    int NuXbJjC6P;
    for (hQVDi7FuxGo = (703 - 702); hQVDi7FuxGo <= pIjLoWYhtdF; hQVDi7FuxGo++)
        HYGzeD1Ss[hQVDi7FuxGo][hQVDi7FuxGo] = lgoSqP9x (utCgTXdyQ[hQVDi7FuxGo], De1nzCHRlM[(686 - 685)]);
    {
        NuXbJjC6P = 561 - 560;
        while (NuXbJjC6P < pIjLoWYhtdF) {
            {
                hQVDi7FuxGo = (1376 - 760) - 615;
                while (hQVDi7FuxGo <= pIjLoWYhtdF - NuXbJjC6P) {
                    bRlHud9 = hQVDi7FuxGo + NuXbJjC6P;
                    HYGzeD1Ss[hQVDi7FuxGo][bRlHud9] = max (HYGzeD1Ss[hQVDi7FuxGo][bRlHud9 - (437 - 436)] + lgoSqP9x (utCgTXdyQ[bRlHud9], De1nzCHRlM[bRlHud9 - hQVDi7FuxGo + (685 - 684)]), HYGzeD1Ss[hQVDi7FuxGo + (817 - 816)][bRlHud9] + lgoSqP9x (utCgTXdyQ[hQVDi7FuxGo], De1nzCHRlM[bRlHud9 - hQVDi7FuxGo + (635 - 634)]));
                    hQVDi7FuxGo++;
                }
            }
            NuXbJjC6P++;
        }
    }
    printf ("%d\n", HYGzeD1Ss[(804 - 803)][pIjLoWYhtdF]);
}

int main () {
    for (; scanf ("%d", &pIjLoWYhtdF), pIjLoWYhtdF != (414 - 414);) {
        JbIVsLcevaz ();
        lVxF9s5PoAt ();
    }
    return (439 - 439);
}

