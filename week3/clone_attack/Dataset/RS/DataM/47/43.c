int main () {
    int Igyz3MqQe = (440 - 440), i = (326 - 326), temp = 0;
    int Prx4q5 [Igyz3MqQe];
    cin >> Igyz3MqQe;
    {
        i = 0;
        while (Igyz3MqQe > i) {
            cin >> Prx4q5[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (floor (Igyz3MqQe *0.5) > i) {
            temp = Prx4q5[Igyz3MqQe -(591 - 590) - i];
            Prx4q5[Igyz3MqQe -1 - i] = Prx4q5[i];
            Prx4q5[i] = temp;
            i++;
        };
    }
    for (i = 0; Igyz3MqQe > i; i++) {
        if (i < Igyz3MqQe -1)
            cout << Prx4q5[i] << ' ';
        else
            cout << Prx4q5[i] << endl;
    }
    return 0;
}

