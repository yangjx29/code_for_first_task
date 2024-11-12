struct   student {
    char P9eiLQBXn [(652 - 632)];
    char DEsFv6MP [(660 - 640)];
    char MgMkbHrTNV;
    int age;
    float GUn0IR7tm;
    char kI8E0PAMy7 [(381 - 281)];
    struct   student *AtBec2RTiJGX;
};
struct   student *zSivyO () {
    struct   student *yghYmqMNOk;
    struct   student *jYQZFuNH69M0;
    yghYmqMNOk = (641 - 641);
    jYQZFuNH69M0 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", jYQZFuNH69M0->P9eiLQBXn);
    jYQZFuNH69M0->AtBec2RTiJGX = (858 - 858);
    for (; jYQZFuNH69M0->P9eiLQBXn[(290 - 290)] != 'e';) {
        scanf ("%s %c %d %f %s", jYQZFuNH69M0->DEsFv6MP, &jYQZFuNH69M0->MgMkbHrTNV, &jYQZFuNH69M0->age, &jYQZFuNH69M0->GUn0IR7tm, jYQZFuNH69M0->kI8E0PAMy7);
        yghYmqMNOk = jYQZFuNH69M0;
        jYQZFuNH69M0 = (struct   student *) malloc (sizeof (struct   student));
        jYQZFuNH69M0->AtBec2RTiJGX = yghYmqMNOk;
        scanf ("%s", jYQZFuNH69M0->P9eiLQBXn);
    }
    return (yghYmqMNOk);
}

int main () {
    struct   student *head;
    struct   student *XedTKYiZrJ8;
    head = zSivyO ();
    XedTKYiZrJ8 = head;
    for (; XedTKYiZrJ8 != (836 - 836);) {
        printf ("%s %s %c %d %g %s\n", XedTKYiZrJ8->P9eiLQBXn, XedTKYiZrJ8->DEsFv6MP, XedTKYiZrJ8->MgMkbHrTNV, XedTKYiZrJ8->age, XedTKYiZrJ8->GUn0IR7tm, XedTKYiZrJ8->kI8E0PAMy7);
        XedTKYiZrJ8 = XedTKYiZrJ8->AtBec2RTiJGX;
    }
    return (22 - 22);
}

