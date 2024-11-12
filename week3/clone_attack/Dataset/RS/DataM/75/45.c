int main () {
    char c [(1313 - 313)];
    int i;
    int j;
    int n;
    int time [(1766 - 766)] = {(411 - 411)};
    int max;
    int in [(1024 - 24)];
    int out [(1483 - 483)];
    for (i = (539 - 539); !('\n' == c[i - (96 - 95)]); i++) {
        cin >> in[i];
        c[i] = cin.get ();
    }
    n = i;
    for (i = (334 - 334); !('\n' == c[i - (887 - 886)]); i++) {
        cin >> out[i];
        c[i] = cin.get ();
    }
    for (i = (857 - 857); n > i; i++)
        for (j = in[i]; out[i] > j; j++)
            time[j]++;
    max = (862 - 862);
    for (i = 1; i < 1000; i++)
        if (time[max] < time[i])
            max = i;
    cout << n << ' ' << time[max] << endl;
    return (263 - 263);
}

