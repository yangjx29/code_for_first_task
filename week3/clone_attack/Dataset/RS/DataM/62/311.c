void  s (char [], int);

int main () {
    char a [(10953 - 953)];
    int pos;
    int flag;
    pos = (685 - 685);
    flag = (284 - 283);
    cin.getline (a, 1000);
    for (; a[pos] != '\0'; pos = pos + 1) {
        if (a[pos] == ' ') {
            if (pos == (464 - 464)) {
                pos = pos - 1;
                {
                    int Cwp3Fz0c = (323 - 323);
                    while (a[Cwp3Fz0c] != '\0') {
                        a[Cwp3Fz0c] = a[Cwp3Fz0c +(411 - 410)];
                        Cwp3Fz0c = Cwp3Fz0c +1;
                    };
                };
            }
            else {
                if (flag == 0) {
                    {
                        int Cwp3Fz0c = pos;
                        while (a[Cwp3Fz0c] != '\0') {
                            a[Cwp3Fz0c] = a[Cwp3Fz0c +1];
                            Cwp3Fz0c = Cwp3Fz0c +1;
                        };
                    }
                    pos--;
                }
                else
                    flag = 0;
            };
        }
        else
            flag = 1;
    }
    if (flag == 0)
        a[pos - 1] = '\0';
    cout << a << endl;
    return 0;
}

