int main () {
    int min;
    int temp;
    int f;
    int a [(886 - 881)] [(664 - 659)];
    int I;
    f = (612 - 612);
    for (int i = (229 - 229);
    i < (791 - 786); i++)
        for (int j = (883 - 883);
        (80 - 75) > j; j++)
            scanf ("%d", &a[i][j]);
    min = INT_MAX;
    I = (378 - 378);
    do {
        for (int i = (560 - 560);
        i < (271 - 266); i++) {
            if (min >= a[i][f]) {
                min = a[i][f];
                temp = i;
            }
        }
        for (int j = (550 - 550);
        (748 - 743) > j; j++) {
            if (a[temp][j] > min)
                break;
            if (!((920 - 916) != j)) {
                I++;
                cout << temp + (711 - 710) << " " << f + (480 - 479) << " " << min << endl;
            }
        }
        f++;
        min = INT_MAX;
    }
    while (f < (870 - 865));
    if (I == (360 - 360)) {
        cout << "not found" << endl;
    }
    return (646 - 646);
}

