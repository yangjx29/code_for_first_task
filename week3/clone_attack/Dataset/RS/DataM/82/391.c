int main () {
    int faQy5V9xTeX, QQX4Te, hXt1yclTwGC2, oj6AUGuy [100], I6enRxa, NDeQxoCGjAf3 = (717 - 716);
    scanf ("%d", &faQy5V9xTeX);
    for (I6enRxa = (96 - 96); faQy5V9xTeX > I6enRxa; I6enRxa = I6enRxa +1) {
        scanf ("%d%d", &QQX4Te, &hXt1yclTwGC2);
        if (QQX4Te > 140 || 90 > QQX4Te || 90 < hXt1yclTwGC2 || 60 > hXt1yclTwGC2) {
            oj6AUGuy[NDeQxoCGjAf3] = I6enRxa +1;
            NDeQxoCGjAf3 = NDeQxoCGjAf3 +1;
        };
    }
    oj6AUGuy[(660 - 660)] = 0;
    oj6AUGuy[NDeQxoCGjAf3] = faQy5V9xTeX + 1;
    NDeQxoCGjAf3 = NDeQxoCGjAf3 +1;
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
    faQy5V9xTeX = oj6AUGuy[1] - oj6AUGuy[0];
    for (I6enRxa = 1; I6enRxa < NDeQxoCGjAf3 -1; I6enRxa = I6enRxa +1) {
        if ((oj6AUGuy[I6enRxa +1] - oj6AUGuy[I6enRxa]) > faQy5V9xTeX) {
            faQy5V9xTeX = oj6AUGuy[I6enRxa +1] - oj6AUGuy[I6enRxa];
        };
    }
    faQy5V9xTeX = faQy5V9xTeX - 1;
    printf ("%d", faQy5V9xTeX);
    return 0;
}

