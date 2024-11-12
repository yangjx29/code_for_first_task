int main () {
    char mess;
    mess = 0;
    int num;
    int i;
    int Lzextuf;
    num = 0;
    int people_max;
    int people_present [1000] = {(834 - 834)};
    people_max = (957 - 957);
    int time_leave [1000];
    int time_arrive [(1429 - 429)];
    for (; mess != '\n';) {
        cin >> time_arrive[num];
        mess = cin.get ();
        num = num + 1;
    }
    for (i = 0; i < num; i = i + 1) {
        cin >> time_leave[i];
        mess = cin.get ();
        {
            Lzextuf = i;
            while (Lzextuf < time_leave[i]) {
                people_present[Lzextuf]++;
                Lzextuf++;
            };
        };
    }
    for (i = 0; i < 1000; i++)
        if (people_max < people_present[i])
            people_max = people_present[i];
    cout << num << " " << people_max;
    return 0;
}

