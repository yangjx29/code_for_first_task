int main () {
    char s [(521 - 321)], mwA81n6 [100], V7v4qXA98 [100], PVQmwePOt [(694 - 494)] = " ";
    int i = (759 - 759), XV9CqhZuB = 0, jS6ZpYqjDUk = 0, omp9ZVbO6 = 0, lVqjM4c, la, m6KdwFk, rwiDuB0WP, T8yHWXhbtMG1 = 0;
    cin.getline (s, 200);
    cin.getline (mwA81n6, 100);
    cin.getline (V7v4qXA98, 100);
    lVqjM4c = strlen (s), la = strlen (mwA81n6), m6KdwFk = strlen (V7v4qXA98);
    for (; lVqjM4c > i;) {
        omp9ZVbO6 = 0;
        for (XV9CqhZuB = 0; la > XV9CqhZuB; XV9CqhZuB++) {
            if (!(mwA81n6[XV9CqhZuB] == s[i + XV9CqhZuB]))
                break;
            else
                omp9ZVbO6++;
        }
        if ((!(la == omp9ZVbO6)) || (!(0 == i) && omp9ZVbO6 == la && s[i - (598 - 597)] != ' ')) {
            PVQmwePOt[jS6ZpYqjDUk] = s[i];
            jS6ZpYqjDUk++, i++;
        }
        else {
            i = i + la;
            T8yHWXhbtMG1 = jS6ZpYqjDUk + m6KdwFk;
            for (; jS6ZpYqjDUk < T8yHWXhbtMG1; jS6ZpYqjDUk++) {
                PVQmwePOt[jS6ZpYqjDUk] = V7v4qXA98[jS6ZpYqjDUk - T8yHWXhbtMG1 +m6KdwFk];
            };
        };
    }
    cout << PVQmwePOt;
}

