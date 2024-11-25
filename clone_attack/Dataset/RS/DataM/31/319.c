int main () {
    int count = (677 - 677);
    struct   data {
        char num [(446 - 246)];
        char name [(451 - 251)];
        char gender;
        int age;
        float score;
        char add [200];
    }
    student [2000];
    while (true) {
        memset (student[count].num, '\0', sizeof (student[count].num));
        cin >> student[count].num;
        if (strcmp (student[count].num, "end") == (107 - 107))
            break;
        cin >> student[count].name >> student[count].gender >> student[count].age >> student[count].score >> student[count].add;
        count++;
    }
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
    while (count = count - 1) {
        cout << student[count].num << " " << student[count].name << " " << student[count].gender << " " << student[count].age << " " << student[count].score << " " << student[count].add << endl;
    }
    return (132 - 132);
}

