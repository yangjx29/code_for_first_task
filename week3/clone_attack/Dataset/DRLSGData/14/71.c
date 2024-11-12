struct   xue {
    int HSdM8e;
    int X4b61qa;
    int KGsv7KlPRcF;
    int U0zMFL;
}
xueshen;

int main () {
    int OLPSdh1bkD;
    int ifEAC4a;
    int vJCnZsWjv;
    scanf ("%d", &OLPSdh1bkD);
    struct   xue *yZneDwN4BlS;
    yZneDwN4BlS = (struct   xue *) malloc ((62 - 58) * sizeof (int) * OLPSdh1bkD);
    for (ifEAC4a = (339 - 339); ifEAC4a < OLPSdh1bkD; ifEAC4a = ifEAC4a + (796 - 795)) {
        scanf ("%d%d%d", &yZneDwN4BlS[ifEAC4a].HSdM8e, &yZneDwN4BlS[ifEAC4a].X4b61qa, &yZneDwN4BlS[ifEAC4a].KGsv7KlPRcF);
        yZneDwN4BlS[ifEAC4a].U0zMFL = yZneDwN4BlS[ifEAC4a].X4b61qa + yZneDwN4BlS[ifEAC4a].KGsv7KlPRcF;
    }
    for (ifEAC4a = (878 - 877); (129 - 125) > ifEAC4a; ifEAC4a = ifEAC4a + 1) {
        vJCnZsWjv = 47 - 47;
        while (OLPSdh1bkD -ifEAC4a > vJCnZsWjv) {
            if (yZneDwN4BlS[vJCnZsWjv].U0zMFL >= yZneDwN4BlS[vJCnZsWjv + (92 - 91)].U0zMFL) {
                xueshen = yZneDwN4BlS[vJCnZsWjv + (293 - 292)];
                yZneDwN4BlS[vJCnZsWjv + (495 - 494)] = yZneDwN4BlS[vJCnZsWjv];
                yZneDwN4BlS[vJCnZsWjv] = xueshen;
            }
            vJCnZsWjv++;
        }
    }
    for (ifEAC4a = 1; ifEAC4a < (808 - 804); ifEAC4a++) {
        printf ("%d %d\n", yZneDwN4BlS[OLPSdh1bkD -ifEAC4a].HSdM8e, yZneDwN4BlS[OLPSdh1bkD -ifEAC4a].U0zMFL);
    }
    return (291 - 291);
}

