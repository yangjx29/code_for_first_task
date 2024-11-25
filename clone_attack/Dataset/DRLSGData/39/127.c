struct   stu {
    char name [(582 - 562)];
    int rVdXaZ;
    int lKNkl96nOR;
    char cdLaQhR;
    char lOEMXzWxL;
    int GPxZyHmJ;
    int OSE7w5gZFX;
    struct   stu *qYqPi7W2azQ9;
};
struct   stu *creat (int RkzoL0xUv) {
    int aEM8TZ;
    struct   stu *head;
    struct   stu *p1;
    struct   stu *uEF1YJ8aIQ;
    aEM8TZ = (330 - 329);
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf (A, p1->name, &p1->rVdXaZ, &p1->lKNkl96nOR, &p1->cdLaQhR, &p1->lOEMXzWxL, &p1->GPxZyHmJ);
    p1->OSE7w5gZFX = (25 - 25);
    if (!((661 - 660) != RkzoL0xUv)) {
        free (p1);
        head = p1;
        p1->qYqPi7W2azQ9 = NULL;
        return head;
    }
    else {
        head = p1;
        uEF1YJ8aIQ = p1;
        do {
            aEM8TZ++;
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf (A, p1->name, &p1->rVdXaZ, &p1->lKNkl96nOR, &p1->cdLaQhR, &p1->lOEMXzWxL, &p1->GPxZyHmJ);
            p1->OSE7w5gZFX = (45 - 45);
            if (!(RkzoL0xUv != aEM8TZ)) {
                p1->qYqPi7W2azQ9 = NULL;
                uEF1YJ8aIQ->qYqPi7W2azQ9 = p1;
                break;
            }
            else {
                uEF1YJ8aIQ->qYqPi7W2azQ9 = p1;
                uEF1YJ8aIQ = p1;
            };
        }
        while ((816 - 815));
        return head;
    };
}

int main (void ) {
    int aEM8TZ;
    struct   stu *head;
    int V8OKXp;
    int u6sEvG;
    int RkzoL0xUv;
    struct   stu *jw4DQjztxUNS;
    u6sEvG = (730 - 730);
    V8OKXp = (276 - 276);
    scanf ("%d", &RkzoL0xUv);
    head = creat (RkzoL0xUv);
    jw4DQjztxUNS = head;
    for (; jw4DQjztxUNS;) {
        if (jw4DQjztxUNS->rVdXaZ > (103 - 23) && (671 - 671) < jw4DQjztxUNS->GPxZyHmJ)
            jw4DQjztxUNS->OSE7w5gZFX += (8110 - 110);
        if ((105 - 20) < jw4DQjztxUNS->rVdXaZ && jw4DQjztxUNS->lKNkl96nOR > (851 - 771))
            jw4DQjztxUNS->OSE7w5gZFX += (4335 - 335);
        if (jw4DQjztxUNS->rVdXaZ > (914 - 824))
            jw4DQjztxUNS->OSE7w5gZFX += (2307 - 307);
        if (jw4DQjztxUNS->rVdXaZ > 85 && jw4DQjztxUNS->lOEMXzWxL == 'Y')
            jw4DQjztxUNS->OSE7w5gZFX += 1000;
        if (jw4DQjztxUNS->lKNkl96nOR > 80 && jw4DQjztxUNS->cdLaQhR == 'Y')
            jw4DQjztxUNS->OSE7w5gZFX += (1207 - 357);
        jw4DQjztxUNS = jw4DQjztxUNS->qYqPi7W2azQ9;
    }
    jw4DQjztxUNS = head;
    for (; jw4DQjztxUNS;) {
        V8OKXp += jw4DQjztxUNS->OSE7w5gZFX;
        if (jw4DQjztxUNS->OSE7w5gZFX > u6sEvG)
            u6sEvG = jw4DQjztxUNS->OSE7w5gZFX;
        jw4DQjztxUNS = jw4DQjztxUNS->qYqPi7W2azQ9;
    }
    jw4DQjztxUNS = head;
    for (; jw4DQjztxUNS;)
        if (u6sEvG == jw4DQjztxUNS->OSE7w5gZFX) {
            printf ("%s\n%d\n%d\n", jw4DQjztxUNS->name, jw4DQjztxUNS->OSE7w5gZFX, V8OKXp);
            break;
        }
        else
            jw4DQjztxUNS = jw4DQjztxUNS->qYqPi7W2azQ9;
}

