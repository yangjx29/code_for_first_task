struct   student {
    char a8tKRYQicW [20];
    int HeAO0kojmr;
    int qHG1Qt5;
    char wIwE0jfbmcQg;
    char kGTySscElXz;
    int e7qXWjr;
};
struct   student mDdM916inf [100];

int main () {
    int n7IGcT1vRgpt, Ee0WYuw1, e7qXWjr;
    int wIwE0jfbmcQg [100] = {0};
    int V5aAkyUx2wm = 0, cTu5i4aA = 0;
    scanf ("%d", &n7IGcT1vRgpt);
    {
        Ee0WYuw1 = 0;
        while (n7IGcT1vRgpt > Ee0WYuw1) {
            scanf ("%s%d%d %c %c %d", mDdM916inf[Ee0WYuw1].a8tKRYQicW, &mDdM916inf[Ee0WYuw1].HeAO0kojmr, &mDdM916inf[Ee0WYuw1].qHG1Qt5, &mDdM916inf[Ee0WYuw1].wIwE0jfbmcQg, &mDdM916inf[Ee0WYuw1].kGTySscElXz, &mDdM916inf[Ee0WYuw1].e7qXWjr);
            Ee0WYuw1++;
        }
    }
    {
        Ee0WYuw1 = 0;
        for (; Ee0WYuw1 < n7IGcT1vRgpt;) {
            if (80 < mDdM916inf[Ee0WYuw1].HeAO0kojmr && 1 <= mDdM916inf[Ee0WYuw1].e7qXWjr)
                wIwE0jfbmcQg[Ee0WYuw1] += 8000;
            if (85 < mDdM916inf[Ee0WYuw1].HeAO0kojmr && 80 < mDdM916inf[Ee0WYuw1].qHG1Qt5)
                wIwE0jfbmcQg[Ee0WYuw1] += 4000;
            if (mDdM916inf[Ee0WYuw1].HeAO0kojmr > 90)
                wIwE0jfbmcQg[Ee0WYuw1] += 2000;
            if (85 < mDdM916inf[Ee0WYuw1].HeAO0kojmr && mDdM916inf[Ee0WYuw1].kGTySscElXz == 'Y')
                wIwE0jfbmcQg[Ee0WYuw1] += 1000;
            if (mDdM916inf[Ee0WYuw1].qHG1Qt5 > 80 && mDdM916inf[Ee0WYuw1].wIwE0jfbmcQg == 'Y')
                wIwE0jfbmcQg[Ee0WYuw1] += 850;
            if (cTu5i4aA < wIwE0jfbmcQg[Ee0WYuw1])
                cTu5i4aA = wIwE0jfbmcQg[Ee0WYuw1];
            V5aAkyUx2wm += wIwE0jfbmcQg[Ee0WYuw1];
            Ee0WYuw1++;
        }
    }
    {
        Ee0WYuw1 = 0;
        for (; Ee0WYuw1 < n7IGcT1vRgpt;) {
            if (wIwE0jfbmcQg[Ee0WYuw1] == cTu5i4aA) {
                e7qXWjr = Ee0WYuw1;
                break;
            }
            Ee0WYuw1++;
        }
    }
    printf ("%s\n%d\n%d\n", mDdM916inf[e7qXWjr].a8tKRYQicW, wIwE0jfbmcQg[e7qXWjr], V5aAkyUx2wm);
}

