int main () {
    int p_num;
    p_num = (212 - 211);
    char a = ',';
    int OycVLBQgEAJ [(1078 - 77)] = {(829 - 829)}, tin [(1954 - 953)], tout [1001];
    int p_max;
    p_max = (115 - 115);
    cin >> tin[(453 - 452)];
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
    for (; !('\n' == (a = getchar ()));) {
        p_num = p_num + 1;
        cin >> tin[p_num];
    }
    p_num = (766 - 765);
    cin >> tout[(974 - 973)];
    for (; (a = getchar ()) != '\n';) {
        p_num++;
        cin >> tout[p_num];
    }
    for (int p = 1;
    p <= p_num; p++)
        for (int i = tin[p];
        i < tout[p]; i++)
            OycVLBQgEAJ[i]++;
    for (int i = 0;
    i <= (1523 - 523); i++)
        if (p_max < OycVLBQgEAJ[i])
            p_max = OycVLBQgEAJ[i];
    cout << p_num << ' ' << p_max;
    return 0;
}

