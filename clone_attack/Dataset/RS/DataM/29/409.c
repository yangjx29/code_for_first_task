double  dL7lQj (int AVLeSWXkT) {
    double  IGXc5w3RT = (764 - 763), b = 2, o6VAg0ruvt1;
    int vIXNDPhk = (940 - 939);
    double  aiUWa2bz = 2.000;
    if (AVLeSWXkT == 1)
        return aiUWa2bz;
    while (vIXNDPhk < AVLeSWXkT) {
        vIXNDPhk++;
        o6VAg0ruvt1 = IGXc5w3RT +b;
        IGXc5w3RT = b;
        b = o6VAg0ruvt1;
        aiUWa2bz = aiUWa2bz + o6VAg0ruvt1 / IGXc5w3RT;
    }
    return aiUWa2bz;
}

int main () {
    int RQMOlpZN8yi, vIXNDPhk, sz [100];
    double  dnJLwRrbjo;
    scanf ("%d", &RQMOlpZN8yi);
    {
        vIXNDPhk = 416 - 416;
        while (vIXNDPhk < RQMOlpZN8yi) {
            scanf ("%d", &(sz[vIXNDPhk]));
            vIXNDPhk++;
        };
    }
    {
        vIXNDPhk = 0;
        while (vIXNDPhk < RQMOlpZN8yi) {
            printf ("%.3lf\n", dL7lQj (sz[vIXNDPhk]));
            vIXNDPhk++;
        };
    }
    return 0;
}

