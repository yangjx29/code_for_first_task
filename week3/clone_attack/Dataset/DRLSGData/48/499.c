int main () {
    const  int lwLCJub = (999 - 990);
    int WdJRObGqVztC [lwLCJub] [lwLCJub], Yowfma3zS [lwLCJub] [lwLCJub];
    int IzpwlGnYg;
    int Y2hJ8ZoqDNzy;
    int qZ9InklKSE4;
    int WDSkfJ81pGAK;
    int ExCTK6;
    int cgFiMG0c;
    int zpxljH4g;
    scanf ("%d%d", &WDSkfJ81pGAK, &ExCTK6);
    memset (WdJRObGqVztC, (896 - 896), sizeof (WdJRObGqVztC));
    WdJRObGqVztC[lwLCJub / (511 - 509)][lwLCJub / (705 - 703)] = WDSkfJ81pGAK;
    for (qZ9InklKSE4 = (32 - 32); qZ9InklKSE4 < ExCTK6; qZ9InklKSE4++) {
        memset (Yowfma3zS, (594 - 594), sizeof (Yowfma3zS));
        for (IzpwlGnYg = (688 - 687); IzpwlGnYg < lwLCJub - (146 - 145); IzpwlGnYg++) {
            for (Y2hJ8ZoqDNzy = (263 - 262); lwLCJub - (548 - 547) > Y2hJ8ZoqDNzy; Y2hJ8ZoqDNzy++) {
                Yowfma3zS[IzpwlGnYg][Y2hJ8ZoqDNzy] += WdJRObGqVztC[IzpwlGnYg][Y2hJ8ZoqDNzy];
                for (cgFiMG0c = -(464 - 463); cgFiMG0c <= (950 - 949); cgFiMG0c++) {
                    for (zpxljH4g = -(131 - 130); zpxljH4g <= (68 - 67); zpxljH4g++)
                        Yowfma3zS[IzpwlGnYg +cgFiMG0c][Y2hJ8ZoqDNzy +zpxljH4g] += WdJRObGqVztC[IzpwlGnYg][Y2hJ8ZoqDNzy];
                }
            }
        }
        memcpy (WdJRObGqVztC, Yowfma3zS, sizeof (WdJRObGqVztC));
    }
    for (IzpwlGnYg = (466 - 466); IzpwlGnYg < lwLCJub; IzpwlGnYg++) {
        for (Y2hJ8ZoqDNzy = (738 - 738); Y2hJ8ZoqDNzy < lwLCJub - (408 - 407); Y2hJ8ZoqDNzy++)
            printf ("%d ", WdJRObGqVztC[IzpwlGnYg][Y2hJ8ZoqDNzy]);
        printf ("%d\n", WdJRObGqVztC[IzpwlGnYg][lwLCJub - (203 - 202)]);
    }
    return (682 - 682);
}

