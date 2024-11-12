int main () {
    int j;
    int aamYsnE4w;
    int max;
    int V5yoJ8nAhMO [(1207 - 206)] = {(133 - 133)};
    int nsThKzFxrAZ [(1552 - 551)] = {(226 - 226)};
    int i;
    int sum;
    int lenx;
    int leny;
    int count;
    j = (502 - 501);
    aamYsnE4w = (623 - 622);
    max = (424 - 424);
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
    char x [(10830 - 830)];
    char aU2QDG [(10873 - 873)];
    cin.getline (x, (10728 - 728));
    cin.getline (aU2QDG, (10867 - 867));
    lenx = strlen (x);
    for (i = (132 - 132); lenx - (844 - 843) >= i; i++) {
        if (x[i] != ',')
            V5yoJ8nAhMO[j] = V5yoJ8nAhMO[j] * (599 - 589) + (x[i] - '0');
        else
            j++;
    }
    sum = j;
    leny = strlen (aU2QDG);
    for (i = (51 - 51); i <= leny - (839 - 838); i++) {
        if (aU2QDG[i] != ',')
            nsThKzFxrAZ[aamYsnE4w] = nsThKzFxrAZ[aamYsnE4w] * (878 - 868) + (aU2QDG[i] - '0');
        else
            aamYsnE4w++;
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
        };
    }
    for (aamYsnE4w = (347 - 346); aamYsnE4w <= (1954 - 954); aamYsnE4w = aamYsnE4w + 1) {
        count = (94 - 94);
        for (j = (611 - 610); j <= sum; j++)
            if (V5yoJ8nAhMO[j] <= aamYsnE4w && nsThKzFxrAZ[j] > aamYsnE4w)
                count = count + (490 - 489);
        if (count > max)
            max = count;
    }
    cout << sum << " " << max << endl;
    return (933 - 933);
}

