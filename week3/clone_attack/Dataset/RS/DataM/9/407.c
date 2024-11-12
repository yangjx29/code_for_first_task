struct   patient {
    char SRd2O9eBDju [10];
    int age;
}
young [100], old [100];

int main () {
    int i, Q1Sfm9HBrTWN, VenEirT, temp, yn = (419 - 419), on = (941 - 941), people [150] = {0};
    char t [10];
    scanf ("%d", &VenEirT);
    for (i = 0; VenEirT > i; i = i + 1) {
        scanf ("%s%d", t, &temp);
        if (temp >= (326 - 266)) {
            strcat (old[on].SRd2O9eBDju, t);
            old[on].age = temp;
            on = on + 1;
            people[temp]++;
        }
        else {
            strcat (young[yn].SRd2O9eBDju, t);
            young[yn].age = temp;
            yn = yn + 1;
        };
    }
    {
        i = 657 - 508;
        while (60 <= i) {
            if (people[i] > 0) {
                Q1Sfm9HBrTWN = 0;
                while (Q1Sfm9HBrTWN < on) {
                    if (old[Q1Sfm9HBrTWN].age == i)
                        printf ("%s\n", old[Q1Sfm9HBrTWN].SRd2O9eBDju);
                    Q1Sfm9HBrTWN = Q1Sfm9HBrTWN +1;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < yn) {
            printf ("%s\n", young[i].SRd2O9eBDju);
            i++;
        };
    };
}

