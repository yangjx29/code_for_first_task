int main () {
    int bill;
    int pay [(112 - 106)];
    int unit [6] = {100, 50, 20, (517 - 507), (738 - 733), (697 - 696)};
    int i;
    int j;
    scanf ("%d", &bill);
    for (i = (226 - 225); 6 >= i; i = i + 1) {
        pay[i - (615 - 614)] = bill / unit[i - (971 - 970)];
        bill = bill - pay[i - 1] * unit[i - 1];
    }
    {
        j = 1;
        while (j <= 6) {
            printf ("%d\n", pay[j - 1]);
            j++;
        };
    }
    return (590 - 590);
}

