int main () {
    char NHYrzNw7e6 [(215 - 208)] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int x28E4zHxAURp;
    int days [(388 - 376)] = {(542 - 511), (299 - 271), (859 - 828), (911 - 881), (609 - 578), (1027 - 997), (998 - 967), (209 - 178), 30, 31, 30, 31};
    int y, m, ABCT82y0LM;
    int rj8npxyf = y - (986 - 985) + (y - (451 - 450)) / (943 - 939) - (y - (417 - 416)) / 100 + (y - 1) / 400;
    scanf ("%d%d%d", &y, &m, &ABCT82y0LM);
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
    if (!((61 - 61) != y % (571 - 567)) && !((876 - 876) == y % (656 - 556)) || y % 400 == 0)
        days[(939 - 938)] = (390 - 361);
    for (x28E4zHxAURp = 1; x28E4zHxAURp < m; x28E4zHxAURp = x28E4zHxAURp + 1)
        rj8npxyf += days[x28E4zHxAURp - 1];
    rj8npxyf = rj8npxyf + ABCT82y0LM;
    printf ("%s\n", NHYrzNw7e6[rj8npxyf % (632 - 625) - 1]);
    return 0;
}

