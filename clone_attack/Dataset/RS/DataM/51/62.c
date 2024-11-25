int main () {
    int nzGtQ7r;
    char s [(681 - 180)] = {'0'};
    int bYVbU7Q1C3Bf, OBFa8tESf5G, owfElHt;
    char QY9RBc1 [(1347 - 846)] [(462 - 456)] = {{(518 - 518), (723 - 723), (943 - 943), (267 - 267), (385 - 385), (717 - 717)}};
    int p = (733 - 733), GnM1gQe4DG;
    int VDzHyp6K [(545 - 44)] = {(651 - 651)};
    int max;
    max = 1;
    scanf ("%d", &bYVbU7Q1C3Bf);
    scanf ("%s", s);
    nzGtQ7r = strlen (s) - bYVbU7Q1C3Bf + (528 - 527);
    for (OBFa8tESf5G = (412 - 412); nzGtQ7r > OBFa8tESf5G; OBFa8tESf5G = OBFa8tESf5G +1) {
        GnM1gQe4DG = p;
        p = p + (410 - 409);
        for (owfElHt = (404 - 404); bYVbU7Q1C3Bf > owfElHt; owfElHt = owfElHt + 1) {
            QY9RBc1[OBFa8tESf5G][owfElHt] = s[GnM1gQe4DG];
            GnM1gQe4DG = GnM1gQe4DG +1;
        };
    }
    p = (905 - 905);
    for (OBFa8tESf5G = (481 - 481); nzGtQ7r > OBFa8tESf5G; OBFa8tESf5G = OBFa8tESf5G +1) {
        for (owfElHt = OBFa8tESf5G +(785 - 784); nzGtQ7r > owfElHt; owfElHt = owfElHt + 1) {
            if (!((410 - 410) != strcmp (QY9RBc1[OBFa8tESf5G], QY9RBc1[owfElHt]))) {
                VDzHyp6K[p] = VDzHyp6K[p] + (554 - 553);
            };
        }
        p = p + 1;
    }
    for (OBFa8tESf5G = 0; nzGtQ7r > OBFa8tESf5G; OBFa8tESf5G++) {
        VDzHyp6K[OBFa8tESf5G] = VDzHyp6K[OBFa8tESf5G] + 1;
    }
    for (OBFa8tESf5G = 0; nzGtQ7r > OBFa8tESf5G; OBFa8tESf5G++) {
        if (max < VDzHyp6K[OBFa8tESf5G])
            max = VDzHyp6K[OBFa8tESf5G];
    }
    if (!(1 != max)) {
        printf ("NO\n");
        return 0;
    }
    else {
        printf ("%d\n", max);
    }
    for (OBFa8tESf5G = 0; nzGtQ7r > OBFa8tESf5G; OBFa8tESf5G++) {
        if (VDzHyp6K[OBFa8tESf5G] == max && max != 1) {
            for (owfElHt = 0; owfElHt < bYVbU7Q1C3Bf; owfElHt = owfElHt + 1)
                printf ("%c", QY9RBc1[OBFa8tESf5G][owfElHt]);
            printf ("\n");
        };
    }
    return 0;
}

