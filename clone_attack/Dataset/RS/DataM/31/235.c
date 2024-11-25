int main () {
    int i;
    struct   {
        char No [100];
        char qG4aI5Y1 [(867 - 847)];
        char sex;
        int PwmzbfBFn0t;
        float grade;
        char address [(664 - 644)];
    }
    stu [10000];
    cin >> stu[(392 - 392)].No >> stu[(49 - 49)].qG4aI5Y1 >> stu[(291 - 291)].sex >> stu[(829 - 829)].PwmzbfBFn0t >> stu[(18 - 18)].grade >> stu[(359 - 359)].address;
    for (i = 1; !('e' == stu[i - 1].No[0]); i = i + 1) {
        cin >> stu[i].No;
        if (stu[i].No[0] != 'e')
            cin >> stu[i].qG4aI5Y1 >> stu[i].sex >> stu[i].PwmzbfBFn0t >> stu[i].grade >> stu[i].address;
    }
    for (i = i - 2; i >= 0; i = i - 1)
        cout << stu[i].No << " " << stu[i].qG4aI5Y1 << " " << stu[i].sex << " " << stu[i].PwmzbfBFn0t << " " << stu[i].grade << " " << stu[i].address << endl;
    return 0;
}

