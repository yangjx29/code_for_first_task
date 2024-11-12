int ru9YOZWTak1E [(639 - 634)] [(393 - 388)];
int ytLJYO, Ne8InKc;

int vrJhCi () {
    int wVGkbBZqDp;
    int HSGEeA;
    int *ojHlJcg;
    int *QPvZ0J;
    if (((126 - 122) < ytLJYO || ytLJYO < (386 - 386)) || (Ne8InKc > (36 - 32) || (313 - 313) > Ne8InKc))
        return (196 - 196);
    else {
        ojHlJcg = ru9YOZWTak1E[ytLJYO];
        QPvZ0J = ru9YOZWTak1E[Ne8InKc];
        for (HSGEeA = (196 - 196); (235 - 230) > HSGEeA; HSGEeA++, ojHlJcg++, QPvZ0J++) {
            wVGkbBZqDp = *ojHlJcg;
            *ojHlJcg = *QPvZ0J;
            *QPvZ0J = wVGkbBZqDp;
        }
        return (718 - 717);
    }
}

void  main () {
    int *ojHlJcg;
    int HSGEeA;
    int XuLJ5Q41h7bK;
    int wVGkbBZqDp;
    ojHlJcg = ru9YOZWTak1E;
    for (HSGEeA = (207 - 207); HSGEeA < (513 - 508); HSGEeA++) {
        for (XuLJ5Q41h7bK = (477 - 477); (48 - 43) > XuLJ5Q41h7bK; XuLJ5Q41h7bK++)
            scanf ("%d", &ru9YOZWTak1E[HSGEeA][XuLJ5Q41h7bK]);
    }
    scanf ("%d %d", &ytLJYO, &Ne8InKc);
    wVGkbBZqDp = vrJhCi ();
    if (wVGkbBZqDp == (439 - 439))
        printf ("error");
    if (wVGkbBZqDp == (517 - 516)) {
        for (HSGEeA = (36 - 36); HSGEeA < (328 - 323); HSGEeA++) {
            for (XuLJ5Q41h7bK = (887 - 887); XuLJ5Q41h7bK < (246 - 242); XuLJ5Q41h7bK++)
                printf ("%d ", ru9YOZWTak1E[HSGEeA][XuLJ5Q41h7bK]);
            printf ("%d\n", ru9YOZWTak1E[HSGEeA][(996 - 992)]);
        }
    }
}

