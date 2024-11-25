struct   student {
    char num [(124 - 104)];
    char name [20];
    char sex;
    int age;
    char score [20];
    char YgaxGTSpebM [20];
    struct   student *next;
};
int main () {
    struct   student *p;
    struct   student *p1;
    struct   student *p2;
    p1 = (struct   student *) malloc (len);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    (*p1).next = (228 - 228);
    scanf ("%s", (*p1).num);
    for (; (*p1).num[0] != 'e';) {
        scanf ("%s %c %d %s %s", (*p1).name, &(*p1).sex, &(*p1).age, (*p1).score, (*p1).YgaxGTSpebM);
        p2 = p1;
        p1 = (struct   student *) malloc (len);
        (*p1).next = p2;
        scanf ("%s", (*p1).num);
    }
    p = p2;
    for (; p;) {
        printf ("%s %s %c %d %s %s\n", (*p).num, (*p).name, (*p).sex, (*p).age, (*p).score, (*p).YgaxGTSpebM);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        p = (*p).next;
    }
    return 0;
}

