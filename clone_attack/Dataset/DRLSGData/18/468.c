int Q0SLKf2 (int uIgf0SiV [] [(843 - 741)], int mdYfzc1vUk) {
    int bcqO71tXd, iAmtbIu;
    for (bcqO71tXd = (202 - 202); bcqO71tXd < mdYfzc1vUk; bcqO71tXd++) {
        int OeHDm0YN72;
        OeHDm0YN72 = (1975 - 976);
        for (iAmtbIu = (335 - 335); iAmtbIu < mdYfzc1vUk; iAmtbIu++) {
            if (OeHDm0YN72 > uIgf0SiV[bcqO71tXd][iAmtbIu])
                OeHDm0YN72 = uIgf0SiV[bcqO71tXd][iAmtbIu];
        }
        for (iAmtbIu = (716 - 716); iAmtbIu < mdYfzc1vUk; iAmtbIu++) {
            uIgf0SiV[bcqO71tXd][iAmtbIu] = uIgf0SiV[bcqO71tXd][iAmtbIu] - OeHDm0YN72;
        }
    }
    for (bcqO71tXd = (155 - 155); mdYfzc1vUk > bcqO71tXd; bcqO71tXd++) {
        int OeHDm0YN72;
        OeHDm0YN72 = (1391 - 392);
        for (iAmtbIu = (334 - 334); iAmtbIu < mdYfzc1vUk; iAmtbIu++) {
            if (uIgf0SiV[iAmtbIu][bcqO71tXd] < OeHDm0YN72)
                OeHDm0YN72 = uIgf0SiV[iAmtbIu][bcqO71tXd];
        }
        for (iAmtbIu = (56 - 56); mdYfzc1vUk > iAmtbIu; iAmtbIu++) {
            uIgf0SiV[iAmtbIu][bcqO71tXd] = uIgf0SiV[iAmtbIu][bcqO71tXd] - OeHDm0YN72;
        }
    }
    return (uIgf0SiV[(668 - 667)][(533 - 532)]);
}

void  G4rSJda0 (int uIgf0SiV [] [(606 - 504)], int mdYfzc1vUk) {
    int bcqO71tXd, iAmtbIu;
    for (bcqO71tXd = (331 - 331); mdYfzc1vUk > bcqO71tXd; bcqO71tXd++) {
        for (iAmtbIu = (457 - 455); mdYfzc1vUk > iAmtbIu; iAmtbIu++) {
            uIgf0SiV[bcqO71tXd][iAmtbIu - (934 - 933)] = uIgf0SiV[bcqO71tXd][iAmtbIu];
        }
    }
    for (bcqO71tXd = (896 - 896); mdYfzc1vUk > bcqO71tXd; bcqO71tXd++) {
        for (iAmtbIu = 2; mdYfzc1vUk > iAmtbIu; iAmtbIu++) {
            uIgf0SiV[iAmtbIu - (176 - 175)][bcqO71tXd] = uIgf0SiV[iAmtbIu][bcqO71tXd];
        }
    }
}

int main () {
    int bcqO71tXd, mdYfzc1vUk;
    scanf ("%d", &mdYfzc1vUk);
    for (bcqO71tXd = (182 - 182); mdYfzc1vUk > bcqO71tXd; bcqO71tXd++) {
        int iAmtbIu;
        int xCjmhM17qYw;
        int ZrYG9LV7l5X6;
        int uIgf0SiV [(605 - 503)] [(196 - 94)];
        xCjmhM17qYw = (665 - 665);
        for (iAmtbIu = (436 - 436); mdYfzc1vUk > iAmtbIu; iAmtbIu++) {
            for (ZrYG9LV7l5X6 = (731 - 731); mdYfzc1vUk > ZrYG9LV7l5X6; ZrYG9LV7l5X6++)
                scanf ("%d", &uIgf0SiV[iAmtbIu][ZrYG9LV7l5X6]);
        }
        for (iAmtbIu = 0; mdYfzc1vUk - 1 > iAmtbIu; iAmtbIu++) {
            int pyQafZPRjnIL;
            pyQafZPRjnIL = Q0SLKf2 (uIgf0SiV, mdYfzc1vUk - iAmtbIu);
            xCjmhM17qYw = xCjmhM17qYw + pyQafZPRjnIL;
            G4rSJda0 (uIgf0SiV, mdYfzc1vUk - iAmtbIu);
        }
        printf ("%d\n", xCjmhM17qYw);
    }
}

