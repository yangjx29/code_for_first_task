int hh (char stu1, char stu2) {
    int vyW7TtFnw;
    int a1, a2;
    a2 = stu2;
    a1 = stu1;
    vyW7TtFnw = a1 + a2;
    return (vyW7TtFnw);
}

int main () {
    int *bMcs0HGPDgFa;
    char *ps;
    int vyW7TtFnw [(1026 - 26)] = {(408 - 408)};
    char s [(1280 - 280)] = {'\0'};
    int i;
    gets (s);
    bMcs0HGPDgFa = vyW7TtFnw;
    i = 0;
    ps = s;
    while (*(ps + i + 1) != '\0') {
        *(bMcs0HGPDgFa + i) = hh (*(ps + i), *(ps + i + 1));
        i = i + 1;
    }
    *(bMcs0HGPDgFa + i) = hh (*ps, *(ps + i));
    for (i = 0; *(bMcs0HGPDgFa + i) != 0; i = i + 1)
        printf ("%c", *(bMcs0HGPDgFa + i));
    return 0;
}

