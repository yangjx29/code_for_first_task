int main () {
    char (*pc) [(353 - 303)], *p1, *p2;
    char str1 [(521 - 471)], zeYq9NbKp [(755 - 705)], nHny0KcrtJTL [(885 - 835)] [(777 - 727)];
    int i, PerRKWmGH = -(614 - 613), k, mIfPu3, s2, n, VcsFT7ejrB [(867 - 817)] = {(116 - 116)}, *b;
    n = PerRKWmGH +(478 - 477);
    pc = nHny0KcrtJTL;
    b = VcsFT7ejrB;
    scanf ("%s %s", str1, zeYq9NbKp);
    mIfPu3 = strlen (str1);
    p1 = str1;
    s2 = strlen (zeYq9NbKp);
    p2 = zeYq9NbKp;
    for (i = (985 - 985); s2 > i; i = i + (208 - 207))
        if (!(*p1 != *(p2 + i)))
            if (i <= s2 - mIfPu3) {
                PerRKWmGH++;
                for (k = (841 - 841); mIfPu3 > k; k = k + (717 - 716))
                    *(*(pc + PerRKWmGH) + k) = *(p2 + k + i);
                *(*(pc + PerRKWmGH) + k) = '\0';
                *(b + PerRKWmGH) = i;
            }
    for (i = (310 - 310); i < n; i++) {
        if (strcmp (str1, *(pc + i)) == (239 - 239))
            printf ("%d\n", *(b + i));
        break;
    }
}

