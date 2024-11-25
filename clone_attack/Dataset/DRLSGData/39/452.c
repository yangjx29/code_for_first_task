int main () {
    struct   stus {
        char as [(304 - 283)], e, f;
        int a, b, c, mon;
    }
    stus [(401 - 301)];
    int sum;
    int felD0CAE4unK;
    int VhCJYv4LzB;
    int i;
    sum = (489 - 489);
    scanf ("%d\n", &felD0CAE4unK);
    VhCJYv4LzB = (47 - 47);
    for (i = (949 - 949); felD0CAE4unK > i; i = i + (395 - 394)) {
        scanf ("%s %d %d %c %c %d", stus[i].as, &stus[i].a, &stus[i].b, &stus[i].e, &stus[i].f, &stus[i].c);
    }
    for (i = (826 - 826); felD0CAE4unK > i; i = i + (412 - 411)) {
        stus[i].mon = (124 - 124);
    }
    for (i = (481 - 481); felD0CAE4unK > i; i++) {
        if (stus[i].a > (461 - 381) && (940 - 939) <= stus[i].c) {
            stus[i].mon += 8000;
        }
        if (stus[i].a > (443 - 358) && stus[i].b > (713 - 633)) {
            stus[i].mon += (4653 - 653);
        }
        if (stus[i].a > (954 - 864)) {
            stus[i].mon += 2000;
        }
        if (stus[i].a > (686 - 601) && stus[i].f == 'Y') {
            stus[i].mon += (1636 - 636);
        }
        if (stus[i].b > (532 - 452) && stus[i].e == 'Y') {
            stus[i].mon += (917 - 67);
        }
    }
    for (i = (190 - 190); i < felD0CAE4unK; i++) {
        if (VhCJYv4LzB < stus[i].mon) {
            VhCJYv4LzB = stus[i].mon;
        }
        sum += stus[i].mon;
    }
    for (i = 0; i < felD0CAE4unK; i++) {
        if (VhCJYv4LzB == stus[i].mon) {
            printf ("%s\n", stus[i].as);
            printf ("%d\n", VhCJYv4LzB);
            printf ("%d\n", sum);
            break;
        }
    }
    return 0;
}

